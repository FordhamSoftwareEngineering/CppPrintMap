// Author: Evans Owusu <eowusu3@fordham.edu>
// The implementation of the Road class
// road.cpp

#include "road.h"
#include "sui.h"

int Road::NumOfRoads = 0;

Road::Road(std::string streetName, double locX, double locY, double len, Heading hdg) {
	name = streetName;
	length = len;
	heading = hdg;
	xlocation = locX;
	ylocation = locY;
	NumOfRoads++;
}

double Road::GetLength() {

	return length;

}

double Road::GetXLocation() {

	return xlocation;

}

double Road::GetYLocation() {

	return ylocation;

}

Heading Road::GetHeading() {

	return heading;

}

std::string Road::GetRoadName() {

	return name;

}

void Road::Print(IPrintDriver* print, Object* o) {

	print->PrintRoad(this, o);

}