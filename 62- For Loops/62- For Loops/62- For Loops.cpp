

#include <iostream>
using namespace std;

/* Suppose I have a line of code that I need to execute 10 time.
   then, will I have to type it 10 times ?  The answer is no.

  Suppose I have a line of code that I need to execute 1000 times.
   then, will I have to type it 1000 times ?  The answer is no.
  
  We can use "for-loops". It is one of the most fundamental aspects in programming.
 It reduces the lines of code required to write.

  The first repetition (iteration) statements in programming, we're going to use, is:
  - For loops.


  
 Syntax:

   for (initialization; condition; update)
   {
     // for-loop body:       ⇐ ⇐ ⇐  The body of the for loop is executed repeatedly
                                    for each iteration of the loop.
   }
 


  
 How it works (for loop flow):

               ┌──────────────────────────┐
               │ Initialization Expression│
               └─────────────┬────────────┘
                             ↓
                     ┌─────────────────┐   False
  -----------------→ │  Test Condition │ --------
  │                  └─────────┬───────┘         │
  │                            │ True            │
  │                            ↓                 │
  │                 ┌──────────────────┐         │
  │                 │ Execute Loop Body│         │
  │                 └─────────┬────────┘         │
  │                           ↓                  │
  │                 ┌──────────────────┐         │
  │                 │ Update Expression│         │
  ------------------│                  │
                    └──────────────────┘         │
                                                 ↓ Exit Loop

  
  
  
  
  Example 1:

  for (int i = 0; i <= 4; i++)     // i=0, i=1, i=2, i=3, i=4   It executes 5 times (i=0 is one time, i=1 is the second time, etc.)
  {
         cout << i << endl;
  }
  
  The mechanism:

 - i = 0 → does it meet the condition (i <= 4)?
   Yes → execute the loop body.
   Then update i by incrementing it by 1.

 - i = 1 → does it meet the condition (i <= 4)?
   Yes → execute the loop body.
   Then update i by incrementing it by 1.

 - i = 2 → does it meet the condition (i <= 4)?
   Yes → execute the loop body.
   Then update i by incrementing it by 1.

 - i = 3 → does it meet the condition (i <= 4)?
   Yes → execute the loop body.
   Then update i by incrementing it by 1.

 - i = 4 → does it meet the condition (i <= 4)?
   Yes → execute the loop body.
   Then update i by incrementing it by 1.

 - i = 5 → does it meet the condition (i <= 4)?
   No → the for-loop is exited.



   Output:

   0
   1
   2
   3
   4
 ------------------------------------------------------------------------------------------------------

 Example 2:

  for (int i = 0; i <= 5; i++)     // i=0, i=1, i=2, i=3, i=4, i=5  (The body of for-loop is executed 6 times)
  {
         cout << "Mohammad" << endl;
  }

  output:

  Mohammad
  Mohammad
  Mohammad
  Mohammad
  Mohammad
  Mohammad
 ------------------------------------------------------------------------------------------------------

 Example 3:
 
 for (int i = 0; i <= 100; i++)     // i=0, i=1, i=2, ......, i=100  The for-loop body is executed 101 times
  {
         cout << "Sob7an Allah" << i << endl;   // we also seize the opportunity by including i in the line so that each iteration has a unique value of i.
  }



  output:

  Sob7an Allah0
  Sob7an Allah1
  Sob7an Allah2
  Sob7an Allah3
  .
  .
  .
  Sob7an Allah100
 ------------------------------------------------------------------------------------------------------

 Example 4:

 for (int i = 5; i >=0 ; i--)     // i=5, i=4, i=3, i=2, i=1, i=0  The for-loop body is executed 6 times
     {
       cout << i << endl;
     }

 
 output:

 5
 4
 3
 2
 1
 0
 ------------------------------------------------------------------------------------------------------

   Example 5:

 for (int i = 1; i <= 10 ; i+= 2)     // i=1, i=3, i=5, i=7, i=9  The for-loop body is executed 5 times.
     {
       cout << i << endl;
     }
 

 output:

 1
 3
 5
 7
 9
 ------------------------------------------------------------------------------------------------------
   Example 6:

 for (int i = 0; i <= 10 ; i+= 2)     // i=0, i=2, i=4, i=6, i=8, i=10   The for-loop body is executed 6 times.
     {
       cout << i << endl;
     }


 output:

 0
 2
 4
 6
 8
 10
 ------------------------------------------------------------------------------------------------------

*/
       
//int main()
//{
//
//    for (int i = 0; i <= 4; i++)     // i=0, i=1, i=2, i=3, i=4   It executes 5 times (i=0 is one time, i=1 is the second time, etc.)
//    {
//        cout << i << endl;
//    }
//    return 0;
//}



//int main()
//{
//
//    for (int i = 0; i <= 5; i++)     // i=0, i=1, i=2, i=3, i=4, i=5  (The body of for-loop is executed 6 times)
//    {
//        cout << "Mohammad" << endl;
//    }
//
//    return 0;
//}

//int main()
//{
//    for (int i = 0; i <= 100; i++)     // i=0, i=1, i=2, ......, i=100  The for-loop body is executed 101 times
//    {
//        cout << "Sob7an Allah" << i << endl;   // we also seize the opportunity by including i in the line so that each iteration has a unique value of i.
//    }
//
//    return 0;
//}

//int main()
//{
//    for (int i = 5; i >= 0; i--)     // i=5, i=4, i=3, i=2, i=1, i=0  The for-loop body is executed 6 times
//    {
//        cout << i << endl;
//    }
//
//    return 0;
//}
   
//// **** Printing odd numbers
//int main()
//{
//    for (int i = 1; i <= 10; i+=2)     // i=1, i=3, i=5, i=7, i=9  The for-loop body is executed 5 times.
//    {
//        cout << i << endl;
//    }
//
//    return 0;
//}


//// **** Printing înteger numbers
//int main()
//{
//    for (int i = 0; i <= 10; i+=2) // i=0, i=2, i=4, i=6, i=8, i=10  the body wille execute 6 times
//    {
//        cout << i << endl;
//    }
//
//    return 0;
//}

//int main()
//{
//    for (int i = 5; i >= 1; i--)  // i=5, i=4, i=3, i=2, i=1    the body will execute 5 times
//    {
//        cout << i << endl;
//    }
//
//    return 0;
//}


/* Important:
   
   For-loops are USUALLY used when ranges are clear / I know how many times I need to re-execute the body.

*/









