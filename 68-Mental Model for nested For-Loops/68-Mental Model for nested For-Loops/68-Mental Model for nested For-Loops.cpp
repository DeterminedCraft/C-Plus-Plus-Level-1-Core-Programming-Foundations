
#include <iostream>
using namespace std;

// 68-Mental Model for nested For-Loops

 
/***************************************************************************
  Mental model for nested for-loops:

  As soon as you see:

      for (initialization; condition; update)
      {
          for (initialization; condition; update)
          {
              // body
          }
      }

  There are only TWO possible behaviors to reason about: 
   A) FIXED & INDEPENDENT inner loop.
   B) DEPENDENT inner loop.


  A) FIXED & INDEPENDENT inner loop
  --------------------------------
  The inner loop runs a FIXED number of times,
  INDEPENDENT of the outer loop variable.

  Example:
      for (int i = 1; i <= 10; i++)
      {
          for (int j = 1; j <= 8; j++)
          {
              // body
          }
      }

  - For i = 1 → body executes 8 times
  - For i = 2 → body executes 8 times
  - For i = 3 → body executes 8 times
  - ...

  Outcome:
  - The output is uniform and rectangular
  - Each outer iteration produces the same amount of work
  - Total executions = 10 × 8 = 80

  Rule:
      For every iteration of the outer loop,
      the body executes the SAME number of times.

  --------------------------------

  B) DEPENDENT inner loop
  --------------------------------
  The number of inner loop executions DEPENDS
  on the outer loop variable.

  Example:
      for (int i = 1; i <= 10; i++)
      {
          for (int j = 1; j <= i; j++)
          {
              // body
          }
      }

  The value of each i equals the total number of inner iterations:
  - For i = 1 → body executes 1 time
  - For i = 2 → body executes 2 times
  - For i = 3 → body executes 3 times
  - ...


  Outcome:
  - The output grows progressively
  - Each outer iteration produces more work than the previous one
  - Common shapes: triangle, staircase, pyramid
  - Total executions increase non-linearly (1 + 2 + 3 + ...)

  Rule:
      For every iteration i of the outer loop,
      the body executes i times.

  --------------------------------

  Mental Shortcut:
  If inner condition is constant → fixed work → rectangular output
  If inner condition depends on i → growing work → progressive output
  ===============================
  */


 /*
     A)         B)            C)
     ****       1 2 3 4       *
     ****       1 2 3         * *
     ****       1 2           * * *
     ****       1


  Mental Model (Nested for-loops):

  1) The number of horizontal lines (rows), regardless of their content,
     equals the TOTAL number of iterations of the OUTER for-loop.

     For A: you start from 1 to 4 ?  or 4 to 1 ? 
            So the outer for-loop for A is:   for (int i = 1; i <= 4; i++)

     For B: you start from 1 to 4 ? or 4 to 1 ?  Answer: 4 to 1 as the output grows / de-grows progressively.
            So the outer for-loop for B is:   for (int i = 4; i >= 1; i--)

     For C: you start from 1 to 3 ? or 3 to 1 ? 
            So the outer for-loop for C is:    for (int i = 1; i <= 3; i++)



  2) Within each horizontal line (row),
     each single printed element ( *, number, or symbol )
     is the RESULT of ONE iteration of the INNER for-loop.
 
    start by asking if the inner-loop independant or dependant ?

    For A: It's independent as the output is uniform & rectangular
           So the inner for-loop for A is: for (int j = 1; j <=4; j++)
    
    For B: It's dependant as the output de-grows progressively.
           So the inner for-loop for B is: for (int j = 1; j <=i; j++)

    For C: It's dependant as the output grows progressively ?
           So the inner for-loop for C is: for (int j = 1; j <=i; j++)
 
 */


 /*  Added on Jan12th 
 ====================================================
  MY MENTAL FORMULA FOR SOLVING NESTED FOR-LOOP PATTERNS
 ====================================================

  Given an output pattern (A, B, C), I reason as follows:

  ----------------------------------------------------
  A)
  1
  12
  123
  1234
  12345
  123456
  1234567
  12345678

  Analysis:
  A- Total number of rows = 8
  B- Each row’s content is INCREASING
  - Therefore, the inner loop is DEPENDENT on the outer loop variable (i)

  Conclusion:
  - The outer for-loop starts from i = 1 (so that inner for-loop starts with a total iterations of 1 ) and increments up to 8 (simply becasue of B)
  - The inner for-loop runs from 1 up to i

  Code structure:
  // for the outer loop, do I start from i=1 or i=10 ? ➡️ Answer: start from i=1 since first line has a content of 1 item.
  for (int i = 1; i <= 8; i++)
  {   
      // FOR i=1, the inner for-loop has to have total number of iterations that = i = 1. 
      // So design the inner-for loop on this basis:

      for (int j = 1; j <= i; j++)   // always mentally trace for at least the first two iterations
      {
          // print content
      }
  }

  ----------------------------------------------------
  B)
  12345678
  1234567
  123456
  12345
  1234
  123
  12
  1

  Analysis:
  A- Total number of rows = 8
  B- Each row’s content is SHRINKING (simply because of B)
  - The inner loop is still DEPENDENT on the outer loop variable (i)

  Conclusion:
  - The outer for-loop starts from i = 8 ( so that for the first time, the inner for-loop has total iterations of 1) and decrements down to 1
  - The inner for-loop runs from 1 up to i

  Code structure:
  for (int i = 8; i >= 1; i--)
  {
      // FOR i=8, the inner for-loop has to have total number of iterations that = i = 8. So the inner-for loop is desinged based on that:

      for (int j = 1; j <= i; j++)     // always mentally trace for at least the first two iterations
      {
          // print content
      }
  }

  ----------------------------------------------------
  C)
  ****
  ****
  ****

  Analysis:
  - Total number of rows = 3
  - Each row’s content is FIXED (constant length)
  - Therefore, the inner loop is INDEPENDENT of the outer loop variable

  Conclusion:
  - The outer for-loop runs exactly 3 times
  - The inner for-loop runs a fixed number of times (e.g., 4)

  Code structure:
  for (int i = 1; i <= 3; i++)
  {
      for (int j = 1; j <= 4; j++)  // always mentally trace for at least the first two iterations
      {
          // print content
      }
  }

  ----------------------------------------------------

  Summary Rule:
  -------------
  1) The outer for-loop always controls the number of rows.
  2) If row content changes, the inner loop depends on i.
  3) If row content is fixed, the inner loop is independent.
  4) Increasing or decreasing patterns are controlled ONLY by
     the direction of the outer loop.

  ====================================================

 /*
  EXTRA RULE (COMPLETES THE MODEL):

  After determining:
  - the number of rows (outer loop),
  - whether the inner loop is dependent or independent,

  you must then adjust:
  - the START value of the inner loop,
  - the END condition of the inner loop,
  - and WHAT is printed (j, i, a constant, or an expression),

  so that the produced content matches the required output.

  In other words:
  Loop structure defines the SHAPE.
  Printed expression and bounds define the APPEARANCE.
  */

 




