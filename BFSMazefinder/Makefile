mazefinder : map.o block.o mazefinder.cpp
	g++ mazefinder.cpp map.o block.o -std=c++11 -Wall -g -o mazefinder

map.o : map.h map.cpp block.o
	g++ map.h map.cpp -std=c++11 -Wall -g -c

block.o : block.h block.cpp
	g++ block.h block.cpp -std=c++11 -Wall -g -c
