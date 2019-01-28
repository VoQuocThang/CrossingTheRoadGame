#include "Truck.h"

#define consoleHeight 100
#define consoleWidth  100
Truck::Truck() {
}

Truck::Truck(int x, int y) {
	Vehicle::P[0].setX(x);
	Vehicle::P[0].setY(y);
	Vehicle::P[1].setX(x);
	Vehicle::P[1].setY(y - 1);
	Vehicle::P[2].setX(x-1);
	Vehicle::P[2].setY(y);
	for (int i = 0; i < 3; i++) shape[i] = ' ';
}

void Truck::Paint() const {
	Vehicle::Paint();
}

void Truck::Move()  {
		P[0].setX(  ( P[0].X() + 5) %   consoleWidth + 1 );
		P[1].setX( ( P[1].X() + 5) %    consoleWidth + 1);
		P[2].setX(P[0].X()- 1);
}