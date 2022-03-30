// Author: Evans Owusu <eowusu3@fordham.edu>
// A header file for the Map class.
// map.h

#include <vector>

#ifndef MAP_H
#define MAP_H

class Road;
class IPrintDriver;
class Object;

class Map {

private:
	std::vector<Road> roads; // A vector is used here as the closest approximation to a C# List.

public:
	Map();
	void AddRoad(Road road);
	void Print(IPrintDriver* pd, Object* o);

};

#endif
