HEADERS = $(wildcard *.hpp)
SOURCES = animals.cpp farm.cpp
OBJECTS = $(SOURCES:.cpp=.o)

CXX = g++

all: farm

%.o : %.cpp
	$(CXX) -g -c $<
	
farm: $(OBJECTS)
	$(CXX) -g -o $@ $(OBJECTS)
	
clean:
	$(RM) *.o farm
