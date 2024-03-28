// OOP_Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <compare>
#include "Point.h"
using namespace std;

int main()
{
    //test case 1
       /*Point first{ 10, 20 };
       Point second{ 12, 21 };
       if (first == second) {
           std::cout << "equal";
       }
       else {
           std::cout << "not equal";
       }

        return 0;*/
    
    // output: 

    // test case 2:
    /*Point first{ 10, 20 };
    Point second{ 12, 21 };
    if (first < second)
        std::cout << "first is less than second";

    return 0;*/
    //output: 

    // test case 3:
    /*   Point first{ 10, 20 };
       Point second{ 12, 21 };
       std::cout << "first: " << first << "," << "second: " << second;

       return 0;*/
    // output: 

    // test case 4:
       Point first{ 10, 20 };
       Point second{ 12, 21 };
       std::cout << first + 50;
       second += 100;
       std::cout << second;

    //    return 0;

}