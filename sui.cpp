// Author: Evans Owusu <eowusu3@fordham.edu>
// Implementation for the SUI classes of the simulation.
// sui.cpp

#include "sui.h"
#include "road.h"
#include <iostream>

CharMatrix::CharMatrix() {

	// A nested for loop constructs the vector of the appropriate size.
	// The vector must be in the correct dimensions in order to call its elements by index with the [] operator.
	for (int i = 0; i < Constants::CharMapSize; i++) {
		std::vector<char> tempVec;
		for (int j = 0; j < Constants::CharMapSize; j++) {
			tempVec.push_back(' ');
		}
		map.push_back(tempVec);
	}

}

void ConsolePrint::PrintRoad(Road* road, Object* o) {

	CharMatrix* cm = dynamic_cast<CharMatrix*>(o);
	int x;
	int y;
	int CCx = Conversions::WCpointToCCpoint(road->GetXLocation());
	int CCy = Conversions::WCpointToCCpoint(-road->GetYLocation());

	int distance = 0;
	int CCRoadLength = Conversions::WClengthToCClength(road->GetLength());
	switch (road->GetHeading()) {
	case North:
		//std::cout <<"IT COMES HERE";
		x = (int)CCx;
		if (x >= 0 && x < Constants::CharMapSize) {
			while (distance < CCRoadLength) {
				y = (int)(CCy - distance);
				if (y >= 0 && y < Constants::CharMapSize) {
					cm->map[y][x] = '|';
					cm->map[y][x + 2] = '|';
					cm->map[y][x + 4] = '|';
				}
				distance += 1;
			}
		}
		break;
	case South:
		break;
	case East:
		//std::cout <<"IT COMES EAST";
		y = (int)CCy;
		if (y >= 0 && y < Constants::CharMapSize) {
			while (distance < CCRoadLength) {
				x = (int)(CCx + distance);
				if (x >= 0 && x < Constants::CharMapSize) {
					cm->map[y][x] = '-';
					cm->map[y + 2][x] = '-';
					cm->map[y + 4][x] = '-';
				}
				distance += 1;
			}
		}
		break;
	case West:
		break;
	default:
		break;
	}

}

void ConsolePrint::PrintCar(Car* car, Object* o) {



}