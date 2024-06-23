# File: launch/spawn_go1.launch.py
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    pkg_gazebo_ros = get_package_share_directory('gazebo_ros')
    pkg_go1_description = get_package_share_directory('go1_description')
    
    xacro_file = os.path.join(pkg_go1_description, 'xacro', 'robot.xacro')
    urdf_file = os.path.join(pkg_go1_description, 'xacro', 'robot.urdf')

    # Convert Xacro to URDF
    os.system(f'ros2 run xacro xacro {xacro_file} -o {urdf_file}')

    return LaunchDescription([
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzserver.launch.py')
            ),
        ),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(pkg_gazebo_ros, 'launch', 'gzclient.launch.py')
            ),
        ),
        Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-file', urdf_file, '-entity', 'go1_name'],
            output='screen'
        )
    ])
