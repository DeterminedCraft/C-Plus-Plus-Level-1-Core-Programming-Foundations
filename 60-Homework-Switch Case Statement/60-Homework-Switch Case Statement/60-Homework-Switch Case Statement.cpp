
#include <iostream>
using namespace std;

/* switch..case statement homework
#36, #44. #45, */


/*
  #36:
  Write a program to ask the user to enter:

 - Number1
 - Number 2
 - OperationType

 Then perform the calculation according to the Operation Type as follows:

 “+”: add the two numbers.
 “-”: Subtract the two numbers.
 “*”: Multiply the two numbers.
 “/”: Divide the two numbers.

 Example Inputs:
 10
 20

 Outputs →
 200


*/

/* Solution: 
   These characters (+ - * /) that will be used in the code are integral types that 
   represent an operation type. Therefore, we START CODING by creating an enum user-defined 
   data type:
   
   * If no structure user-defined data type is created, then:
   the enum variable declard in main, will be initialized via reading user input in order to serve as the argument 
   of a called function that compares it with the enumeration constants (enumerators) acting as labels.

   * If a structure user-defined data type is created, then:
     usually, it contains a member variable that is an enum user-defined data type. if this is the case,
	 then structure user-defined data type variable declared in main will be initialized via reading user 
	 input and logic progresses from there.
		
		If it does not contain an enum member (The enum uder-defined data type is not nested in the structure = it is independent)
		then logic will ensue after declaring both variables belonging to these 2 different user-defined data type.


*/

enum enOperationType { add = '+', subtract ='-', multiply = '*', divide = '/' };

struct stOperation 
{
	float Number1;
	float Number2;
	enOperationType OperationType;
};

void ReadUserInput(stOperation &operation, char &c)
{
	cout << "Enter the first number: \n";
	cin >> operation.Number1;
	cout << endl;

	cout << "Enter the second number: \n";
	cin >> operation.Number2;
	cout << endl;

	cout << "Enter Operation Symbol (+ - * /): \n";
	cin >> c;
	cout << endl;
}

enOperationType CastToEnumFromChar(char c)
{
	return (enOperationType)c;
}

float AddOperation(stOperation operation)
{
	return operation.Number1 + operation.Number2;
}

float SubstractOperation(stOperation operation)
{
	return operation.Number1 - operation.Number2;
}

float MultiplyOperation(stOperation operation)
{
	return operation.Number1 * operation.Number2;
}

float DivideOperation(stOperation operation)
{
	return operation.Number1 / operation.Number2;
}

float PerformOperation(const enOperationType &OperationType, const stOperation &operation)
{
	switch (OperationType)
	{
	case enOperationType::add:
	return AddOperation(operation); // adding a break statement would be redundant as once a return statement is executed, the controller exists the switch statement.

	case enOperationType::subtract:
	return SubstractOperation(operation);

	case enOperationType::multiply:
	return MultiplyOperation(operation);

	case enOperationType::divide:
	return DivideOperation(operation);

	default:
	cout << "Invalid Operation Type";
    return 0;  // Every execution path in a non-void function MUST return a value.
		 // the above return 0 line does the following:
		  // exits the function, it is in, immediately.
		  // returns the value 0 to the calling function.
		  // execution then continues AFTER the function call in main().


	}
}

int main()
{
	stOperation operation;
	// Initialization via reading user-input:

	char c; // not int c because the user is entering a char 
	ReadUserInput(operation, c);
    
	// operation & c are now initialized:
	// now, we need to store the value of c in member variable 'OperationType' that is of data type enOperationType.
	// for this reason, we need to convert its data type from char to enOperationType.
	// This is also needed as This SINGLE value of c will be compared to the enumeration constants (enumerators) acting as labels

	operation.OperationType = CastToEnumFromChar(c);
	float ResultOfOperation = PerformOperation(operation.OperationType, operation);
	cout << ResultOfOperation << endl;

	/* VERY IMPORTANT: I could have also coded faster (making a leap to what will soon be the norm):
	   

	   float ResultOfOperation = PerformOperation(CastToEnumFromChar(c), operation);
	   cout << ResultOfOperation << endl;
	   
	   without changing anything else in the program.
	   where the function implementation is:

	   float PerformOperation(const enOperationType &OperationType, const stOperation &operation)

	   // The 1st parameter is where the casted c (the numerical user entered value that is now of type enOperationType)
	   // in the function call, is made equal to the declared member variable of the enum user-defind data type.
	*/
	
	return 0;
}
////-------------------------------------------------------------------------------------------------------------------------------

