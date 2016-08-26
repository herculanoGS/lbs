
lbs : build/lbs.o
	gcc build/lbs.o -o lbs 
	
build/lbs.o : src/lbs.c
	gcc -c -g src/lbs.c -o build/lbs.o

all : lbs

clean :
	rm -rf lbs build/lbs.o
	