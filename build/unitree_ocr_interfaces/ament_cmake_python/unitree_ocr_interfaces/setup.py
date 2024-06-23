from setuptools import find_packages
from setuptools import setup

setup(
    name='unitree_ocr_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('unitree_ocr_interfaces', 'unitree_ocr_interfaces.*')),
)
