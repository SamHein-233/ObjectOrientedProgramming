#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle() : width{ 0 }, height{ 0 } {
	cout << "constructing rectangle" << endl;
}

Rectangle::Rectangle(int width, int height) : width{ width }, height{ height } {
	
}

void Rectangle::draw() const {
	cout << "Drawing rectangle" << endl;
}

int Rectangle::getArea() const {
	return width * height;
}
