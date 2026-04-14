// 75-Break Statement.cpp :

#include <iostream>
using namespace std;

/*
   Break Statement

   - The break statement is used inside FOR or WHILE loops.
   - It immediately terminates the loop execution.
   - It improves performance by preventing unnecessary iterations.
   - Once executed, control exits the loop entirely.
*/


/************************ Syntax **********************
 
 FOR LOOP
 --------

           for (init; condition; update) 
           {
               // code (if any) before the break-check

               if (condition to break) 
               {
    -----------   break;     
    |          }
    |           
               // code (if any) after the break-check
    |       }
    |------------------->     Exit the for-loop & does NOT execute the remaining CODE.


------------------------------------------------------------------------------
 

 WHILE LOOP
 ----------


           int i =
           while (condition) 
           {
              // code (if any) before the break-check

               if (condition to break) 
               {
      -----------          break;   
      |        }
      |          
      |
      |       // code (if any) after the break-check
      |
      |      i++;        (or incrementing / decrementing by any number)
      |     }
      |------------------->     Exits the while-loop & does NOT execute the remaining CODE.


------------------------------------------------------------------------------

  Suppose a loop is designed to run 10,000 iterations.

   If the desired result is achieved on the 3rd iteration:
   - The break statement allows immediate loop termination.
   - The remaining 9,997 iterations are skipped.

   Without using break:
   - All remaining iterations would still execute.
   - This results in unnecessary processing and SLOWER PERFORMANCE.

   Therefore, using the break statement is a performance optimization technique

   Below are examples demonstrating how the break statement improves
   application performance.
          


*/

/* Write a While-Loop program that's meant to iterates 10 times. 
   Nevertheless, only print out the first 2 iterations.
*/

  
int main()
{
    int i = 1;                //1st line to write.
    while (i <= 10)           //2nd line to write.
    {
        if (i == 3)
        {
            break;
        }

        cout << i << endl;
        i++;                //3rd line to write. Without it, loop is endless.
    }



    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------



/* Write a for-loop program that's meant to iterates 10 times.
   Nevertheless, only print out the first 2 iterations.
*/


int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
        {
            break;
        }

        cout << i << endl;
    }

    return 0;
}





















