#include "stdafx.h"
#include "Dinausor.h"

Dinausor::Dinausor():Animal::Animal()
{
}

Dinausor::Dinausor(int x,int y) : Animal::Animal(x,y)
{
}

void Dinausor::Paint() const{
	gotoXY(_p.X(),_p.Y());
	TextColor(ColorCode_Yellow);
	putchar('Dina');
}

void Dinausor::Move() {
	Animal::Move();
}

Dinausor::~Dinausor()
{
}
