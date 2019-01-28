#include "Point.h"
#define consoleWidth  80
#define consoleHeight  25;

Point::Point() {
	m_x = consoleHeight - 1;
	m_y = consoleWidth / 2;

}
Point::Point(int x,int y): m_x(x),m_y(y) {

}
int Point::X() const {
	return m_x;
}

int Point::Y() const {
	return m_y;
}

void Point::setX(int x) {
	m_x = x;
}

void Point::setY(int y) {
	m_y = y;
}

Point::~Point() {

}