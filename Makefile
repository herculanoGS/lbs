#
# Longest Palindromic String
#
# Authors: Herculano Santos
#          Leonardo Silveira
#
# Configurable makefile intended to allow changing the compiler
# 
# exports needed for PIC (for example)
CC=picc18
CFLAGS="--chip=18F4550"

all: lps.hex

lps.hex: lps.c
	$(CC) $(CFLAGS) lps.c

clean: 
	rm -rf *.o lps *.d *.p1 *.pre
