CXXFLAGS = Wall –Wpedantic –O2

main: main.o funcs.o caesar.o
	g++ -o main main.o funcs.o caesar.o

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
	g++ $(CIXXFLAGS) -c test-ascii.cpp

caesar.o: caesar.cpp caesar.h
	g++ $(CIXXFLAGS) -c caesar.cpp caesar.h

clean:
	rm -f main.o funcs.o tests.o test-ascii.o doctest.h.gch funcs.h.gch