GPP=g++ -std=c++20

all: abstract_test

abstract_test: main.o 
	$(GPP) $^ -o $@

main.o: main.cpp AbstractList.hpp ArrayList.hpp
	$(GPP) -c $<

clean:
	-rm *.o abstract_test
