

#include <iostream>
#include <cmath>
using namespace std;

/* Homework on for-loops:
   
   #26, #27, #28, #29, #30, #32, #46

*/

/*
 
  #26 Problem:

 Write a program to print numbers from 1 to N.

 Input
 10

 Outputs ->
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10


*/
//------------------------------------------------------------------------------------------------

void ReadNumber(int& number) // passing by reference.
{
    cout << "Enter an integer: \n";
    cin >> number;
    cout << endl;
}

int main()
{
    int number;
    // Initializing via reading user-input:

    ReadNumber(number);
    // the variable number has been initialized.

    for (int i = 1; i <= number; i++)
    {
        cout << i << endl;
    }


    return 0;
}
////--------------------------------------------------------------------------------


/*
   #27 Problem:
    
 Write a program to print numbers from N to 1.

 Input
 10

 Outputs ->
 10
 9
 8
 7
 6
 5
 4
 3
 2
 1


*/
//------------------------------------------------------------------------------------------------


void ReadUserInput(int &number) // passing by ref.
{
    cout << "Enter an integer: \n";
    cin >> number;
    cout << endl;
}


int main()
{
    int number;
    //Initializing via reading user input:

    ReadUserInput(number);

    for (int i = number; i >= 1 ; i--)
    {
        cout << i << endl;
    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////


/*
   #28 Problem:

 Write a program to Sum odd numbers from 1 to N.

 Input
 10

 Outputs ->
 25


*/
//------------------------------------------------------------------------------------------------

void ReadUserInfo(int& number) // passing by reference.
{
    cout << "Enter an integer number: \n";
    cin >> number;
    cout << endl;
}

int SumOfOddNumbers(int number) // passing by value
{
    int sum = 0;
    for (int i = 1; i <= number; i+=2)
    {
        sum = sum + i;
    }

    return sum;
}

int main()
{
    int number;
    // initialization via reading user input:

    ReadUserInfo(number);
    // variable 'number' is now initialized.

    int ResultOfSum = SumOfOddNumbers(number);

    cout << "The sum of odd numbers from 1 to " << number << " is: " << ResultOfSum << endl;

    return 0;
}
////-----------------------------------------------------------------------------------------------

/*
   #29 Problem:

 Write a program to Sum even numbers from 1 to N.

 Input
 10

 Outputs ->
 30


*/
//------------------------------------------------------------------------------------------------

void ReadUserInput(int &number)
{
    cout << "Enter an integer: \n";
    cin >> number;
    cout << endl;
}

int CalculateSumEvenNumbers(int number)
{
    int sum = 0;
    for (int i = 2; i <= number; i += 2) // starting from i=2 is more intuitive than i=0 (boith are correct)
    {
        sum += i; //  sum = sum + i
    }
    return sum;
}

int main()
{
    int number;
    // initializing via reading user input:
    ReadUserInput(number);

    // variable 'number' has been intitialized.

    int SumEvenNumbers = CalculateSumEvenNumbers(number);
    
    cout << "The sum of even numbers from 1 to " << number << " is: " << SumEvenNumbers << endl;


    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
   #30 Problem:

 Write a program to calculate factorial of N!

 Example: factorial of 6 ➔ 6 × 5 × 4 × 3 × 2 × 1 = 720

 Note: User should only enter positive number, other wise reject it and ask to enter again

 Input
 6

 Outputs ->
 720


*/
//------------------------------------------------------------------------------------------------

void ReadUserInput(int& number) // passing by reference
{
    cout << "Enter a positive integer: \n";
    cin >> number;
    cout << endl;
}

int CalculateFactorial(int number)
{
    int multiply = 1;

    for(int i = number; i >= 1; i--)
    {
       multiply *= i;  // the same as multiply = multiply * i; 
    }

    return multiply;
}


int main()
{
    int number;
    // Initializing via reading user input:

    ReadUserInput(number);
    // The variable number is now intialized.

    int ResultOfFactorial = CalculateFactorial(number);

    cout << "The factorial of " << number << " is: " << ResultOfFactorial << endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////

/*
   #32 Problem:

 Write a program to ask the user to enter:

 • Number
 • M

 Then Print the Number ^ M

 Example Inputs:
 2
 4

 Outputs ->
 16



*/
//------------------------------------------------------------------------------------------------

struct stExponentiation

{
    int base;
    int power;
};

void ReadBaseAndPowerVal(stExponentiation & exponentiation) // pass by ref.
{
    cout << " Enter value for base: \n";
    cin >> exponentiation.base;
    cout << endl;

    cout << "Enter value for power: \n";
    cin >> exponentiation.power;
    cout << endl;
}

double CalculateBasetoThePower(stExponentiation expotentiation) // Using double because pow() easily operates over a wide numeric range.
                                                                //  Ex: pow(9, 9) = 387,420,489   , let alone pow(40, 34) which the user can eaily enter
{
    return pow(expotentiation.base, expotentiation.power);
}

int main()
{
    stExponentiation expotentiation;
    // initializing the variable via reading user input:

    ReadBaseAndPowerVal(expotentiation);
    // the variale 'expotentiation' has been fully initialized.

    double ResultOfExpotentiation = CalculateBasetoThePower(expotentiation);

    cout << expotentiation.base << " to the power " << expotentiation.power << " = " << ResultOfExpotentiation << endl;


    return 0;
}
//}//////////////////////////////////////////////////////////////////////////////////////////


/*
   #46 Problem:

 Problem:

 Write a program to print all letters from A to Z

 Outputs ->
 A
 B
 C
 .
 .
 .
 Z


*/
//------------------------------------------------------------------------------------------------

// reference: https://www.asciitable.com/
void PrintAllEnglishLetters()
{ 
    
    for (int i = 65; i <= 90; i++)    // and 97-122 for small letters.
    {
        cout << char(i) << endl;
    }
    

    for (char c = 'A'; c <= 'Z'; c++) // possible because char data types are integrals.
    {
        cout << c << endl;
    }

    for (char c = 'a'; c <= 'z'; c++) // possible because char data types are integrals.
    {
        cout << c << endl;
    }
}

int main()
{
    PrintAllEnglishLetters();

    return 0; 
}

