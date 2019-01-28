#include "stdafx.h"
#include "People.h"



People::People()
{
	_p = Point(0, 0);
	_State = true;
}


People::People(int x, int y,bool z) {
	_p = Point(x, y);
	_State = z;
}

void People::Up(int x) {
	if (x == 'w' || x =='W' ) {
		_p.setY(_p.Y() - 1);
	}
}

void People::Down(int x) {
	if (x == 's' || x == 'S') {
		_p.setY(_p.Y() + 1);
	}
}

void People::Left(int x) {
	if (x == 'a' || x == 'A') {
		_p.setX(_p.X() - 1);
	}
}

void People::Right(int x) {
	if (x == 'd' || x == 'D') {
		_p.setX(_p.X() + 1);
	}
}

void People::Paint() const  {
	gotoXY(_p.X(),_p.Y());
	TextColor(ColorCode_Yellow);
	putchar('N');

}
People::~People()
{
}
