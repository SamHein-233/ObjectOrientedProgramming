#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class AccountLocked : public exception
{
public:
	// const char is a pointer to a constant string character, what() is overriden
	// no except function doesn't throw any exceptions, function is overriding a virtual function
	const char* what() const noexcept override {
		return "Your account is locked! Contact the admin.";
	}
};

