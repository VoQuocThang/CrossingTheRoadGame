#include "People.h"

#define consoleWidth  80
#define consoleHeight  25

People ::People () {
	    int x = consoleWidth / 2;
		int y = consoleHeight;
	    P[0] = Point(x,y-2);
		P[1] = Point(x,y-1);
	
}

People ::People (int x,int y)  {
	P[0] = Point(x-1, y);
	P[1] = Point(x, y);
	
}

void People::Paint() {
	clrscr();
	TextColor(13);
	gotoXY(P[0].X(),P[0].Y());
	putchar(2);
	TextColor(13);
	gotoXY(P[1].X(), P[1].Y());
	putchar(193);

}
void People::Control() {
	if (_kbhit()) {
		int key = _getch();
		if (key == 'W' || key == 'w') Up();
		if (key == 'S' || key == 's') Down();
		if (key == 'A' || key == 'a') Left();
		if (key == 'D' || key == 'd') Right();
	}
}


void People::Up() {
	if (P[0].Y() == 0)  return;
	P[1] = P[0];
	P[0].setX(P[0].X());
	P[0].setY(P[0].Y()-1);
}

void People::Down() {
	if (P[0].Y() == consoleHeight-1) return;
	P[0] = P[1];
	P[1].setX(P[1].X());
	P[1].setY(P[1].Y() +1);
}

void People::Left() {
	if (P[0].X() == 0) return;
	P[0].setX(P[0].X()-1);
	P[0].setY(P[0].Y());
	P[1].setX(P[1].X()-1);
	P[1].setY(P[1].Y());
}

void People::Right() {
	if (P[0].X() == consoleWidth-1) return;
	P[0].setX(P[0].X() + 1);
	P[0].setY(P[0].Y());
	P[1].setX(P[1].X() + 1);
	P[1].setY(P[1].Y());
}