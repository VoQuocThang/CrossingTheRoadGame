#include "Vehicle.h"
Vehicle::Vehicle() {
}

void Vehicle::Paint()  const {
	clrscr();
	for (int i = 0; i < 3; i++) {
		gotoXY(P[i].X(), P[i].Y());
		putchar('*');
	}
}