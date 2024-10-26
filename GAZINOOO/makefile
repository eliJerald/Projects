OBJS    = casino.o
CC      = g++
DEPS    = card.h 

all: casino

casino: $(OBJS)
	$(CC) -o casino $(OBJS)

casino.o:	casino.cpp $(DEPS)
	$(CC) -c casino.cpp


clean:
	rm *.o