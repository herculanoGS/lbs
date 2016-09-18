#
# Longest Palindromic String
#
# Authors: Herculano Santos
#          Leonardo Silveira
#
# exports needed for PIC
# CC=picc18
# CFLAGS="--chip=18F4550"
#

BINARY=lps
OBJS=lps.o

all: $(BINARY)

$(BINARY): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
	
%.o:%.c
	$(CC) $(CFLAGS) -c $^
	
clean: 
	rm -rf *.o lps
