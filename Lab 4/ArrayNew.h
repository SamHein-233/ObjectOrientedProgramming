#pragma once
#include <iostream>
#include <memory>
using namespace std;

class ArrayNew
{
private:
	unique_ptr<int[]> data;
	int size;

public:
	ArrayNew(int size);

	ArrayNew(const ArrayNew& source);
};

