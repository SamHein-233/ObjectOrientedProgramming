// OOP_Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//max and min functions
int MaxNumber(int num1, int num2, int num3, int num4) { //defining parameters of function
    if ((num1 >= num2) && (num1 >= num3) && (num1 >= num4)) { //comparing num1 to each number and if every condition
        return num1;                                       //is true then it will output that number
    }
    if ((num2 >= num1) && (num2 >= num3) && (num2 >= num4)) {
        return num2;
    }
    if ((num3 >= num1) && (num3 >= num2) && (num3 >= num4)) {
        return num3;
    }
    if ((num4 >= num1) && (num4 >= num2) && (num4 >= num3)) {
        return num4;
    }
}

int MinNumber(int num1, int num2, int num3, int num4) {  //defining parameters of function
    if ((num1 <= num2) && (num1 <= num3) && (num1 <= num4)) { //comparing num1 to each number and if every condition
        return num1;                                       //is true then it will output that number
    }
    if ((num2 <= num1) && (num2 <= num3) && (num2 <= num4)) {
        return num2;
    }
    if ((num3 <= num1) && (num3 <= num2) && (num3 <= num4)) {
        return num3;
    }
    if ((num4 <= num1) && (num4 <= num2) && (num4 <= num3)) {
        return num4;
    }
}

//leap year function
int DaysInFeb(int userYear) {  //declaring function with an integer input
    if ((userYear % 400 > 0 && userYear % 100 == 0)) {  //this checks that a century year when / 400 has a remainder > 0
        return 28; // if centruy is > 0, it's not leap year
    }
    else

        if (userYear % 4 == 0) {  //fall through and check that all other years when / 4 has remainder of 0
            return 29;
        }

        else //if none of the above are true, it is not a leap year
            return 28;

}

int main()
{
    //convert to reverse binary

    int x; //defining the input
    cin >> x; // taking the users input

    while (x > 0) { //making the condition of the while statement that the number has to be greater than 0
        cout << x % 2; // takes the input and finds the remainder when divided by 2
        x = x / 2;  //as it reiterates it keeps dividing by two until x reaches 0
    }

    cout << endl;

    //max and min implementaion
    int num1;
    int num2;
    int num3;
    int num4;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    int max = MaxNumber(num1, num2, num3, num4); //calling the max function
    cout << "Maximum is " << max << endl;                // outputing the max number

    int min = MinNumber(num1, num2, num3, num4);  //calling the min function
    cout << "Minimum is " << min << endl;                // outputing the min number

    //leap year implementation
    int year;
    cin >> year;
    cout << year << " has " << DaysInFeb(year) << " days in February." << endl;

}
