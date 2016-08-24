
lbs : lbs.o
	gcc lbs.o -o lbs 
	
lbs.o : lbs.c
	gcc -c lbs.c

all : lbs

clean :
	rm lbs lbs.o
	