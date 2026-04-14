// 73- Do . . While Loop.cpp 

#include <iostream>
using namespace std;

/*  Do..While loop:

    So far we have discussed:
    - Use For-loop :      If you know, beforehand, the # of iterations.
    - Use While Loop :    If you don't know the # of iterations. For example, if it depends on the user input.
    - Use Do while Loop:  If you want to execute a line(s) of code at least once and thereafter check the condition. 


           Syntax:

           *******************************      *******************************
                     WHILE LOOP                        DO–WHILE LOOP
           *******************************      *******************************
            while (condition)                    do
            {                                    {
                // loop body                         // loop body
            }                                    } while (condition);


           *******************************      *******************************


           For the do–while loop:

           The controller ALWAYS enters the do body first and executes it once.

           After the first execution, the condition is checked:

           If the condition is false → the loop exits.

           If the condition is true → the body executes again.

           This cycle continues until the condition becomes false.

           Bottom line:
           👉 The do statement is executed AT LEAST once.


           For the while loop:

           The condition is checked before entering the loop body.

           The body executes ONLY IF the condition is true.

           Bottom line:
           👉 The while loop body may execute zero times.


           How it works:

                         While
                           |
                           v
                     +----------------+
             |-----> | Test Condition |----
             |       +----------------+   |
             |               |            |
             |           True|            | False
             |               v            |
             |       +----------------+   |
             |-------| While Loop Body|   |
                     +----------------+   |
                                          |
                                          v Exit Loop




                           Do While:

                     +--------------------+
             |-----> | do..while Loop Body|
             |       +--------------------+
             |               |
        True |               |
             |               v
             |       +----------------+
             |-------| Test Condition |
                     +----------------+
                             |
                             | False
                             |
                             v  Exit Loop.





                                                Code Snippets:

     WHILE LOOP:                                                                DO–WHILE LOOP:
    ------------------------------------------------------------------------------------------------------------------------------------------------

    int i = 6;             // 1st line to write                                  int i = 6;       // 1st line to write
    while (i <= 5)         // 2nd line to write                                  do
    {                                                                            {

      cout << "Ahmad" << endl;    // LAST line to write                             cout << "Ahmad" << endl;     // LAST line to write
      i++;               // 3rd line to write                                       i++;           //2nd line to write

    }                                                                            } while (i <= 5); // 3rd line to write


    ------------------------------------------------------------------------------------------------------------------------------------------------

    Output: NOTHING                                                              OUTPUT: Ahmad
*/




/* Now, why does the Do..While statement exist ?

   Answer: Because sometimes you need to implement and THEN/LATER check:

   Let's see an example:-
 */

int number;
do
{
    cout << "Please enter a positive number: ";
    cin >> number;

} while (number <= 0);                    //  Rule: 👉 The while-condition must represent the INVALID state.  



/* =================================================================================================
 ** B – Do..WHILE LOOP UNIVERSAL INPUT UTILITIES
 =================================================================================================

 Initializing variable(s) via reading user input MUST BE performed
 using do–while universal input utilities that also validate the input range for those variables.

 (Using the while loop instead, is discouraged as it results in re-writing some same lines of code 
 (no other reason but that).
  
 --------


 WHY DO..WHILE LOOP for reading user input?
 ---------------
  • The user will be and must be prompted to enter a value at least one time.
  • Validation can IMMEDIATELY occur only AFTER the user finishes typing the value
    and presses the ENTER key.


 -----------------------------------------------------------------------------------------------
 CONTEXT (OLD APPROACH – DEPRECATED):
 ----------------------------------- */
 /*
  We previously initialized variables by reading user input using a PROCEDURE
  (pass by reference), without immediate validation.

   Example: We used to do the following:
  */
void ReadUserInput(int& number)
{
    cout << "Enter an integer number: ";
    cin >> number;
}

int main()
{
    int number;

    // initializing the variable 'number' via reading user input:
    ReadUserInput(number);   // initialized without validation
    // the variable 'number' is now initialized.
    return 0;
}

/*
Alternatively, we could've used:
a FUNCTION when reading a SINGLE value that is returned:
 (But we simply refrained from writing in this way)
*/

