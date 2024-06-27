import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, SetLaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.conditions import LaunchConfigurationEquals, IfCondition
from launch.substitutions import Command, LaunchConfiguration, PathJoinSubstitution, TextSubstitution
from launch_ros.parameter_descriptions import ParameterValue
import xacro

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time')

    # Process the URDF file
    pkg_path = get_package_share_directory('go1_description')
    xacro_file = os.path.join(pkg_path, 'xacro', 'robot.xacro')
    robot_description_config = xacro.process_file(xacro_file).toxml()
    # robot_description_config = Command(['xacro ', xacro_file, ' use_ros2_control:=', LaunchConfiguration('use_ros2_control'), ' sim_mode:=', LaunchConfiguration('use_sim_time')])
    
    return LaunchDescription([
        DeclareLaunchArgument(
            name='use_jsp', 
            default_value='gui',
            choices=['gui', 'jsp', 'none'],
            description='Choose if joint_state_publisher is launched'
        ),
        DeclareLaunchArgument(
            name='use_rviz', 
            default_value='true',
            choices=['true', 'false'],
            description='Choose if rviz is launched'
        ),
        DeclareLaunchArgument(
            name='use_nav2_links', 
            default_value='false',
            choices=['true', 'false'],
            description='Use Nav2 frames in URDF'
        ),
        DeclareLaunchArgument(
            name='fixed_frame', 
            default_value='base',
            description='Fixed frame for RVIZ'
        ),
        DeclareLaunchArgument(
            name='namespace', 
            default_value='',
            description='Choose a namespace for the launched topics.'
        ),
        SetLaunchConfiguration(
            name='config_file',
            value='go1.rviz'
        ),
        SetLaunchConfiguration(
            name='model',
            value=PathJoinSubstitution([get_package_share_directory('go1_description'), 'xacro', 'robot.xacro'])
        ),
        SetLaunchConfiguration(
            name='rvizconfig',
            value=PathJoinSubstitution([get_package_share_directory('go1_description'), 'config', LaunchConfiguration('config_file')])
        ),
        Node(
            package='joint_state_publisher',
            executable='joint_state_publisher',
            namespace=LaunchConfiguration('namespace'),
            condition=LaunchConfigurationEquals('use_jsp', 'jsp')
        ),
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            namespace=LaunchConfiguration('namespace'),
            condition=LaunchConfigurationEquals('use_jsp', 'gui')
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            parameters=[{
                'robot_description': ParameterValue(
                    Command([
                        'xacro ', LaunchConfiguration('model'),
                        TextSubstitution(text=' use_nav2_links:='),
                        LaunchConfiguration('use_nav2_links'),
                    ]),
                    value_type=str
                ),
                'frame_prefix': [LaunchConfiguration('namespace'), '/']
            }],
            namespace=LaunchConfiguration('namespace')
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=[
                '-d', LaunchConfiguration('rvizconfig'),
                '-f', LaunchConfiguration('fixed_frame')
            ],
            condition=IfCondition(LaunchConfiguration('use_rviz'))
        ),
        DeclareLaunchArgument(
            'use_sim_time',
            default_value = 'false',
            description = 'Use sim time if true'
        ),
        # Include the Gazebo launch file, provided by the gazebo_ros package
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource([os.path.join(
                get_package_share_directory('gazebo_ros'), 'launch', 'gazebo.launch.py')]),
        ),
        # Run the spawner node from the gazebo_ros package. The entity name doesn't really matter if you only have a single robot.
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-topic', 'robot_description', '-entity', 'robot', '-x', '0.0', '-y', '0.0', '-z', '0.0'],
            output='screen'
        ),
    ])
