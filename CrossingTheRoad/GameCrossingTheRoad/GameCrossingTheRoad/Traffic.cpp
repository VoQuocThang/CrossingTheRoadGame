#include "stdafx.h"
#include "Traffic.h"



Traffic::Traffic(){
	Time = tick;
	_x = _y = 0;
}

Traffic::Traffic(int x, int y) {
	Time = tick;
	_x = x;
	_y = y;
}

void Traffic::paint() {
	if (isRed()) {
		gotoXY(_x, _y);
		TextColor(ColorCode_Red);
		putchar(219);
	}
	else {
		gotoXY(_x, _y);
		TextColor(ColorCode_Green);
		putchar(219);
	}
}

Traffic::~Traffic()
{
}
