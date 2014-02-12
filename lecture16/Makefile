CXX = g++ 

all: formattedOutput 

%.o : %.cpp
	$(CXX) -g -c $<
	
formattedOutput: formattedOutput.o
	$(CXX) -g -o $@ $<
	
clean:
	$(RM) *.o formattedOutput 
	 
