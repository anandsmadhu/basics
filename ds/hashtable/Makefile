
CFLAGS = -O
CC = g++

hashtest: main.o hash.o
	$(CC) $(CFLAGS) -o hashtest main.o hash.o
main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp
hash.o: hash.cpp
	$(CC) $(CFLAGS) -c hash.cpp
clean:
	rm -f core *.o