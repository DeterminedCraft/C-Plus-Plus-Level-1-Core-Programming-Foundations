
#include <iostream>
using namespace std;

/* 
   Write a program to ask the user to enter:
   - Number1
   - Number2

   Then print the two numbers, then swap the two numbers & print them.


*/

void PrintTheTwoNumbers(float Number1, float Number2) // فَرِّق تَسُد 
{
	cout << "The first entered number is: " << Number1 << endl;
	cout << "The second entered number is: " << Number2 << endl;
}
/*
   فَرِّق تَسُد  — Divide & Conquer

   Many beginners ask:
	   "Why not just print the numbers directly inside main()?"

   Answer:
	   In programming, we apply the Divide & Conquer strategy as much as possible.
	   That means: create separate functions / procedures for every clear task.
	   This makes the code easier to read, maintain, re-use the function/ procedure anywhere whenever needed, & unit-test.
*/

void SwapTheTwoNumbers(float &Number1, float &Number2)
{
	float temp = Number1;
	Number1 = Number2;
	Number2 = temp;
	// The variables Number1 and Number2 in main() are now modified (in this case, swapped)
	// because parameters were passed, to SwapTwoNumber, by REFERENCE.
	// 
	// Created as a procedure, because a function can only return one specific value
    // and the two swapped numbers cannot be returned together.
}


int main()
{
	float Number1, Number2;

	cout << "Enter the First Number: \n";
	cin >> Number1;

	cout << "Enter the Second Number: \n";
	cin >> Number2;
	cout << endl;

	cout << "Before swapping: \n";
	PrintTheTwoNumbers(Number1, Number2);

	SwapTheTwoNumbers(Number1, Number2);

	cout << "After swapping: \n";
	PrintTheTwoNumbers(Number1, Number2);

	return 0;

}


