#include "Circle.h"
#include <iostream>

Circle::Circle() : radius(0.0) {
	cout << "Constructing circle" << endl;
}

Circle::Circle(float radius) : radius{ radius } {

}

void Circle::draw() const {
	cout << "Drawing circle" << endl;
}

float Circle::getArea() const {
	return 3.14 * radius * radius;
}