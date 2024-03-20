// OOP_Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include "TextBox.h"
#include <string>
using namespace std;
int main()
{
	//Creating instances of TextBox class
	//accessing and modifying the values
	//Outputing values to console
	TextBox TextBox1{ "Sam" };
	cout << TextBox1.getValue() << endl;
	TextBox TextBox2;
	cout << TextBox2.getValue() << endl;
}
