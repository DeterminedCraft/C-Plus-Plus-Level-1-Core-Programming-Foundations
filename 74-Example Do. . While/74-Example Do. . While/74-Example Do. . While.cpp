// 74-Example Do. . While.cpp : 

#include <iostream>
using namespace std;

/* Below are 2 examples on both:  While-Loop  &  Do-While Loop

 For user input utilities, The Do-While approach is the correct optimizing one.
 The While-Loop approach is not.

 Nevertheless,

 Both example are covered as the latter approach could be used in non user-input related contexts.
 Fully grasping both approaches is vital:

*/




int ReadIntValueInRangeUsingDoWhile(int min, int max) // always pass ranges by value
{
	int number;  // must be function-scoped since its value is returned
	
	do
	{

		cout << "Enter an integer number between " << min << " & " << max << " : " << endl;
		cin >> number; // IMMEDIATELY validated in the condition against the range.

	} while (number < min || max < number  );      // make the condition true when the range is invalid.

	return number;
}

int ReadIntValueInRangeUsingWhile(int min, int max) // always pass ranges by value.
{
	int number;
	cout << "Enter a number between " << min << " & " << max << " : ";
	cin >> number;  // IMMEDIATELY validate 'number'in the condition against the range:

	while (number < min || number > max) // make the condition true when the range is invalid.
	{
		cout << "Only positive numbers are allowed.";
	    cout << "Enter a number between " << min << " & " << max << " : ";
		cin >> number;
	}

	return number;

}

int main()
{
	int min = 1;
	int max = 10;

   // initializing the below variable via reading user input (returned by function):     
	int number = ReadIntValueInRangeUsingDoWhile(min, max); // passing range arguments as their values are not intrinsic. 
	cout << "The entered number is " << number << endl;  // no need for a dedicated printing procedure as no structure of any sort is printed.

	//intitializing the below  variable via reading user input (using a function)
	int AnotherNumber = ReadIntValueInRangeUsingWhile(min, max); // passing range arguments as their values are not intrinsic
	cout << "The entered number is " << AnotherNumber << endl;

	return 0;
}


/* This is a very selective example :
   - A procedure could have been used for any of these 2 approaches (when more than one cin is required).
   - A different type of range validation could have been used:
       - In range,positive, negative, non-zero, specific value, not a specific value, etc.

 */