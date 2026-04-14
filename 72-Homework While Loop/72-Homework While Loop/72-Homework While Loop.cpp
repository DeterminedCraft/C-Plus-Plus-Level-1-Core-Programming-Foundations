// 72-Homework While Loop.cpp 

#include <iostream>
#include <cmath>
using namespace std;

// NOTE:
// The solutions for the exercises presented here are NOT final.
// They are correct ONLY at the current level of the course.
//
// More optimized and refined solutions will be shared later
// in the C++ Level 2 course repository on this GitHub account.
//
// IMPORTANT:
// To deliberately practice the WHILE loop, these exercises are
// intentionally solved using while-loops, even though MOST—if not ALL—
// should ideally be solved using do–while loops.
//
// This choice is intentional and serves one purpose only:
// to entrench and solidify our understanding of the while-loop first.
//
// TIP:
// If you encounter difficulty solving these exercises,
// revisit the do–while lesson—it provides the correct mental model
// for reading and validating user input, which makes these problems
// significantly easier to reason about.

 /*
 Solve the following problems of "سلسلة الخوارزميات وحل المشاكل":
 Utilizing while-loops ONLY instead of for-loops:

 #26, #27, #28, #29, #30, #32, #37, #46, #50

 Notes:
 - #30: factorial : validate positive numbers.

*/



/*
 Problem #26:

 Write a program to print numbers from 1 to N.

 Input:
 10

 Outputs:
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


//int ReadPositiveInt()
//{
//    int number;
//    cout << "Enter a positive number: ";
//    cin >> number;  // IMMEDIATE validation in the condition of while-loop against range.
//
//    while (number <= 0) // comparing user input 'number' to an intrinsic value (= does NOT need to be a passed argument in the called function).
//    {
//        cout << "Only positive numbers are allowed. Re-enter the number: ";
//        cin >> number;
//        cout << endl;
//    }
//
//    return number;
//}
//
//void PrintFrom1ToN(const int &number) // passing by reference.
//{
//    // using a while-loop (as opposed to for loop since # of iterations is not known beforehand/ dependant on user input):
//    int i = 1;
//    while (i <= number)
//    {
//        cout << i << endl;
//        i++; // write it as the 3rd step prior to writing the body above it.
//    }
//}
//
//int main()
//{
//    // initializing the below variable via reading user input (returned by function):
//    int number = ReadPositiveInt();
//    // The variable 'number' is now initialized.
//
//    PrintFrom1ToN(number);
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*

  Problem #27:
  Write a program to print numbers from N to 1.

  Input:
  10

  Outputs:
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


//
//int ReadPositiveInt()
//{
//    int number;
//    cout << "Enter a positive number: ";
//    cin >> number;    // IMMEDIATE validation in the condition of while-loop against range
//
//    while (number <= 0)
//    {
//        cout << "Only positive numbers are allowed. Re-enter a + number only: ";
//        cin >> number;
//        cout << endl;
//    }
//
//    return number;
//
//}
//
//void PrintFromNumberTo1(const int &number) // passing by const reference
//{
//    int i = number;
//    while (i >= 1)
//    {
//        cout << i << endl;
//        i--;
//    }
//}
//
//int main()
//{
//    //Intitializing the below variable via reading user input (value returned by function).
//    int number = ReadPositiveInt();  // not passing range arguments as their values are intrinsic (for the validation part).
//    // the variable 'number'is now initialized.
//
//    PrintFromNumberTo1(number);
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Problem #28:
  Write a program to sum odd numbers from 1 to N.

  Input:
  10

  Outputs:
  25

*/


//int ReadPositiveInt()
//{
//    int number;
//    cout << "Enter a positive integer: ";
//    cin >> number;  // IMMEDIATE validation in the condition of while-loop against range
//
//    while (number <= 0)
//    {
//        cout << "Only positive numbers are allowed. Re-enter the value: ";
//        cin >> number;
//    }
//
//    return number;
//
//}
//
//int SumOddNumbersFrom1ToNumber(int number) // passing by value.
//{
//    int sum = 0;
//
//    int i = 1;
//    while (i <= number)
//    {
//       
//        sum += i;   // same as     sum = sum + i
//        i+= 2;  // written as the 3rd step & before composing the body.
//    }
//
//    return sum;
//
//}
//
//int main()
//{
//    //Initializing the variable below via reading user input (returned by function)
//    int number = ReadPositiveInt(); // validation arguments not included as their values are intrinsic.
//    // the variable 'number' has been initialized.
//
//    int ResultOfSum = SumOddNumbersFrom1ToNumber(number);
//    cout << "The sum of all ODD numbers from 1 to " << number << " = " << ResultOfSum << endl; // no need for a printing function as it is designated for printing a structure.
//
//    return 0;
//}
/* The long unoptimized way is:

*  int sum = 0;

    int i = 1;
    while (i <= number)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }

        i++;  // written as the 3rd step & before composing the body.
    }

    return sum;

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




/*
  Problem #29:
  Write a program to sum even numbers from 1 to N.

  Input:
  10

  Outputs:
  30

*/

