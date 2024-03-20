// OOP_Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//SortVector Function
void SortVector(vector<int>& myVec) { //function that performs bubble sort in descending order
    int n; //declaring variables
    int i;
    int j;
    n = myVec.size(); //setting n to the size of the vector

    for (i = 0; i < n - 1; ++i) { //initializing for loop, as long as i is less than vec size, go to next input
        for (j = 0; j < n - i - 1; ++j) {
            if (myVec[j] < myVec[j + 1]) { //swapping if next element is greater than the last element
                swap(myVec[j], myVec[j + 1]);
            }
        }
    }
}

int main()
{
    //word frequencies
    int numWords; //declaring variable
    cin >> numWords; //taking the users input

    int i, j;
    vector<string> words(numWords); //creating the string vector with the element of numWords
    vector<int> frequencies(numWords); //creating the integer vector with the element of numWords

    for (i = 0; i < numWords; ++i) { // initializng for 
        cin >> words.at(i);
    }

    for (i = 0; i < numWords; ++i) {
        for (j = 0; j < numWords; ++j) {
            if (words.at(i) == words.at(j)) {
                ++frequencies.at(i);
            }
        }
        cout << words.at(i) << " - " << frequencies.at(i) << endl;
    }

    //sorting vectors
    int numbers; //declaring variable
    cin >> numbers; //taking user input

    int i; //declaring variable
    int nums; //taking user input
    vector<int> integers;
    for (i = 0; i < numbers; ++i) { // read the list of integers and store them in a vector
        cin >> nums;
        integers.push_back(nums);
    }

    SortVector(integers); // calling the SortVector function

    for (const auto& nums : integers) { //output the sorted vector
        cout << nums << ",";
    }
    cout << endl;
}