#include <iostream>
using namespace std;

/*
🧠 Mental Model to Remember Forever
“A procedure acts, a function produces.”

Procedure → performs an action(printing, input, messages)

Think: "instructions in a kitchen"

Function → produces one value, like a math formula

Think : "calculator that returns a number and stays silent"

A function that prints is “noisy and impure.”
A procedure that returns values is illogical.

This mental model keeps the architecture clean and scalable.
*/



/* Homework #1: In ONLY ONE program, output the following exactly at it appears utlizing: 
         
               1 - A Procedue named MySumProcedure.
               2 - A function named MySumFunction.

                
 Please enter Number1 ?
 10

 Please enter Number2 ?
 20
 **************************
 
 30

 // Important: Read the note below BEFORE attempting to solve this problem:
*/

/* 
  Note: There is ONLY ONE CORRECT solution for this problem utilizing BEST PRACTICES **regardless** of what 1 & 2 state.  
      Items 1 & 2 are included only to help you practice what you have learned so far (which is NOT yet enough to 
      solve this problem correctly, as we are still progressing through the concepts).

      Therefore, if you have advanced further in the course and are revisiting this file, ignore this primitive
      method and apply what you have learned from the following lectures.

      If not, then you will most likely solve it in this simpler, primitive way — which is CRUCIAL for understanding
      the final, correct solution that will be introduced in the upcoming lessons.


*/

// Crucial: The solution below is NOT the final correct one. 
// The FINAL correct one will be presented later.
// Remember- We're gradually introducing programming concepts.

void MySumProcedure() // Again- The solution here is NOT the correct and final one. We will solve it properly later.
{
    float Number1, Number2;
   
    cout << "Please enter Number1 ?\n";
    cin >> Number1;

    cout << "Please enter Number2 ? \n";
    cin >> Number2;

    cout << "**************************\n\n";
    cout << Number1 + Number2 << endl;
    
}

float MySumFunction()
{
    float Number1, Number2;

    cout << "Please enter Number1 ?\n";
    cin >> Number1;                         

    cout << "Please enter Number2 ? \n";
    cin >> Number2;

    return  Number1 + Number2;  // Optimized: directly return the expression. Plus, no extra parentheses needed as in (Number1 + Number2)
    /* ❌ Unoptimized way:
    
       sum = Number1 + Number2;   
       return sum;    

       As this stores the result in a temporary variable for no reason.
       The extra variable adds zero benefit when the returned expression is simple.
   */
   
}


int main()
{   
    float sum; // float result  is a bad name as it's not descriptive. (result of what ?, multi ? division ? etc.)

    //MySumProcedure();
    sum = MySumFunction();
    cout << "**************************\n\n"; // never include such line in functions as they are desinged to do ONE specific thing which is to return a value.
    cout << sum << endl;
   
    return 0;
    /*
    “never include such line in functions as they are designed to do ONE specific thing.”

        Procedure = prints the sum

        Function = returns the sum

        You have correctly separated both responsibilities.
        */
}
