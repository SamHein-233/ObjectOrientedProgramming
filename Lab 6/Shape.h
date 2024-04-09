#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
private:
	string background;
public:
	string getBackground() const;

	void setBackground(const string& background);

	// virutal functions
	virtual void draw() const;
};

