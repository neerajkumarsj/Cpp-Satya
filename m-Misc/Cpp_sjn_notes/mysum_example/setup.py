from setuptools import setup, Extension
from Cython.Build import cythonize

#Compile *mysum.cpp* into a shared library

setup(
	ext_modules = [Extension('mysum', ['mysum.cpp'],),],
	
)

