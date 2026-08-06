
#include <iostream>
using namespace std;
 
/* While-Loop:
   Syntax:


   while (condition)
   {
     // body of while-loop
   }



   How it works:

        ┌───────────────┐
        │     Start     │
        └───────┬───────┘
                │
                ▼
        ┌─────────────────┐
        │  Check condition│◄───────────────┐
        └───────┬─────────┘                │
                │                          │
        ┌───────┴─────────┐                │
        │                 │                │
      TRUE              FALSE              │
        │                 │                │
        ▼                 ▼                │
 ┌─────────────────┐   ┌───────────────┐   │
 │ Execute body    │   │Exit while-loop│   │
 │ (one iteration) │   └───────────────┘   │
 └───────┬─────────┘                       │
         │                                 │
         └─────────────────────────────────┘


 
  As you can see: once condition evaluates to true, 
  execution enters the while-loop - hence, we fall into the "trap" of the while-loop !

  This trap is only escapable when the condition is properly updated 
  so that it eventually evaluates to false.

*/

// Example:
// The goal is to read the following code snippet line by line.
// Do NOT attempt to reproduce it after taking a quick glance at it.
// read slowly one line at a time:


    int number;
    cout << "Please enter a positive number: \n";
    cin >> number;

     // After the user enters a value, the IMMEDIATE FIRST step is input validation.
     //
     // The while-condition is written so that it is TRUE when the value is INVALID.
     // In this case, the trap is that the loop body warns the user and prompts
     // them to enter a valid value.
     //
     // The loop repeats until a VALID value is entered.
     // Once the condition becomes false, the program continues.
    while (number <= 0)                //  Rule: 👉 The while-condition must represent the INVALID state.                        
    {
        cout << "Wrong Number. Plz enter a positive number: \n";
        cin >> number;
    }

    cout << "\nYou entered the number: " << number << endl;
     
    // As noticed, while-loop is utilized ONLY becasue we don't know
    // how many times the user will keep on entering the wrong number.
    // 
    // if this user enters the wrong number, then they will fall into
    // the while-loop trap that is only escapable if the correct number
    // is entered.
    // for-loop could never be used here as it utilizes a certain number of interations.
 
    // How is the Divide & conquer strategy applied to these lines of code ?
    // The answer, is illustrated in the mental model below:
    // 
    // As noticed, the while-loop is to be included immediately 
     // after the reading user input and all are in the same UTILITY
     // function, we will see in the mental model below.

    // NOW THE PROBLEM IS THAT, the lines of code are repeated TWICE:
    // one time before the while statement and another time inside the while statement. 
    // 
    // This deems our code unoptimized, hard to read, and also maintain.
    // Instead, use a do-while loop: 
    // This concept will be explained in the upcoming lesson.

     // Golden Rule:
    // Write while-loop conditions so they are TRUE when the input is INVALID.
    // The loop becomes a validation trap that only exits when input becomes VALID.



                /********************************************** While Loop Mental Model:******************************************
 
 ** A-  A For-Loop such as: */

  
  for (int i = 1; i <= 5; i++)
     {
       cout << i << endl;             
     }

  ///* has the exact equivalent While - Loop:  */


  int i = 1;                  // #1: Type it first
  while (i <= 5)              // #2: Type it secondly
  {
    cout << i << endl;        //<----------- Thelast part to compose is the body.
    i++;                      // #3: Type it third.
  }
  // Just how you compose the for-loop in the order of:    for (initialization; condition; update)
  // compose the while loop in the order instructed above.
  
  /*
   But as a recommendation: 
  
   Use a for loop when the number of iterations is known or can be determined in advance.
   Use a while loop when the number of iterations depends on a condition that is evaluated during execution (often user input or runtime state).
  
  */


