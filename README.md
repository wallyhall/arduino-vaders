# arduino-vaders
Pew pew pew!

## What is this?
A personal exercise in revisiting embedded software; something I last touched (in anger) over a decade ago.

This code is not clean.  This code is not pretty.  This code is not an example of good.  It may however provide a useful introduction into how *not* to do something.

## Better places to visit
There are a couple of resources I've relied upon heavily during this (Christmas 2020, COVID lockdown) project.

BatSocks provides a superb introduction to "monochrome composite PAL video":
<br>&nbsp;&nbsp;http://www.batsocks.co.uk/readme/video_timing.htm

TVOut is a polished Arduino library that one really should use rather than rolling your own (like I did):
<br>&nbsp;&nbsp;https://github.com/Avamander/arduino-tvout/tree/master/TVout

Finally, and quite obviously, the AVR CPU docs:
<br>&nbsp;&nbsp;http://ww1.microchip.com/downloads/en/DeviceDoc/AVR-Instruction-Set-Manual-DS40002198A.pdf

There's a great doc covering optimising C for AVR architectures too:
<br>&nbsp;&nbsp;http://ww1.microchip.com/downloads/en/AppNotes/doc8453.pdf

## Hardware requirements
This code is developed and tested upon an Arduino Uno - using 3 resistors (values TBC) and an RCA adaptor (all slung precariously off a breadboard).

Circuit diagram to follow.
