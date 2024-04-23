// CS311MWSpring2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "AccountLocked.h"
using namespace std;
// TODO: included header files as needed:


// TODO: created a class: AccountLocked. 
// Inside this class, override the what( ) function and 
// return the message: "Your account is locked! Contact the admin." 



// TODO: before the main function create a function: login( ), 
// throw the exception: AccountLocked we just created.
void login() {
	throw AccountLocked();
}

// TODO: build a function for reversing a string (loop):
// takes a constant reference to a string
string reverseString(const string& str) {
	//initializing empty string
	string reversed;
	// iterates in reverse order
	for (int i = str.length() - 1; i >= 0; --i) {
		// using push_back each character is appended
		reversed.push_back(str[i]);
	}
	return reversed;
}

// then a recursive function, taking a const ref to a string
string reverse_string_rec(const string& str) {
	// if the string is less than 1, then it returns the string input
	if (str.length() <= 1) {
		return str;
	}
	// the fuction is called starting from the second character
	// then appends the first character of the original string at the end
	// the reversed string is constructed as the function returns from each recursive call
	else {
		return reverse_string_rec(str.substr(1)) + str[0];
	}
}


// TODO: Definition of recursive function
int sum(int num) {
	// if the number is less than 0 return 0
	if (num <= 0) {
		return 0;
	}
	// otherwise, return the number plus the sum and then move onto the next number
	else {
		return num + sum(num - 1);
	}
}

// TODO: in the main( ), call login( ), catch the exception.
	// Account Locked

int main() {
	// the try is used to enclose code that might throw an exception
	try{
		login();
	}
	// the catch will handle exceptions thrown, it will execute the code within the catch block
	catch (const AccountLocked& ex) {
	cout << ex.what() << endl;
	}

	// recursive function
	int num = 8;
	cout << "Sum of numbers up to " << num << " is " << sum(num) << endl;

	// TODO:use the code to test your question 2 solution:calling reverse function using some strings
	std::cout << "Reverse of 'ABCD': " << reverseString("ABCD") << std::endl;
	std::cout << "Reverse of 'Hello': " << reverseString("Hello") << std::endl;
	std::cout << "Reverse of 'Bye': " << reverseString("Bye") << std::endl;


	std::cout << "Reverse of 'ABCD': " << reverse_string_rec("ABCD") << std::endl;
	std::cout << "Reverse of 'Hello': " << reverse_string_rec("Hello") << std::endl;
	std::cout << "Reverse of 'Bye': " << reverse_string_rec("Bye") << std::endl;

}

