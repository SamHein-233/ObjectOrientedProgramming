#include "Point.h"
#include <compare>
#include <iostream>
using namespace std;

Point::Point(int x, int y) : x{ x }, y{ y } {}

int Point::getX() const {
	return x;
}

int Point::getY() const {
	return y;
}

bool Point::operator==(const Point& other) const {
	return (x == other.x) && (y == other.y);
}

bool Point::operator!=(const Point& other) const {
	return !(x == other.x) && !(y == other.y);
}

bool Point::operator<(const Point& other) const {
	if (x == other.x) {
		return y < other.y;
	}
	return x < other.x;
}

bool Point::operator>(const Point& other) const {
	if (x == other.x) {
		return x > other.x;
	}
	return y > other.y;
}

bool Point::operator<=(const Point& other) const{
	return !(x > other.x) && !(y > other.y);
}

bool Point::operator>=(const Point& other) const{
	return !(x < other.x) && !(y < other.y);
}

ostream& operator<<(ostream& stream, const Point& point){
	stream << point.x << point.y;
	return stream;
}

Point Point::operator+(int value) const{
	return Point(( x + value), (y + value));
}

Point& Point::operator+=(int value) {
	(x += value) && (y += value);
	return *this;
}
