#pragma once
#include <iostream>
using namespace std;

#include "Shape.h"

class Circle : public Shape
{
private:
	float radius;

public:
	Circle();
	Circle(float radius);
	void draw() const override;
	float getArea() const;
};

