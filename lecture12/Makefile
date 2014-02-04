HEADERS = $(wildcard *.hpp)
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)


CXX = g++

all: farm 

%.o : %.cpp
	$(CXX) -g -c $<
	
farm: $(OBJECTS)
	$(CXX) -g -o $@ $(OBJECTS)
	
clean:
	$(RM) *.o farm 
	 
