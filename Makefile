CC= g++
CXX= g++

CXXFLAGS= -g -std=c++11
LDFLAGS= -g -std=c++11

default: 3drecon

3drecon: 3dReconstruction.cpp CameraCalib.hpp
	g++ 3dReconstruction.hpp 3dReconstruction.cpp CameraCalib.hpp -std=c++11 -g -o 3drecon `pkg-config --cflags --libs opencv`

clean: 
	rm -f 3drecon *.o *.gch *.jpg
