HEADERS = $(wildcard *.hpp)
SOURCES = animals.cpp farm.cpp
OBJECTS = $(SOURCES:.cpp=.o)

CXX = g++

all: farm dynamicmemory

%.o : %.c
	$(CXX) -g -c $<
	
farm: $(OBJECTS)
	$(CXX) -g -o $@ $(OBJECTS)
	
dynamicmemory: dynamicmemory.o
	$(CXX) -g -o $@ dynamicmemory.o
clean:
	$(RM) *.o farm dynamicmemory
