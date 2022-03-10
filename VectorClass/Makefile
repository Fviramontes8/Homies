.PHONY: clean all

GPP=g++ -std=c++17

all: test_vec

test_vec: main.o Vector_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp dynamvector.hpp
	$(GPP) -c $<

Vector_methods.o: Vector_methods.cpp dynamvector.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_vec
