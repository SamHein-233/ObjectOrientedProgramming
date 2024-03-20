#include "ArrayNew.h"

ArrayNew::ArrayNew(int size) : size(size) {
	data = make_unique<int[]>(size);
}

ArrayNew::ArrayNew(const ArrayNew& source) : size(source.size) {
	data = make_unique<int[]>(size);
	for (int i = 0; i < size; i++) {
		data[i] = source.data[i];
	}
}
