#
# Longest Palindromic String
#
# Authors: Herculano Santos
#          Leonardo Silveira
#
# exports needed for PIC18
# CC=picc18
# CFLAGS="--chip=18F4550"
#

BINARY=../lps

all: $(BINARY)

$(BINARY): main.c
	$(CC) $(CFLAGS) main.c

clean: 
	rm -rf *.o
	rm -rf *.d
	rm -rf *.p1
	rm -rf *.as
	rm -rf *.pre
	rm -rf *.sdb
	rm -rf *.cmf
	rm -rf *.cof
	rm -rf *.hex
	rm -rf *.hxl
	rm -rf *.obj
	rm -rf *.sym
	rm -rf startup.*
	