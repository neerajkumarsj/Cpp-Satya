from ctypes import cdll
import os, pathlib


def wrap_bar():
    sfile = os.listdir("/home/neerajkumarsj/Neeraj/Cpp/New/build/lib.linux-x86_64-3.9/spam")
    os.chdir("/home/neerajkumarsj/Neeraj/Cpp/New/build/lib.linux-x86_64-3.9/spam")
    lib = cdll.LoadLibrary(sfile[2])
    return lib.bar()
