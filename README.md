# ObjectOrientedProgramming
A collection of scripts I have done so far in my Object-Oriented Programming research.

In lab 1 I built a program that takes in a positive integer as input, and outputs a string of 1's and 0's representing the integer in reverse binary. A program that takes numbers as an input and outputs the maximum and minimum. A program that takes the users input of a year and outputs whether that year was a leap year or not.

In lab 2 I built a program that reads a list of words. Then, the program outputs those words and their frequencies. A program that defines a function named SortVector that takes a vector of integers as a parameter, modifies the vector parameter by sorting the elements in descending order. Then writes a main program that reads a list of integers from input, stores the integers (starting from the second integer) in a vector, calls the function, and outputs the sorted vector. The first input integer indicates how many numbers are in the list.

In lab 3 I created a TextBox class with a UML provided in a seperate document. The UML had basic implementations such as a default constructor, constructor with parameters, getters, and setters.

 In Lab 4 I created a class called Array with a UML provided in a seperate document. The UML had the same implementations as the lab above, but this one added a deconstructor, copy constructor, overload subscript operator, overload dereference(indirection) operator, and copy assignment operator. Then I created a new class called ArrayNew that used unique pointer to replay the raw pointer used in the Array class.

 In lab 5 I created a class called Point using a UML provided in a seperate document. The UML had a constructor, equality operator, inequality operator, comparison operator(four), insertion operator(friend), arithmetic operators, and compound assignment operator.

In lab 6 I created a new class: Shape and let two classes: Rectangle and Circle derive from the Shape. 
-	For each class I implemented the member functions in the implementation file.
-	Added a function to base class: draw(), and let two derived classes override this function.
-	Back to main file, I created a function: showShape(), to pass a Shape object as the argument, draw shape for implementation.
-	Used Polymorphic Collection: to create a vector of Shape, put a rectangle and a circle to it, loop over the vector draw a rectangle and a circle on the console. (use late or dynamic binding)
-	And then rewrote this code using unique pointer instead.

In lab 7 I created a class: AccountLocked. Inside this class, override the what( ) function and return the message: "Your account is locked! Contact the admin." Created a function: login( ), to throw the exception: AccountLocked. Built two function for reversing a string (loop): takes a constant reference to a string. One used recursion and the other didn't. Then created another function that defined a recursive function.

In lab 8 I took the array class created in lab 4 and turned it into a Template.
