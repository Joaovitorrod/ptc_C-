import serial 
import sys

s = serial.Serial(sys.argv[1])
msg = s.read()
print (msg.decode())
s.close
