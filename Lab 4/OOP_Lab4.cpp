// OOP_Lab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdexcept>
#include "Array.h"
#include "ArrayNew.h"
#include <memory>
using namespace std;

int main()
{
    Array arr{ 5 };
    for (int i = 0; i < arr.getSize(); ++i) {
        arr[i] = i * 2;
    }

    cout << "Array values: ";
    for (int i = 0; i < arr.getSize(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //ArrayNew newArr{ 10 };
    //for (int i = 0; i < newArr.getSize(); ++i) {
        //newArr[i] = i * 3;
    //}

    //cout << "ArrayNew values: ";
    //for (int i = 0; i < newArr.getSize(); ++i) {
        //cout << newArr[i] << " ";
    //}
    //cout << endl;


    // smart pointers
    //unique_ptr<int> x(new int);

    // make unique function, helper function from standard library. This will return a unique pointer
    // you need to add size into argument
    //auto y = make_unique<int[]>(10);

    //shared_ptr<int> z(new int);
    //auto h = make_shared<int>();
    //shared_ptr<int> j(h);
    //if (j == h) {
        //cout << "equal" << endl;
    //}

}

