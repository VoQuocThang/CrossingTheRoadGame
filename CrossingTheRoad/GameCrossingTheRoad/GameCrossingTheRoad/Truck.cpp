#include "stdafx.h"
#include "Truck.h"


Truck::Truck() : Vehicle::Vehicle(){
}

Truck::Truck(int x,int y) : Vehicle::Vehicle(x,y){
}

void Truck::Paint() const {
	gotoXY(_p.X(),_p.Y());
	TextColor(ColorCode_Yellow);
	putchar('Tru');
}
void Truck::Move() {
	Vehicle::Move();
}

Truck::~Truck(){
}
