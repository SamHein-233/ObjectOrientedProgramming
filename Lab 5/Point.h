#pragma once
#include <iostream>
#include <compare>
#include <ostream>
#include <istream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	friend ostream& operator<<(ostream& stream, const Point& point);
public:
	Point() = default;
	Point(int x, int y);
	int getX() const;
	int getY() const;
	bool operator==(const Point& other) const;
	bool operator!=(const Point& other) const;
	bool operator<(const Point& other) const;
	bool operator>(const Point& other) const;
	bool operator<=(const Point& other) const;
	bool operator>=(const Point& other) const;
	Point operator+(int value) const;
	Point& operator+=(int value);
};

