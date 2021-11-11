import ctypes
import numpy
import glob

#find the shared library, the path depends on the platform and python version
libfile = glob.glob('build/*/sum*.so')[0]
print(glob.glob('build/*/sum*.so'))

#1. Open the shared library
mylib = ctypes.CDLL(libfile)

#2. tell Python the argument and result types of function mysum
mlib.mysum.restype = ctypes.c_longlong
mlib.mysum.argtypes = [ctypes.c_int, numpy.ctypeslib.ndpointer(dtype = numpy.int32)]


array = numpy.arange(0, 100000000, 1, numpy.int32)

#3. Call function mysum
array_sum = lib.sum(len(array), array)

print('sum of array: {}'.format(array_sum))

