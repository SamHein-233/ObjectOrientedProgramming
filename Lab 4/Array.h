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

	int getSize() const;

	// Copy assignment operator
	Array& operator=(const Array& source);

	// Subscript operator overload
	int& operator[](int size);

	// Dereference operator overload
	int& operator*();
};

