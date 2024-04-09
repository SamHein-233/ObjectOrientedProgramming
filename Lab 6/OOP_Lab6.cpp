// OOP_Lab6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
using namespace std;

// has to be passed by reference because class is abstract
void showShape(Shape shape) {
    shape.draw();
}

int main()
{
    Rectangle rectangle{ 5, 2 };
    Circle circle{ 4 };

    cout << rectangle.getArea() << endl;
    cout << circle.getArea() << endl;
    
    /*vector<Shape> shapes;
    shapes.push_back(circle);

    for (const auto& shape : shapes) {
        shape.draw();
    }*/

    /*vector<Shape*> shapes;
    shapes.push_back(new Rectangle{});
    shapes.push_back(new Circle{});

    for (Shape* shape : shapes) {
        shape->draw();
    }*/

    // delete objects so there isn't a memory leak
    /*for (const auto& shape : shapes) {
        delete shape;
    }*/

    // clear the vector (optional)
    //shapes.clear();

    /*vector<unique_ptr<Shape>> shapes;
    shapes.push_back(make_unique<Rectangle>());
    shapes.push_back(make_unique<Circle>());

    for (const auto& shape : shapes) {
        shape->draw();
    }*/
}
