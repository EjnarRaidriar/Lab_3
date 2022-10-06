#ifndef BUILDING_H
#define BUILDING_H

#include"Settlement.h"
#include"City.h"
#include"Village.h"
#include"Fortres.h"

class Building:public City, public Village, public Fortres
{

};

#endif