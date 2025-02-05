CC=g++
CFLAGS=-std=c++11 -Wall -pedantic -O2 -lpthread

all: httpcon

httpcon.o: clientSocket.o HTTPSimple.o httpcon.cpp   Exception.hpp
	${CC} ${CFLAGS} -c httpcon.cpp -o httpcon.o clientSocket.o
HTTPSimple.o: HTTPSimple.cpp HTTPSimple.hpp Exception.hpp
	${CC} ${CFLAGS} -c HTTPSimple.cpp -o HTTPSimple.o
#TAGParser.o: TAGParser.cpp TAGParser.hpp
#	${CC} ${CFLAGS} -c TAGParser.cpp -o TAGParser.o
clientSocket.o: Socket.cpp Socket.hpp Exception.hpp
	${CC} ${CFLAGS} -c Socket.cpp -o clientSocket.o
httpcon: httpcon.o HTTPSimple.o
	${CC} ${CFLAGS} httpcon.o clientSocket.o HTTPSimple.o -o httpcon

clean:
	rm -rf httpcon.o clientSocket.o speedtest-cpp-cli.o TAGParser.o HTTPSimple.o speedtest-cpp-cli