// 78-Homework- Continue Statement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
using namespace std;

/*
 Write a program to do the following:

 Read 5 numbers and sum them up as long as each number is not 50.
 If it is then ignore the 50
 

 Input:
 10
 20
 55
 10
 20

 Output:
 60


*/


int ReadNumberWithRestriction(int restricted) // passing by value ALWAYS for range params.
{   
	int number;
	int sum = 0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "Enter a number: ";
		cin >> number; // IMMEDIATELY validate it in a condition against the range.

		if (number == restricted)    //  Rule: 👉 The while-condition must represent the INVALID state (or at least always try = optimization).
		{
			continue;
		}

		sum += number;
	}

	return sum;
}


int main()
{
	int restricted = 50; 
   //initializing the below variable, via reading user input (using a function):
	int sum = ReadNumberWithRestriction(restricted); //passing the range argument as it's value is not intrinsic.

	cout << "The sum of all these numbers is: " << sum << endl;  // no need for a dedicated procedure as no structure is to be printed out onto the screen.

	return 0;
}


/*
 Write a program to do the following:

 Ask the user how many numbers they'd like to sum up.
 sum them up as long as each number is not 50.
 If it is 50, then ignore it.
  

 Input:

 How many numbers to sum up ?: 5

 10
 20
 55
 10
 20

 Output:
 60


*/


int ReadNumberOfValuesToSumUp()
{
	int NumberOfValues;
	cout << "How many numbers to sum up ? : ";
	cin >> NumberOfValues;  // you could IMMEDIATELY validate 'NumberOfValues' in a condition against range. (ex: only positive numbers or in-range)

	return NumberOfValues;
}


int ReadNumbersWithRestriction(int restricted) // pass by value ALWAYS for range params.
{
	int NumberOfValues = ReadNumberOfValuesToSumUp();

	int sum = 0;
	int number;
	int i = 1;                     // written 1st
	while(i <= NumberOfValues)    // written 2nd
	{ 

		cout << "Enter Number: ";
		cin >> number; // IMMEDIATELY validated in the condition against the range.
		
		if (number == restricted)
		{
			i++;
			continue;
		}

		sum += number;

		i++;                   // written 3rd
	}
	return sum;
}

int main()
{   
	int restricted = 50;
	// initializing variable via reading user input (using a function):

	int SumOfNumbers = ReadNumbersWithRestriction(restricted); // passing the range argument as its value is not intrinsic.
	// variable 'SumOfNumbers' has been initialized.

	cout << "Sum of numbers is: " << SumOfNumbers;

	return 0;
}

