
CFLAGS = -O
CC = g++

graphmain: graphmain.o graph.o
	$(CC) $(CFLAGS) -o graphmain graphmain.o graph.o
graphmain.o: graphmain.cpp
	$(CC) $(CFLAGS) -c graphmain.cpp
graph.o: graph.cpp
	$(CC) $(CFLAGS) -c graph.cpp
clean:
	rm -f core *.o *.exe