#include "Array.h"

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

Array::~Array() {
	delete[] data;
}