int ReadUserInput()
{
    int number;
    cout << "Enter an integer number: ";
    cin >> number;
    return number;
}

int main()
{
    int number = ReadUserInput();   // initialized without validation
    return 0;
}

/* BUT NOW, we are CORRECTLY intializing variable(s) via reading user input:
  -----------------------------------------------------------------------------------------------
  The Modification /UNIVERSAL RULE (LAW) is as follows:
  --------------------
  • ONE input statement  → Function (returns value)
  • MORE than one input → Procedure (no return)

  REASON:
  -------
  A function can return ONLY one value.

  • In each case, while-loop validation is included IMMEDIATELY after each cin line.
  • All bundled together inside the same utility (Function or procedure).

  Let us delve deeper:
  --------------------------------------------------------------------------------------------------------------------------------------------------------------
                ********************************************** Do..While Loop Mental model  **********************************************
  --------------------------------------------------------------------------------------------------------------------------------------------------------------
    - Initializing a variable directly.  OR:
     

// Initializing the below variable via reading user input (Using function)  // function because one variable is initialized via reading user input.
                                                                                                                                                     
  int x = ReadPositiveInt()    ReadIntNumberInRange(from, to)  ReadNegativeInt()  ReadIntEqualOrBiggerThanZero()   ReadIntEqualOrSmallerThanZero()   ReadIntWithRestriction(restricted), etc: data type could be anything
    |                    |
    |                     -------> Range argument(s) may be passed (of intrinsic value) or not (have no intrinsic value).
    |                              If they are exist, they're ALWAYS passed by value in the implementing function.
    |                              They're compared, in the While-Loop condition, against the user input.
    |                                   
    |-------> The last thing to type. Type after writing "return" keyword in the implementing function.                      





------------------------------------------------------------------------------------------------------------------------------------------------------------------------

int x, y; 

// Initializing the variables 'x' & 'y' via reading user inputs (using a procedure) // procedure because more than one variable is initialized via reading user input.    
   
ReadTwoPositiveIntegers(x, y)     , ReadTwoIntegersInRange(x, y, from, to)  ReadTwoNegativeIntegers(x, y) ReadTwoIntEqualOrBiggerThanZero(x,y) ReadTwoIntWithRestriction(x, y, restricted) , etc: data type could be anything.
                        | 
                         ------------------------------------> Range argument(s) may be passed (of intrinsic value) or not (have no intrinsic value).
                                                                  If they are exist, they're ALWAYS passed by value in the implementing function.
                        |  |                                         They're compared, in the While-Loop condition, against the user input.
                        ↓  ↓
    passed by reference in the implementing procedure         

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------

                     ****************  These Functions / Procedures should be  UTILITIES (Read the bottom note on utilities)  ****************
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
** Side Note:  How range is used:                

 // If range has intrinsic value(s)
 
 // When called in main():
 FunctionOrProcedure(RangeValue)             -------> In the implementing function:
                                                  do
                                                  {

                                                  ..        
                                                  cin >> value

                                                  } while(value compared to RangeValue)   //  Rule: 👉 The while-condition must represent the INVALID state. 
  
                                     
                     
 // If range has NO intrinsic value(s)      -------> In the implementing function:
                                                  do
 // When called in main():                        {
 FunctionOrProcedure() 
                                                  ..        
                                                  cin >> value

                                                  } while(value compared to 0 for example)   //  Rule: 👉 The while-condition must represent the INVALID state. 
 
// ** Now examine the table composed at the bottom
 -----------------------------------------------------------------------------------------------------------------------------------------------------------------------

           
                                     Code Implementation for the Input Utilities:
        
  
  -----------------------------------------------------------------------------------------------
  B-1) SINGLE INPUT  →  FUNCTION
  --------------------------------
  Reason:
  • A function can return ONE value only.

  -----------------------------------------------------------------------------------------------
  B-1.1) In-between range
  ---------------------- */
int ReadIntNumberInRange(int from, int to)   
{
    int number; // must be declared in the function scope so it can be returned (not 'do' scope)
    do
    {

        cout << "Enter a number between " << from << " & " << to << " : ";
        cin >> number;  // IMMEDIATELY validated in the condition against the range.

    } while (number < from || number > to);

    return number;
}

