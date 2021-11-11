import os
import subprocess

for filename in os.listdir(os.getcwd()):   
    proc = subprocess.Popen(["./a.out", filename])
    print()
    proc.wait()
