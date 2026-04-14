
#include <iostream>
using namespace std;

/* switch...case statement 
   is used when making comparisons. 


    switch (expression)
 {
     case x:
         // code block
         break;

     case y:
         // code block
         break;

     default:
         // code block
 }




  1️⃣ All keywords are written in lowercase.

  2️⃣ Does the expression equal x?
  - If true, the corresponding case code block is executed.
  - The break statement then exits the entire switch–case statement.

  If false, does the expression equal y?
  - If true, the corresponding case code block is executed.
  - The break statement exits the switch–case statement.

  3️⃣ If none of the case values match,
  the default code block is executed (if present).
  It is recommended to always include the default part
  just how 'else' was recommended to be always included.


  Each case SHOULD normally end with a break statement.
  This is to prevent execution from continuing into the next case
  after the current case’s code block has already been executed.

  Not only that !
  Without a break statement at the end of each case, 
  the switch–case construct allows "fall-through" behavior, 
  meaning execution continues sequentially into the next case 
  EVEN if its condition does NOT match.

  In most scenarios, fall-through is undesirable and unintended,
  and therefore each case is typically terminated with a break..


  Let us see an example:
*/

// Example A: (Note: This is just a demonstrational code example. When solving problems, strive to use a function instead of a procedure 
// where week days here are returned  and then you print out the returned value) 100! correct & verified.
// This point is explained in detail in the file titled [52-if & else if Conditional Statements.cpp]

int main()
{
    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Sunday \n";
        break;

    case 2:
        cout << "Monday \n";
        break;

    case 3:
        cout << "Tuesday \n";
        break;

    case 4:
        cout << "Wednesday \n";
        break;

    case 5:
        cout << "Thursday \n";
        break;

    case 6:
        cout << "Friday \n";
        break;

    case 7:
        cout << "Saturday \n";
        break;

    default:
        cout << "Not a week day! \n";
    }
   

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////// 


//Another example B (Predict the outcome):
//(Note: This is just a demonstrational code example.When solving problems, strive to use a function instead of a procedure
    // where week days here are returned  and then you print out the returned value)

int main()
{
    int day = 8;

    switch (day)
    {
    case 1:
        cout << "Sunday \n";
        break;

    case 2:
        cout << "Monday \n";
        break;

    case 3:
        cout << "Tuesday \n";
        break;

    case 4:
        cout << "Wednesday \n";
        break;

    case 5:
        cout << "Thursday \n";
        break;

    case 6:
        cout << "Friday \n";
        break;

    case 7:
        cout << "Saturday \n";
        break;

    default:      // Recommended to always include it (What if something fails in the program ?)
        cout << "Not a week day! \n";
    }


    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Another example C (Predict the outcome):
//(Note: This is just a demonstrational code example.When solving problems, strive to use a function instead of a procedure
    // where week days here are returned  and then you print out the returned value)
int main()
{
    int day = 1;

    switch (day)
    {
    case 1:
        cout << "Sunday \n";

    case 2:
        cout << "Monday \n";

    case 3:
        cout << "Tuesday \n";

    case 4:
        cout << "Wednesday \n";

    case 5:
        cout << "Thursday \n";
        break;

    case 6:
        cout << "Friday \n";
        break;

    case 7:
        cout << "Saturday \n";
        break;

    default: 
        cout << "Not a week day! \n";
    }


    return 0;
}
/*
  Outcome: Prints Sunday through Thursday.

  Explanation:
  When the SINGLE EXPRESSION matches a value, its corresponding
  code block is executed. If that code block does not end with a
  break statement, a "fall-through" occurs, meaning execution
  continues sequentially into the subsequent case blocks without
  checking their corresponding values.

  This continues until a break statement is encountered or the
  closing brace of the switch statement is reached.
*/
//////////////////////////////////////////////////////////////////////////////////////////////////



/* Crucial Notes:

   As developers, we often prefer the switch–case statement over
   long if / else if / else chains because it improves readability
   and organizes the code more clearly.

   Nevertheless, not every if statement can be replaced by
   a switch–case statement.

   This is because a switch–case statement is designed to compare
   a SINGLE expression against multiple constant values:

   switch (EXPRESSION)
   {
       case VALUE:
           // code block
           break;

       case VALUE:
           // code block
           break;

       default:
           // code block
   }

   In contrast, an if statement executes a block of code when
   a condition evaluates to true:

       if (condition)
       {
           // code block
       }
       else if (condition)
       {
           // code block
       }

   Conditions in if statements can be complex expressions
   involving ranges, logical operators, function calls, or
   multiple variables — cases that switch–case cannot handle.

   Therefore, in clear scenarios where a SINGLE expression is
   compared for EQUALITY against MANY discrete values, a switch–case statement
   is not only appropriate but also preferred for readability.

   Once a matching case is found, its code block is executed and
   the switch–case statement is immediately exited by the
   corresponding break statement.

   In such scenarios, switch–case is MORE READABLE,
   offers clearer intent, better structure,
   and better optimization opportunities compared to long
   if / else if chains.

*/
//////////////////////////////////////////////////////////////////////////////////////////////

/* Now let's hon in one this note segment:
   
   "When an if / else if chain repeatedly checks whether the SAME EXPRESSION
   is EQUAL to different CONSTANT VALUES, a switch–case statement is usually
   more appropriate and more readable."

   For example, examine the following lines of code:
 */

   if (color == enColors::blue) 
    {
        system("color 1F");  
    }
    else if (color == enColors::green)
    {
        system("color 2F");
    }
    else if (color == enColors::red)
    {
        system("color 4F");
    }
    else if (color == enColors::yellow)
    {
        system("color 6F");
    }
    else
    {
        system("color 1F");
    }

   // So as you can see, it is NOT preferable to express this code with the if elseif statements.

   // Therefore, the prefered code is:
   switch (color)
   {
   case enColors::blue:
       system("color 1F");
       break;

   case enColors::green:
       system("color 2F");
       break;

   case enColors::red:
       system("color 4F");
       break;

   case enColors::yellow:
       system("color 6F");
       break;
    
   default:
       system("color 1F");
   }
   /*
   Notice how much more readable and structured this version is.
   The intent is immediately clear: one expression is being matched
   against multiple discrete values.
*/

   // Crucial:
   // In the following snippet, including a break statement is redundant:

   // ❌ Issue: break after return (Dead code)
   case enColor::blue:
       return "Blue";
       break; // ❌ unreachable

 //✅ Correct Version
   case enColor::blue:
       return "Blue";
