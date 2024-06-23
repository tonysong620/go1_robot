from setuptools import find_packages
from setuptools import setup

setup(
    name='unitree_inspection_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('unitree_inspection_interfaces', 'unitree_inspection_interfaces.*')),
)
