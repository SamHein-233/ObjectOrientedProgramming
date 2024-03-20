#include <iostream>
#include "TextBox.h"
#include <string.h>
using namespace std;

TextBox::TextBox() :value{ "Name" } {} //initializing constructors

TextBox::TextBox(string value) {
	setValue(value);
}

TextBox::~TextBox() { //calling destructor function
	cout << "Successfully destructed" << endl;
}

string TextBox::getValue() { //calling getter and setter functions
	return value;
}

void TextBox::setValue(string value) {
	this->value = value;
}
