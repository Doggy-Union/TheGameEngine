#ifndef LOCATION_H_INCLUDED
#define LOCATION_H_INCLUDED
#include "DESC_INTERFACE.h"
#include <vector>

class Location : public DESC {
private:
    vector <*Location> allowedLocations;
    // vector <*NPC> characters; // UNCOMMENT IT WHEN NPCES WILL REALISED
    // vector <*Container> containers; // UNCOMMENT IT WHEN CONTAINERS WILL REALISED
};

#endif // LOCATION_H_INCLUDED
