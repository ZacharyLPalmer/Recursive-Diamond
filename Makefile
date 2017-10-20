CXX = g++
CXXFLAGS = -Wall -Werror -ansi -pedantic
LSFMLFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
OBJ = myShape.o

all: original

original: myShape.o
	$(CXX) myShape.o -o original $(LSFMLFLAGS)

myShape.o: myShape.cpp myShape.hpp
	$(CXX) -c myShape.cpp $(CXXFLAGS)

clean:
	rm original $(OBJ) *~ *.gch -rf
