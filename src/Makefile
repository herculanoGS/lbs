#
# Longest Palindromic String
#
# Authors: Herculano Santos
#          Leonardo Silveira
#
# exports needed for PIC
# CC=picc18
# CFLAGS="--chip=18F4550"
# LDFLAGS= to be discovered 
#

BINARY=../lps
OBJS=lohi.o pal.o main.o

all: $(BINARY)

$(BINARY): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^
	
%.o:%.c
	$(CC) $(CFLAGS) -c $^
	
clean: 
	rm -rf *.o