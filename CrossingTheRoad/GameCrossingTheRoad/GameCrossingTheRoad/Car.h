#pragma once
#include "Vehicle.h"
class Car : public Vehicle
{
public :
	void Move();
	void Paint() const;
public:
	Car();
	Car(int, int);
	~Car();
};

