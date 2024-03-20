#pragma once
#include <iostream>
using namespace std;

class Array
{
private:
	int size;
	int* data;

public:
	// Constructor with parameters
	explicit Array(int size);

	// Copy Constructor
	Array(const Array& source);

	// Destructor
	~Array();
};

