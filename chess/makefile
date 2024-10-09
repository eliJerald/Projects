OBJS    = main.o piece.o king.o queen.o bishop.o knight.o rook.o pawn.o
CC      = g++
DEPS    = piece.h king.cpp queen.cpp bishcppp.cpp knight.cpp rook.cpp pawn.cpp

all: main

main: $(OBJS)
	$(CC) -o main $(OBJS)

main.o:	main.cpp $(DEPS)
	$(CC) -c main.cpp

piece.o: piece.cpp $(DEPS)
	$(CC) -c piece.cpp

king.o: king.cpp $(DEPS)
	$(CC) -c king.cpp
	
queen.o: queen.cpp $(DEPS)
	$(CC) -c queen.cpp

bishop.o: bishop.cpp $(DEPS)
	$(CC) -c bishop.cpp

knight.o: knight.cpp $(DEPS)
	$(CC) -c knight.cpp

rook.o: rook.cpp $(DEPS)
	$(CC) -c rook.cpp

pawn.o: pawn.cpp $(DEPS)
	$(CC) -c pawn.cpp


clean:
	rm $(OBJS) main