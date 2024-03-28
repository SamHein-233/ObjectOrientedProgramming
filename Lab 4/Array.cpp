#include "Array.h"
#include <iostream>
using namespace std;

Array::Array(int size) : size{ size } {
	data = new int[size];
}

Array::Array(const Array& source) {
	size = source.size;
	data = new int[size];
	for (int i = 0; i < size; i++) {
		data[i] = source.data[i];
	}
}

int Array::getSize() const {
	return size;
}

Array::~Array() {
	delete[] data;
}

Array& Array::operator=(const Array& source) {
	return *this;
}

int& Array::operator[](int size) {
	return data[size];
}

int& Array::operator*() {
	return *data;
}