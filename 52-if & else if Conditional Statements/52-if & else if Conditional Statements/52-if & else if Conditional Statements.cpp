
#include <iostream>
using namespace std;

/* programming heavily depends on conditional statements
   For example, if a student's mark is over 50, I'd like to print "Pass"
                if its under 50, I'd like to print "Fail"

 Or if a student's mark is over 50, I would like to do one, two, or three things no matter what they are.
 All of this could be achieved via conditional statements.

 Another example:
 If you have a bachelor degree in Computer Science AND your average is over 80, then you will be hired.
 You tell your son that if he achieves a certain average, then you'd buy him a PlayStation.


 Here, we will look at 2 conditional statements:
 1- if statement.
 2- if..else statement.

 
*/

// 1-  if statement alone:
/* *******************************************************************************************************
*                                                                                                        *                                                                                                   *
*  if (Condition == True)           // Now, if the condition is true, then                               *
*  {                                //the body of the if code will be executed and once this is done     *
*    // Body of if code...          // the rest of the program code will be executed as well.            *
*  }                                                                                                     *
*                                                                                                        *
*  // Rest of the program code..                                                                         *
******************************************************************************************************* */


/* Examples:

 When Condition is True:                        When Condition is False:
 ***********************                        ************************
    int x = 10;                                    int x = 10;

   -- if (x > 5)                               __ if (x > 20)
   |  {                                        |  {
   |                                           |
   |__> // Code to be executed                 |   // Code to be executed (SKIPPED)
                                               |                                            |
      }                                        |  }
                                               |
     // Code after if..ALWAYS executed.        |__> // Code after if.. ALWAYS executed.

*/
// let us examine a few examples:

int main()
{
    int x = 10;

    if (x > 5)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}

// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 && x <= 20) // if(true)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}

// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 && x <= 8) // if(false)
    {
        cout << "The code of this if statement will NOT be executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}


// Another example: 
int main()
{
    int x = 10;

    if (x >= 5 || x <= 8) // if(true)
    {
        cout << "The code of the if body has been executed." << endl;
    }

    cout << "The code after if body is ALWAYS executed" << endl;


    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------

// 2-  if..else statement:   If the if condition is false, then the controller jumps to the else code block to execute it.
//     ALWAYS try to use:  if..else statement   instead of if statement alone.... so you do not forget any condition of any sort.
/* *******************************************************************************************************
*                                                                                                        *                                                                                                   *
*  if (Condition == True)                                                                                *
*  {                                                                                                     *
*    // if body executes.                                                                                *
*  }                            
*  else
*  {
*    // else body does NOT execute.
*  }
*
*                                                                                                        *
*  // Rest of the program code..                                                                         *
******************************************************************************************************* */


/* Examples:

 When Condition is True:                          When Condition is False:
 ***********************                          ************************
    int x = 10;                                      int x = 10;

   -- if (x > 5)                                 __  if (x > 20)
   |  {                                          |   {
   |                                             |
   |__> // if body code                          |    // if body code (SKIPPED)                                         |                                            |
                                                 |
      }                                          |   }
      else                                       |__> else                                          
      {                                              {
        // SKIPPED else body here                      // else body executes
      }                                              }
                                                
     // Code after if..else is ALWAYS executed      // Code after if..else is  ALWAYS executed.        

*/   
// let us examine a few examples:

int main()
{
    float x;

    cout << "Please enter a number: \n";
    cin >> x;
    cout << endl;


    if (x > 5)
    {
        cout << "This number is bigger than 5" << endl;
    }
    else
    { 
        cout << "This number is smaller than 5" << endl;
    }

    cout << "This block after the if..else statement is ALWAYS executed. \n";

    return 0;
}

// Another example: 
//  When logging in to my system, I want to check whether the entered password equals the correct stored one in my system.
//  I call my login function:

    //  If the password is correct, then the if statement block is executed where the message "Correct password" is printed out.
    
    //  If the password is false, then the else statement block is, instead, executed 
    //  with the message "You've entered the WRONG password" printed out.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* ============================================================
   IMPORTANT DESIGN NOTE — Divide & Conquer (فَرِّق تَسُد)
   ============================================================

   When applying the Divide & Conquer strategy, conditional logic
   (if, if..else, if..else if..else, etc.) should, whenever possible,
   be embedded inside a FUNCTION rather than a PROCEDURE.

   ------------------------------------------------------------
   Preferred Approach (Function)
   ------------------------------------------------------------

   - Each condition performs ONE specific responsibility.
   - The function RETURNS a value.
   - The returned value does NOT have to be the result of a
     mathematical computation; it can represent a decision,
     classification, state, or rule outcome.

   Example 1: Business Rule (Commission Percentage)
*/

float EvaluateCommissionPercentage(const float& totalSales)
{
    if (totalSales >= 1'000'000)
    {
        return 0.05f; // 5% commission       // without 'f', the literal is double (by default) and would be implicitly converted to float.
    }                                              
    else if (totalSales >= 500'000)
    {
        return 0.03f; // 3% commission
    }
    else if (totalSales >= 100'000)
    {
        return 0.02f; // 2% commission
    }
    else
    {
        return 0.0f;  // No commission
    }
}

/*
   Example 2: Classification Rule (Grade Evaluation)
*/

char EvaluateGrade(const float& grade)
{
    if (grade >= 90)
    {
        return 'A';
    }
    else if (grade >= 80)
    {
        return 'B';
    }
    else if (grade >= 70)
    {
        return 'C';
    }
    else if (grade >= 60)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

/*
   ---------------------------------------------------------------------------------
   Why wrapping up conditional logic inside a function is prefered over a procedure ?
   ---------------------------------------------------------------------------------
   Let's examine both case [At the end we will explain the difference and come up with a FINAL CONCLUSION 
                            for why a function is prefered for this matter]:

   A - Inside a procedure (Wrong approach): 

 void ReadGrade(float& grade)
 {
    cout << "Enter a grade: \n";
    cin >> grade;
    cout << endl;
 }

void EvaluateGrade(const float& grade) 
 {
    if (grade >= 90)
    {
        cout << "A" << endl;
    }
    else if (grade >= 80)
    {
        cout << "B" << endl;
    }
    else if (grade >= 70)
    {
        cout << "C" << endl;
    }
    else if (grade >= 60)
    {
        cout << "D" << endl;
    }
    else if (grade >= 50)
    {
        cout << "E" << endl;
    }
    else
    {
        cout << "F" << endl;
    }
 }

int main()
 {
    float grade;

    // Initilizing the variable via user input:
    ReadGrade(grade);

    // variable 'grade' has been initialized.
    EvaluateGrade(grade);               // since programs end here. we are not explicitly telling the user we are printing
                          
    return 0;
 }
 _________________________________________________

 B- Inside a function (The correct & ONLY approach for an optimized code)

  void ReadGrade(float& grade)
 {
    cout << "Enter a grade: \n";
    cin >> grade;
    cout << endl;
 }

 char EvaluateGrade(const float &grade)
 {
    if (grade >= 90)
    {
        return 'A';
    }
    else if (grade >= 80)
    {
        return 'B';
    }
    else if (grade >= 70)
    {
        return 'C';
    }
    else if (grade >= 60)
    {
        return 'D';
    }
    else if (grade >= 50)
    {
        return 'E';
    }
    else
    {
       return 'F';
    }
 }

int main()
 {
    float grade;

    // Initilizing the variable via user input:
    ReadGrade(grade);

    // variable 'grade' has been initialized.
    char GradeLetter= EvaluateGrade(grade);               // since programs end here. we are not explicitly telling the user we are printing
    cout << "The grade is: " << GradeLetter << endl;

    return 0;
 }


   ------------------------------------------------------------
   Reasons
   ------------------------------------------------------------

   1) Clarity in main():
   When reading main() (which is usually the first entry point),
   the reader can IMMEDIATELY see the full execution flow:

   - a function is called
   - its returned value is captured in a variable
   - that variable is explicitly printed

   This makes all side effects visible at the call site.


   2) Reusability:
      A function that RETURNS a value can be reused in:
         - console output
         - file writing
         - GUI labels
         - logging
         - network payloads
         - unit tests

  A procedure that prints performs a direct output side effect,
  which makes it reusable only for console printing
  and locks it to a single output mechanism.


   3) Separation of Concerns:
      - Functions decide WHAT the result is.
      - main() (or caller) decides WHAT TO DO with it.

   4) Testability:
      Functions that return values are easier to test:
         ASSERT(EvaluateGrade(95) == 'A');

   ------------------------------------------------------------
   Mental Model
   ------------------------------------------------------------

   - if / else statements (or any other conditional statements) choose which code block runs.
   - Functions compute or decide a value and return it to the caller.
   - main() calls functions, stores returned values, and prints results.


   Logic produces data.
   Presentation consumes data.

   This aligns with:
   - Divide & Conquer
   - Single Responsibility Principle (SRP)
   - Clean Code practices
*/














