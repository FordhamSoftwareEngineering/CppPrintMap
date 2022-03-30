// Author: Evans Owusu <eowusu3@fordham.edu>
// A header file defining classes for the user interface of the road simulation program.
// sui.h

#include "constants.h"
#include "conversions.h"
#include <vector>

#ifndef SUI_H
#define SUI_H

class Road;
class Car;

class Object {

public:
	virtual ~Object() = default;

};

class CharMatrix : public Object {

public:
	std::vector<std::vector<char>> map;  // I used a 2D vector here because:
										 // 1) a 2D array cannot be statically allocated using the constants in Constants.
										 // 2) Dynamically allocating the array is more convoluted than the simplistic vector approach.
	CharMatrix();

};

class IPrintDriver {

public:
	virtual void PrintRoad(Road* road, Object* o) = 0;
	virtual void PrintCar(Car* car, Object* o) = 0;

};

class ConsolePrint : public IPrintDriver {

public:
	void PrintRoad(Road* road, Object* o);
	void PrintCar(Car* car, Object* o);

};

#endif