/*
Problem:

Write a program to ask the user to enter:
- Day

Then print the day as follows:
- 1  Print Sunday
- 2  Print Monday
- 3  Print Tuesday
- 4  Print Wednesday
- 5  Print Thursday
- 6  Print Friday
- 7  Print Saturday
- Otherwise print "Wrong Day" and ask the user to enter the day again.

Example Inputs:
6

Outputs:
Its Friday
*/
//------------------------------------------------------------------------------------------------------------------------------------


/* Solution:
   This program uses integers that represent something (weekdays in this example).
   Therefore, we BEGIN CODING by creating an enum user-defined data type and roll from there.

*/

//enum enWeekDays { sunday = 1, monday, tuesday, wednesday, thursday, friday, saturday };
//
//void ReadUserInput(int &c)
//{
//	cout << "Enter day in numbers (1 -6): \n";
//	cin >> c;
//	cout << endl;
//}
//
//enWeekDays CastingToEnumFromInt(int c)
//{
//	return (enWeekDays)c;
//}
//
//string SelectWeekDay(const enWeekDays &WeekDay) // pass by const ref.
//{
//	switch (WeekDay) // comparing the SINGLE value of the user input that is a numerical value that we converted to data type enWeekDays
//	{         // to the enumeration constants (enumerators) acting as labels (= comparing it to the raw integers hidden behinf the label)
//	case enWeekDays::sunday:
//		return "Sunday";
//
//	case enWeekDays::monday:
//		return "Monday";
//
//	case enWeekDays::tuesday:
//		return "Tuesday";
//
//	case enWeekDays::wednesday:
//		return "Wednesday";
//
//	case enWeekDays::thursday:
//		return "Thursday";
//
//	case enWeekDays::friday:
//		return "Friday";
//
//	case enWeekDays::saturday:
//		return "Saturday";
//
//	default:
//		return "You Entered an Invalid Number";
//
//	}
//}
//int main()
//{
//	enWeekDays WeekDays;
//	// initializing via reading user input:
//
//	int c;
//	ReadUserInput(c);
//	// c is now initialized.
//
//	// storing the value of c in variable WeekDays of type enWeekDays so that
//	// this SINGLE value of WeekDays in compared against the enumeration constants (enumerators) that act as labels.
//
//	// the probem is that they belong to two different data types.
//	// casting is required as implicit conversion will NOT work
//	//WeekDays = CastingToEnumFromInt(c);
//	string SelectedDay = SelectWeekDay(CastingToEnumFromInt(c)); // argument is the user entered numerical value that has its data type casted to enWeekDays (from int).
//	cout << "It is " << SelectedDay << endl;
//
//
//
//	return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #45

  Write a program to ask the user to enter:

 - Month

 Then print the day as follows:

 - 1 Print January
 - 2 Print February
 - 3 Print March
 - 4 Print April
 - 5 Print May
 - 6 Print June
 - 7 Print July
 - 8 Print August
 - 9 Print September
 - 10 Print October
 - 11 Print November
 - 12 December
 - Otherwise print "Wrong Month" and ask the user to enter the Month again.

 Example Inputs:

 11

 Outputs →

 November




* */

//enum enMonths { january = 1, february, march, april, may , june, july ,august, septemebr, october, november, december };
//
//void ReadUserInput(int &c)
//{
//	cout << "Enter Month in numbers (1-12): \n";
//	cin >> c;
//	cout << endl;
//}
//
//enMonths CastToEnumFromInt(int c) // passing by val.
//{
//	return (enMonths)c;
//}
//
//string SelectingMonth(const enMonths &months) // comparing this SINGLE user-entered numerical value that was converted to enMonths data type (from int via casting)
//{
//	switch(months)
//	{
//	case enMonths::january:
//		return "January";
//
//	case enMonths::february:
//		return "February";
//
//	case enMonths::march:
//		return "March";
//
//	case enMonths::april:
//		return "April";
//
//	case enMonths::may:
//		return "May";
//
//	case enMonths::june:
//		return "June";
//
//	case enMonths::july:
//		return "July";
//
//	case enMonths::august:
//		return "August";
//
//	case enMonths::septemebr:
//		return "Septemeber";
//
//	case enMonths::october:
//		return "October";
//
//	case enMonths::november:
//		return "November";
//
//	case enMonths::december:
//		return "December";
//
//	default: 
//		return "You have entered an invalid number for month. Try again";
//
//	}
//}
//
//int main()
//{
//	enMonths months;
//
//	int c;
//	ReadUserInput(c);
//	// c has now been initialized
//
//	months = CastToEnumFromInt(c);
//
//	string selectedMonth = SelectingMonth(months); // passing the user entered numerical value that is now converted to data type enMonths (from int)
//
//	cout << selectedMonth << endl;
//
//
//	return 0;
//}
	



