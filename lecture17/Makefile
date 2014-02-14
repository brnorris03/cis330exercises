HEADERS = $(wildcard *.hpp)
SOURCES = animal.cpp quadruped.cpp sheep.cpp wolf.cpp farmer.cpp farm.cpp
OBJECTS = $(SOURCES:.cpp=.o)


CXX = g++ -std=c++0x

all: farm it

%.o : %.cpp
	$(CXX) -g -c $<
	
farm: $(OBJECTS)
	$(CXX) -g -o $@ $(OBJECTS)

it: it.o
	$(CXX) -g -o $@ $<

clean:
	$(RM) *.o farm 
	 
