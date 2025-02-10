# makefile, a recipe to easily build executables from source code

EXE=biparental.exe # name of executable file
CPP=biparental.cpp # name of sourcecode
CXX=g++ # name of compiler
CXXFLAGS=-Wall -O3 -std=c++20 # compiler flags
POSTFLAGS=-lgsl -lgslcblas # some other flags to include gsl

# command to build the thing, this is being executed when typing
# 'make' on the command line in this directory
$(EXE) : $(CPP)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(CPP) $(POSTFLAGS)

clean :
	rm -rf $(EXE)
