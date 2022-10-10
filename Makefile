CXXFLAGS = Wall –Wpedantic –O2

main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o

funcs.o: funcs.cpp funcs.h
	g++ $(CIXXFLAGS) -c funcs.cpp funcs.h

main.o: main.cpp funcs.h
	g++ $(CIXXFLAGS) -c main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h
	g++ $(CIXXFLAGS) -c tests.cpp doctest.h funcs.h

test-ascii.o: test-ascii.cpp
	g++ $(CIXXFLAGS) test-ascii.cpp

clean:
	rm -f main.o funcs.o tests.o doctest.h.gch funcs.h.gch