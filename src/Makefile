#
# Longest Palindromic String
#
# Authors: Herculano Santos
#          Leonardo Silveira
#

BINARY=../lps
OBJS=lohi.o pal.o main.o

all: $(BINARY)

$(BINARY): $(OBJS)
	$(CC) -o $@ $^
	
%.o:%.c
	$(CC) -c $<
	
clean: 
	rm -rf *.o