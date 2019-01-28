#include "stdafx.h"

#include "Bird.h"


Bird::Bird() : Animal::Animal(){
}

Bird::Bird(int x, int y) : Animal::Animal(x, y) {

}

void Bird::Paint() const {

	gotoXY(_p.X(), _p.Y());
	TextColor(ColorCode_Yellw);
	putchar('*');
}

void Bird::Move() {
	Animal::Move();
}

Bird::~Bird()
{
}
