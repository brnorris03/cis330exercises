all: formattedOutput theMatrix

%.o : %.cpp
	$(CXX) -g -c $<
	
formattedOutput: formattedOutput.o
	$(CXX) -g -o $@ $<
	
theMatrix: theMatrix.o
	$(CXX) -g -o $@ $< -lpthread
	

clean:
	$(RM) *.o formattedOutput theMatrix