int main()
{
    int from = 1; // so that value is not hardcoded in the called function.
    int to = 10;  // so that value is not hardcoded in the called function.

    // Initializing the below variable via reading user input (using function)     // function because one variable is initialized via reading user input.
    int number = ReadIntNumberInRange(from, to);  // Passing range arguments as their values are intrinsic. 
    // Only type "int number = " after typing "return" keyword in the implementing function
    // the variable 'number' is now initialized and also validated.

    cout << "The entered number is: " << number << endl; // No need for a dedicated pringing procedure as we're not printing out a structure

    return 0;
}
/*
  -----------------------------------------------------------------------------------------------
  B-1.2) Positive numbers only (specialized case)
  -----------------------------------------------  */
int ReadPositiveInt()
{
    int number;
    do // must be declared in the function scope so it can be returned (not 'do' scope)
    {

        cout << "Enter a positive number: ";
        cin >> number; // IMMEDIATELY validated in the condition against the range.

    } while (number <= 0);

    return number;
}

int main()
{
    // Initializing the below variable via reading user input (using function)     // function because one variable is initialized via reading user input.
    int number = ReadPositiveInt(); // NOT passing range argument(s) as their values are NOT intrinsic.
    // Only type "int number = " after typing "return" keyword in the implementing function.
    // The variable 'number' is now initialized and also validated.

    cout << "The entered number is: " << number << endl; // No need for a dedicated pringing procedure as we're not printing out a structure

    return 0;
}
/*
 -----------------------------------------------------------------------------------------------
 B-2) MULTIPLE INPUTS  →  PROCEDURE
 ----------------------------------
 Reason:
 • A function can NOT return more than one value.
 • Therefore, pass variables by reference.

 -----------------------------------------------------------------------------------------------
 B-2.1) Two numbers in the same range
 ----------------------------------- */
void ReadTwoIntsInRange(int from, int to,int &num1,int &num2) // passing by reference (and range parameters ALWAYS passed by value).
{
    do
    {

        cout << "Enter first number: ";
        cin >> num1; // IMMEDIATELY validated in the condition against the range.

    } while (num1 < from || num1 > to);

    do
    {

        cout << "Enter second number: ";
        cin >> num2; // IMMEDIATELY validated in the condition against the range.

    } while (num2 < from || num2 > to);

}

int main()
{
    int from = 1;
    int to = 10;
    int num1, num2;

    // Initializing the variables 'num1' & 'num2' via reading user input (using a procedure): // procedure because more than one variable is initialized via reading user input. 
    ReadTwoIntsInRange(from, to, num1, num2); // range arguments are passed as their values are intrinsic.
    // The variables 'num1' & 'num2' are now initialized and also validated.

    cout << "First number: " << num1 << endl;     // No need for a dedicated pringing procedures as we're not printing out a structure
    cout << "Second number: " << num2 << endl;

    return 0;
}
/*
-----------------------------------------------------------------------------------------------
B-2.2) Two positive numbers only
-------------------------------- */
void ReadTwoPositiveInts(int &num1, int &num2) // passing by reference.
{
    do
    {

        cout << "Enter first number: ";
        cin >> num1; // IMMEDIATELY validated in the condition against the range.

    } while (num1 <= 0);

    do
    {

        cout << "Enter second number: ";
        cin >> num2; // IMMEDIATELY validated in the condition against the range.

    } while (num2 <= 0);

}

int main()
{
    int num1, num2;

    // Initializing the variables 'num1' & 'num2' via reading user input (using a procedure): // procedure because more than one variable is initialized via reading user input. 
    ReadTwoPositiveInts(num1, num2); // range arguments NOT passed as their values are NOT intrinsic.
    // The variables 'num1' & 'num2' are now initialized and also validated.

    cout << "First number: " << num1 << endl;   // No need for a dedicated pringing procedures as we're not printing out a structure
    cout << "Second number: " << num2 << endl;

    return 0;
}

//*****************************************************************************************************************************************
// An example of an 'akward' non-optimized coding would be:    

void ReadIntNumberInRange(int &number,  int from, int to)
{
    do
    {

        cout << "Enter a number between " << from << " & " << to << " : ";
        cin >> number;

    } while (number < from || number > to);


}