//int ReadPositiveInt()
//{
//    int number;
//    cout << "Enter a positive integer: ";
//    cin >> number;  // IMMEDIATE validation in the condition of while-loop against range
//
//    while (number <= 0)
//    {
//        cout << "Only + numbers are allowed. Re-enter the number: ";
//        cin >> number;
//    }
//
//    return number;
//
//}
//
//int CalculateEvenSumFrom1ToNumber(int number) // pass by value
//{
//    int sum = 0;
//
//    int i = 2;
//    while (i <= number)
//    {
//        sum = sum + i;
//        i+=2; // write as the third step & before composing the body.
//    }
//
//    return sum;
//}
//
//int main()
//{
//    // initializing the variable below via reading user input (returned by function):
//    int number = ReadPositiveInt(); // no need to pass validation argument(s) as their value(s) are intrinsic.
//    // the variable 'number' has been initialized.
//
//    int ResultOfEvenSum = CalculateEvenSumFrom1ToNumber(number);
//    cout << "The sum of all EVEN numbers from 1 to " << number << " = " << ResultOfEvenSum << endl;
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
   #30 Problem:

 Write a program to calculate factorial of N!

 Example: factorial of 6 ➔ 6 × 5 × 4 × 3 × 2 × 1 = 720

 Note: User should only enter positive number, otherwise reject it and ask to enter again

 Input
 6

 Outputs ->
 720


*/
//------------------------------------------------------------------------------------------------


//int ReadPositiveInt()
//{
//    int number;
//    cout << "Enter a positive integer: ";
//    cin >> number; // IMMEDIATE validation in the condition of while-loop, comparing it to range.
//
//    while (number <= 0)
//    {
//        cout << "Only a + number is accepted. Enter a + number: ";
//        cin >> number;
//    }
//
//    return number;
//}
//
//int CalculateNumberFactorial(int number) // passing by value.
//{
//    int multiply = 1;
//
//    int i = number;
//    while (i >= 1)    // choosing while-loop over for-loop since the number of iterations is NOT known at compile-time (it depends on user input).
//    {
//        multiply = multiply * i;
//        i--; // 3rd step to write before composing the while-loop.
//    }
//
//    return multiply;
//}
//
//int main()
//{
//    // initialize the below variable via reading user input ( returned by function):
//    int number = ReadPositiveInt(); // no need to include range arguments as their values are intrinsic (for the validation part).
//    // the variable 'number' has been initialized.
//
//    int ResultOfMultiplication = CalculateNumberFactorial(number);
//    cout << "The factorial of " << number << " = " << ResultOfMultiplication << endl;
//
//    return 0;
//}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

