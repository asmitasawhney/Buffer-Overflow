#!/usr/bin/python
# File: calc_payload.py
 
from os import system
from time import sleep
  
payload, prog = "", "/home/speedy/Asmita_KarambaAssessment/Practice/code"
for i in range(500):
          payload = payload + (i*10)*"A"
          print "Writing %d bytes to the stack..." % len(payload)
          status = system("echo %s | %s" % (payload, prog))
          if status != 0:
              print "Program crash with %d bytes" % len(payload) 
              exit(0)
          sleep(0.5)