int main()
{
    int from = 1;
    int to = 10;
    int number;

    ReadIntNumberInRange(number, from, to);

    cout << "\nThe entered number is: " << number << endl;

    // or: If you choose not to store the returned value, write the following:
    // cout << "\nThe entered number is: " << ReadIntNumberInRange(from, to) << endl;
    return 0;
}

/*
  This approach is awkward because one could have simply written:

      int number = ReadIntNumberInRange(from, to);

  — as shown earlier — where only TWO arguments are passed and the function
  clearly returns a valid value.

  Furthermore, this version signals that an already existing and well-designed
  utility is being ignored, and instead the code is unnecessarily complicated
  by introducing a reference parameter with no real benefit.

  In short:
  - More parameters
  - More cognitive load
  - No added value

  This violates the principle of simplicity and discourages reuse of clean,
  purpose-built utilities.
*/



/*
 Utility Function – ReadIntNumberInRange

 This utility function takes the parameters 'from' and 'to' and does two things:
 1) Initializes a numeric variable by reading user input.
 2) Validates that the entered number is within the specified range.

 It is called a "utility" because it can be reused across different programs and
 contexts. Instead of rewriting the same input + validation logic multiple times
 within one program or across multiple programs, we write this logic ONCE inside
 a function and call it whenever needed.

 In this specific case, every time we need a numeric variable to be initialized
 via user input, we IMMEDIATELY need to validate its range. Therefore, we design
 ONE utility function that combines reading input and validating it using a while
  loop.

 At a superficial level, this may appear to violate the Single Responsibility
 Principle (SRP) because the function performs two actions:
 - Reading user input
 - Validating the input range

 However, at the responsibility level, this does NOT constitute a true SRP
 violation. Both actions serve a single responsibility:
 "Obtaining a valid integer from the user within a specified range."

 SRP is concerned with the number of reasons to change, not the number of steps
 inside a function. In this case, there is only one reason to change: modifying
 the rules for acquiring a valid ranged integer.

 Examples of usage:
 - Setting an age range:
   ReadIntNumberInRange(1, 250)

 - Setting a marks range:
   ReadIntNumberInRange(0, 100)

 - Setting a negative range (caller must ensure from <= to):
   ReadIntNumberInRange(-10, -5)

 Additional note:
 In C++ Level 2, we will learn how to create our own libraries where such utility
 functions (functional or procedural utilities) will be grouped and reused
 across projects.
 */


 /*
====================================================================================================
 Reading utilities & their range-specific arguments
====================================================================================================

| Utility Call in main()                  | Function / Procedure | INVALID State (while-condition)                   | Design Insight                                        |
|---------------------------------------- |----------------------|---------------------------------------------------|-------------------------------------------------------|
| int from = 1;                           |                      |                                                   |                                                       |
| int to   = 100;                         | Function             | while (number < from || number > to)              | Range arguments passed                                |
| ReadIntNumberInRange(from, to)          |                      |                                                   |                                                       |
|---------------------------------------- |----------------------|---------------------------------------------------|-------------------------------------------------------|
| ReadPositiveInt()                       | Function             | while (number <= 0)                               | // no range arguments passed                          |
|                                         |                      |                                                   |  → validation rule is intrinsic (see while-condition) |
|---------------------------------------- |----------------------|---------------------------------------------------|-------------------------------------------------------|
| ReadTwoPositiveInts(num1, num2)         | Procedure            | while (num1 <= 0)                                 | // no range arguments passed                          |
|                                         |                      | while (num2 <= 0)                                 | → validation rule is intrinsic (see while-condition)  |
|---------------------------------------- |----------------------|---------------------------------------------------|-------------------------------------------------------|
| ReadTwoIntsInRange(from, to, num1, num2)| Procedure            | while (num1 < from || num1 > to)                  | Range arguments passed                                |
|                                         |                      | while (num2 < from || num2 > to)                  |                                                       |
  and so on...
==============================================================================================================================================================================
KEY TAKEAWAY:
-------------
• Passing range arguments means validation depends on external rules.
• Absence of range parameters means validation is intrinsic.
• Function vs procedure is dictated by how many variables must be initialized via reading user input — not preference.

==================================================================================================== */