//struct stExpotentials
//{
//    int number;
//    int m;
//};
//
//void ReadTwoIntValues(stExpotentials& expotentials) // passing by ref.
//{
//    cout << "Enter a positive integer for number: ";
//    cin >> expotentials.number;   // IMMEDIATE validation inside the condition of the while loop by against a range
//
//    while (expotentials.number <= 0)
//    {
//        cout << "Only positive number allowed. Re-enter the number: ";
//        cin >> expotentials.number;
//    }
//
//    cout << "Enter a positive integer for a second number: ";
//    cin >> expotentials.m; // IMMEDIATE validation inside the condition of the while-loop against a range
//
//    while (expotentials.m <= 0)
//    {
//        cout << "Only positive number is allowed. Re-enter the number: ";
//        cin >> expotentials.m;
//    }
//}
//
//
//double NumberToPowerM(stExpotentials expotentials)
//{
//    return pow(expotentials.number, expotentials.m);
//
//}
//
//int main()
//{
//    // since the two are related amongst each other, I choose to declare them as member variables inside a structure instead of declaring them as variables inside main()
//    // Now, creating a normal variable (as opposed to an array variable used for records):
//    stExpotentials expotentials; 
//    // initializing the variable 'expotentials' cia reading user input:
//    ReadTwoIntValues(expotentials); // no range arguments are included as their range is intrinsic.
//    // The variable 'expotential' is now fully initialized.
//
//    double ResultOfExpontentiation = NumberToPowerM(expotentials); // always catching the returned value. // double because pow returns a double.
//    cout << "Number is: " << expotentials.number << ". M is: " << expotentials.m << ". Therefore number ^ M = " << ResultOfExpontentiation << endl;                                             // no need for a dedicated printing procedure as we're not printing an entire structure.
//                                    
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

 /* Problem #37:

  Write a program to read numbers from user and sum them, keep reading until the user enters -99,
  then print the Sum on screen.

  Input:
  10
  20
  30
  40
  -99

  Output:
  100

*/

//float ReadUserInputWithRestriction(float restricted) // passing by value
//{   
//    float number;
//    float sum = 0; // accumulator initialized FIRST
//    cout << "Enter number: ";
//    cin >> number;
//
//    while (number != restricted)
//    {
//        sum = sum + number;
//
//        cout << "Enter number: ";
//        cin >> number;
//    }
//
//    return sum;
//}
//
//
//int main()
//{
//    float restricted = -99; // in order to avoid hardcoding in the called function.
//    // intitializing the below variable via reading user input (returned by function)
//    float SumOfNumbers = ReadUserInputWithRestriction(restricted); // validation argument included as its value is not intrinsic
//
//    cout << "The sum of all entered numbers is: " << SumOfNumbers << endl;
//
//    return 0;
//}






/* Problem #37:

  Write a program to read numbers from user and sum them, keep reading until the user enters -99,
  then print the Sum on screen.

  Input:
  10
  20
  30
  40
  -99

  Output:
  100

*/

//
//float ReadValuesWithRestriction(const float restricted) //passing by value.
//{    
//    float number;
//    float sum = 0;
//    cout << "Enter a number: ";
//    cin >> number; // IMMEDIATELY validating 'number' in the condition of the while-loop against the restricted value
//
//    while (number != restricted) 
//    {
//        sum = sum + number;
//        cout << "Enter a number: ";
//        cin >> number; 
//    }
//
//    return sum;
//
//}
//
//
//int main()
//{
//    const float restricted = - 99;   // constant as this value must never change after initialization.
//    // initializing the below variable via reading user input (returned by function).. we're returning the sum.
//    float SumOfNumbers = ReadValuesWithRestriction(restricted); // passing validation argument as its value in not intrinsic
//
//    cout << "The sum of the numbers (exclusing " << restricted << " )" << " is: " << SumOfNumbers << endl;
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
  Problem #46:
  Write a program to print all letters from A to Z.
  Utilizing while-loops ONLY

  Output:
  A
  B
  C
  .
  .
  .
  Z
*/

//void PrintCapitalLetterAlphabets()
//{ // usually a for-loop is utilized as the # of iterations is known beforehand. Nevertheless, we're asked to stick with while-loop for this particular example.
//    
//    int i = 65;  // 1st step
//        while (i <= 90)   // 2nd step
//        {
//            cout << char(i) << endl;  // body is the last line to write.
//            i++;  // 3rd step
//        }
//        
//
//        // or:
//         /*
//        char i = 'A';  // 1st step
//        while (i <= 'Z')   // 2nd step
//         {
//            cout << i << endl;  // body is the last line to write.
//            i++;  // 3rd step
//         }
//        */
//
//        //or:
//
//       /*
//       int i = 'A';   // 1st step
//       while (i <= 'Z')  // 2nd step
//        {
//           cout << char(i) << endl;   // body is the last line to write.
//           i++;                             // 3rd step
//        }
//        */
//
//}
//
//
//
//int main()
//{
//
//    PrintCapitalLetterAlphabets();
//
//    return 0;
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  Problem #50:

  Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234.
  If correct, show the balance to the user.
  Otherwise, print "Wrong PIN" and ask the user to enter the PIN again.

  Only allow the user to enter the PIN 3 times.
  If all attempts fail, print "Card is locked!".

  Assume user balance is 7500.

  Input:
  1234
  5151

  Output:
  Your Balance is: 7500
  Wrong PIN

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{


    return 0;
}











