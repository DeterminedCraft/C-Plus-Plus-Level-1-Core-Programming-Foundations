// 61-Nested Functions with Enums

#include <iostream>
using namespace std;

//-------------------------------------------------------------------------------------------------------------------------------

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
   Note: BELOW IS NOT THE FINAL SOLUTION AS IT IS FOCUSSES ON NESTED FUNCTIONS AS A STANDARD PRACTICE FROM NOW AND ON.
         THE FINAL OPTIMIZED SOLUTION WILL BE PRESENTED LATER. 
* 
 This program will use integers for the purpose of representing something (in this case weekdays)
 Therefore, BEGIN CODING by creating an enum user-defined data type.
 

*/ 
/* side note: 
 The enumeration constants (enumerators), which act as labels, are of the enum user-defined data type and are assigned 
 whole numerical values as their underlying representation. maybe also add: these enumerators are compared against a SINGLE
 enu type value serving as the argument of the switch statement.

*/

/* The idea: 
*  Pass the user-entered numerical value as an argmunt of the switch statement.
*  Where
* It will be compared to the enumeration constants (enumerators) that act as
* labels [in reality they are compared to the numerical values 
  that are of the enum data type since they are literally included in the enum user-defined data type creation
  line of code.
* 

*/
enum enWeekDay { sunday = 1, monday, tuesday, wednesday, thursday, friday };

enWeekDay ReadUserInput(enWeekDay &WeekDay) 
{
    int c;
    cout << "Enter number for day: \n";
    cin >> c;
    cout << endl;

    return WeekDay = (enWeekDay)c;

   
}

string SelectDay(const enWeekDay& WeekDay)
{
    switch (WeekDay)
    {
    case enWeekDay::sunday:
        return "Sunday";
    }
}

int main() 
{
    enWeekDay WeekDay;
    
    string SelectedDay = SelectDay(ReadUserInput(WeekDay)); // the argument (ReadUserInput(WeekDay) has to be a function. If it were a procedure, then void ius returned resulting in SelectDay(void) = compiler error.

    cout << "The day is: " << SelectedDay << endl;

    return 0;
}

