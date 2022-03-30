// Author: Evans Owusu <eowusu3@fordham.edu>
// Implementation for the Map class.
// map.h

#include "map.h"
#include "sui.h"
#include "road.h"

// Roads are represented by a vector, so there is currently nothing to construct in the Map object.
Map::Map() { }

void Map::AddRoad(Road road) {
	roads.push_back(road);
}

void Map::Print(IPrintDriver* pd, Object* o) {
	for (std::vector<Road>::iterator it = roads.begin(); it != roads.end(); ++it) {
		it->Print(pd, o);
	}

}