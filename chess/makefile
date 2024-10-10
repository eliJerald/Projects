OBJS    = main.o piece.o
CC      = g++
DEPS    = piece.h 

all: main

main: $(OBJS)
	$(CC) -o main $(OBJS)

main.o:	main.cpp $(DEPS)
	$(CC) -c main.cpp

piece.o: piece.cpp $(DEPS)
	$(CC) -c piece.cpp

clean:
	rm *.o