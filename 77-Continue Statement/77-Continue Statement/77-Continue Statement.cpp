// 77-Continue Statement.cpp :

#include <iostream>
using namespace std;

/* We'll look at the 'continue' statement.
   We will compare both the 'continue' & the 'break' statements.

   The continue & the break statements are used INSIDE the for and while loops.

    - The break statement exits the loop immediately.
    - The continue statement skips the remaining code in the current iteration
      and returns control to the loop controller.

      • In a for-loop: the update expression is executed automatically.
      • In a while-loop: the update must be done manually before continue,
        otherwise an infinite loop may occur.


         "Continue skips the rest of the current iteration,
          but it does NOT perform any update in a while-loop.
          Therefore, an update must occur before continue when needed."

*/




/************************ Syntax **********************

 FOR LOOP                           --------------
 --------                           |            |                     
                                    ↓            |
           for (init; condition; update)         |
           {                                     |
              // if code here                    |
                                                 |
               if (condition to continue)        |
               {                                 |
                 continue;   ---------------------
               }
                 // code B (this is skipped if continue runs)
           }
        

 If the continue statement is executed, the code below it which is still inside the for-loop
 is ignored, and the controller jumps to the UPDATE expression,
 then re-evaluates the condition and continues as normal.

 continue →
   skip remaining for-loop body →
   execute update expression →
   re-check condition →
   execute the iteration (if condition is true).

.
------------------------------------------------------------------------------


 WHILE LOOP
 ----------


           init
           while (condition)   <------------ 
           {                               |
              // if code here              | 
                                           |
               if (condition to break)     |
               {                           |
                                           |
                i++ // cont-related update |
                continue;   ---------------
               }

                // code B (this is skipped if continue runs)
                i++;      (or incrementing / decrementing by any number)
           }
        

 If the continue statement is executed, the code below it which is still inside the while-loop
 is ignored, and the controller jumps directly to the CONDITION check.

 continue →
   skip remaining while-loop body →
   re-check condition directly  →
    execute the iteration (if condition is true).


 ⚠️ IMPORTANT:
 The while-loop does NOT automatically update the loop variable.
 An update MUST be done manually before continue,

 as in:   i++;
          continue;      

 Otherwise an infinite loop will occur. [CHECK THE EXAMPLE BELOW]

------------------------------------------------------------------------------
 

  Example #1:

 Using for-loops, Print numbers from 1 to 5, skipping 3

 Output:
 1
 2
 4
 5

*/


int main()
{
    for (int i = 1; i <= 5; i++)  // i=1, i=2, i=3, i=4, i=5,
    {
        if (i == 3)
        {
            continue;
        }

        cout << i << endl; 
    }

    return 0;
}
//------------------------------------------------------------------------------------------------------


/*
 Example #2:
 Using While-loop, Print numbers from 1 to 5, skipping 3

Output:
1
2
4
5
*/

int main()
{
    int i = 1;                 // 1st line to write
    while (i <= 5)             // 2nd line to write
    {
        if (i == 3)
        {
            i++;          // continue-related update.            
            continue;     // an UPDATE must happen along with the continue statement; hence the update above it.
        }

        cout << i << endl;
        i++;                   // 3rd line to write
    }

    return 0;
}
/* Output:
  1
  2
  4
  5

*/