/*
 Problem #26:

 Write a program to print numbers from 1 to N.

 Input:
 10

 Outputs:
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

//
//int ReadIntUserInputInRange(int from, int to) // pass by value
//{
//    int number;
//    cout << "Enter an integer number between " << from << " & " << to << endl;
//    cin >> number;
//
//    while (number < from || number > to) // checks whether the user entered number is valid (in range or not in range). condition evaluates to true what number is invalid.
//    {
//        cout << "Wrong range for number \n";
//        cout << "Enter a number between " << from << " & " << to << ":";
//        cin >> number;
//    }
//
//    return number;
//}
//
//void PrintFrom1ToNumber(const int &number) // passing by constant reference
//{
// // using a while loop to iterate, since we do NOT know, beforehand, the number of iterations. As this depends on user-input.
// // we choose not to utilize for-loop since it is preferred when the number of iterations is known before run-time.
//    int i = 1;
//    while (i <= number)
//    {
//        cout << i << endl;
//        i++;  // updates the value. without including this line, we'll keep on looping forever.
//    }
//}
//
//
//int main()
//{
//    int from = 1;
//    int to = 1000000;
//    // initializing the below variable 'number' via reading user-input, along with immediately validating its range:
// 
//    int number = ReadIntUserInputInRange(from, to);  //This function will be added as a utility in the future. So that function implementation is written ONE time only outside this file
//    // the variable 'number' is now initialized and its range is validated..
// 
//    PrintFrom1ToNumber(number);
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* 

  Problem #27:
  Write a program to print numbers from N to 1.

  Input:
  10

  Outputs:
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

//
//int ReadIntUserInputInRange(int from, int to) // pass by value
//{
//    int number;
//    cout << "Enter an integer number: \n";
//    cin >> number;   // we immediately validate the range of this user entered number
//
//    while (number < from || number > to)
//    {
//        cout << "You've entered an out of range number ! \n" << "Enter an in-range integer number: ";
//        cin >> number;
//    }
//
//    return number;
//}
//
//void PrintFromNumberTo1(const int &number) // passing by const reference.
//{
//    int i = number;
//    while (i >= 1)
//    {
//        cout << i << endl;
//        i--;
//    }
//}
//
//int main()
//{        //specifying range for user input.
//    int from = 1;
//    int to = 1000000;
//    // initializing the below variable 'number' via reading user-input, along with immediately validating its range:
//
//    int number = ReadIntUserInputInRange(from, to);
//    // the variable 'number' is now initialized and its range is validated.
//    
//    PrintFromNumberTo1(number);
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*       
  Problem #28:
  Write a program to sum odd numbers from 1 to N.

  Input:
  10

  Outputs:
  25

*/
 

//int ReadIntUserInputInRange(int from, int to) // passing by value
//{
//    int number;
//    cout << "Enter an integer number between " << from << " & " << to << ": ";
//    cin >> number;
//    cout << endl;
//
//    while (number < from || number > to)
//    {
//        cout << "The number entered is out of range. Try again: ";
//        cin >> number;
//    }
//
//    return number;
//}
//
//int SumOfOddNumbers(int number) // passing by value.
//{
//    // utilizing while loop since the number of iterations is unknown, as it's user-dependent.
//    int sum = 0;
//
//    int i = 1;
//    while (i <= number)
//    {
//        sum = sum + i;
//        i+=2;
//    }
//    return sum;
//}
//
//int main()
// {
//    int from = 1;
//    int to = 1000000;
//    // initializing the below variable 'number' via reading user in^put, along with immediately validating its range:
//
//    int number = ReadIntUserInputInRange(from, to); // this function will be added as a utility in the future.
//    // the variable 'number' is now initialized and its range validated.
//
//    int ResultSumOfOddNumbers = SumOfOddNumbers(number);
//    
//    cout << "The sum of ODD numbers from 1 to " << number << " = " << ResultSumOfOddNumbers << endl;
//    // again, a dedicated printing procedure is needed when we are printing a structured format.
//
//    return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    


/*
  Problem #29:
  Write a program to sum even numbers from 1 to N.

  Input:
  10

  Outputs:
  30

*/


