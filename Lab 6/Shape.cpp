#include "Shape.h"

string Shape::getBackground() const {
	return background;
}

void Shape::setBackground(const string& background) {
	this->background = background;
}

void Shape::draw() const {
	cout << "Drawing shape with background" << endl;
}
