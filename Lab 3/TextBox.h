#pragma once
#include <string>
using namespace std;

class TextBox
{
private:
	//declaring the string variable as private
	string value;
public:
	TextBox(); //default constructor
	explicit TextBox(string value); //constructor that takes a string value
	~TextBox(); //deconstructor
	string getValue(); //getter and setter functions for value
	void setValue(string value);
};