//int ReadIntUserInputInRange(int from, int to) // passing by value.
//{
//    int number;
//    cout << "Enter an integer number between " << from << " & " << to << " : ";
//    cin >> number;
//    cout << endl;
//
//    while (number < from || number > to) // evaluates to true when the entered number is out of the suggested range.
//    {
//        cout << "The entered value is out of range. Try again: ";
//        cin >> number;
//    }
//
//    return number;
//}
//
//int SumOfEvenNumbers(int number) // passing by value
//{
// // utilizing while-loop since the number of iterations is not known beforehand as it is dependant on the user input:
//    int sum = 0;
//
//    int i = 0;
//        while (i <= number)
//        {
//            sum = sum + i;
//            i += 2;
//        }
//
//        return sum;
//}
//
//int main()
//{
//    int from = 1;
//    int to = 1000000;
//  // initializing the below variable 'number', along with validating its range:
//
//    int number = ReadIntUserInputInRange(from, to);
//    // the variable number is now initialized and its range validated.
//
//   int  ResultOfEvenSums = SumOfEvenNumbers(number);
//   cout << "The sum of even numbers from 1 to " << number << " = " << ResultOfEvenSums << endl;
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////



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


//int ReadIntUserInputInRange()
//{
//    int number;
//    cout << "Enter a positive number: ";
//    cin >> number;
//    cout << endl;
//
//    while (number < 0)
//    {
//        cout << "negative numbers are NOT allowed. Enter a positive number: ";
//        cin >> number;
//    }
//
//    return number;
//}
//
//
//int NumberFactorial(int number) // passing by value.
//{
//    int multiply = 1;
//
//    int i = number;
//    while (i >= 1)
//    {
//        multiply = multiply * i;
//        i--;  // updates the value, without it the loop keeps on executing the body forever.
//    }
//
//    return multiply;
//}
//
//int main()
//{   // initializing the below variable 'number' via reading user input, along with immediately validating its range:
//
//    int number = ReadIntUserInputInRange(); // another type of utility called.
//    // the variable 'number' is now initialized, and it falls into the desired range.
//    
//    int ResultOfNumberFactorial = NumberFactorial(number); // always store the returned value.
//
//    cout << "The factorial of " << number << " is " << ResultOfNumberFactorial << endl;
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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

//struct stExpotentials
//{
//    int number;
//    int m;
//};
//
//void ReadIntUserInputInRange(stExpotentials &expotentials) //passing by reference.  // can not be a function since only ONE value can be returned.
//{
//    cout << "Enter number: ";
//    cin >> expotentials.number;
//    // immediately validating the range:
//    while (expotentials.number < 0)
//    {
//        cout << "Only positive values are allowed for the number. Try again: ";
//        cin >> expotentials.number;
//    }
//
//    cout << "Enter the power: ";
//    cin >> expotentials.m;
//    //immediately validate the range:
//    while (expotentials.m < 0)
//    {
//        cout << "Only positive values are allowed for the power. Try again: ";
//        cin >> expotentials.m;
//    }
//}
//
//
//int PowerOfNumber(stExpotentials expotentials) // passing by val.
//{
//    return pow(expotentials.number, expotentials.m);
//}
//
//int main()
//{
//    stExpotentials expotentials;
//    // initializing this variable via reading user-input:
//
//    ReadIntUserInputInRange(expotentials);
//    // the variable expotentials is now fully initialized.
//
//    int ResultPowerOfNumber = PowerOfNumber(expotentials);
//    cout << expotentials.number << " ^ " << expotentials.m << " = " << ResultPowerOfNumber << endl;
//
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



 
 /* Problem #37:

  Write a program to read numbers from user and sum them, keep reading until the user enters -99,
  then print the Sum on screen.

  Input:
  10
  20
  30
  40
  -99

  Output:
  100

*/







/*
  Problem #46:
  Write a program to print all letters from A to Z.

  Output:
  A
  B
  C
  .
  .
  .
  Z
*/




/*  
  Problem #50:

  Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234.
  If correct, show the balance to the user.
  Otherwise, print "Wrong PIN" and ask the user to enter the PIN again.

  Only allow the user to enter the PIN 3 times.
  If all attempts fail, print "Card is locked!".

  Assume user balance is 7500.

  Input:
  1234
  5151

  Output:
  Your Balance is: 7500
  Wrong PIN

*/










