// Author: Evans Owusu <eowusu3@fordham.edu>
// A header file defining the Road class.
// road.h
#include <string>

#ifndef ROAD_H
#define ROAD_H

class IPrintDriver;
class Object;

enum Heading { North, South, East, West };

class Road {

private:
	std::string name;
	double length;
	double xlocation;
	double ylocation;
	Heading heading;

public:
	static int NumOfRoads;

	Road(std::string streetName, double locX, double locY, double len, Heading hdg);
	double GetLength();
	double GetXLocation();
	double GetYLocation();
	Heading GetHeading();
	std::string GetRoadName();
	void Print(IPrintDriver* print, Object* o);


};

#endif