

#include <iostream>
using namespace std;

/* Nested for-loops: meaning for-loops inside each other.
   As you remember, the syntax has been:


   for (initialization; condition; update)
   {
      // body
   }
   
   so the body of the for-loop could be any line(s) of code no matter what they are.
   Therefore, one could also place another for-loop inside.
   so that we have:


    for (initialization; condition; update)
   {
       for (initialization; condition; update)
          {
              // body
          }
   }



   How it works:



    for (int i = 0; i < 10; i++)     // i=0, i=1, i=2, i=3, i=4, i=5, i=6, i=7, i=8, i=9
    {
       for (int j = 0; j < 8; j++)  // j=0, j=1, j=2, j=3, j=4, j=5, j=6, j=7
          {
              cout << "Ahmad El-Aina";
          }
   }

   // For every SINGLE iteration of the OUTER loop,
  //  cout << "Ahmad El-Aina";   is executed 8 times  ( = "Ahmad El-Aina" is printed 8 times).

  // meaning:

  // For i=0 in the outer for-loop:
  // The inner for-loop body will be executed for j=0, then again for j=1, then again for j=2, then again for j=3, .......then again for j=7.

  // so [cout << "Ahmad El-Aina";] will be executed 80 times =  "Ahmad El-Aina" will be printed 10 * 8 = 80 times
   
   We could also place a third nested for-loop (let us say of 10 iterations) so that it is 10 * 8 * 10
   
   But all of this according to logic and what is needed or how you'd think about it.

   Let us see a few examples:


*/

//// Predict the outcome.
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "i = " << i << endl;

        for (int j = 1; j <= 10; j++)
        {
            cout << i << "*" << j << " = " << i * j << endl; // fixed i value with the varying j on each single nested iteration.
        }
        cout << "--------------------------\n";
    }

    return 0;
    // ** for every outerloop iteration, we took advantage of the associated i value to multiply it with each value of j=1 through j=10
    // so this is the program for the multiplication table !
    // Every single time the inner loop finishes its iterations, a straight line is printed out.
}

/*Output:
   i = 1
1*1 = 1
1*2 = 2
1*3 = 3
1*4 = 4
1*5 = 5
1*6 = 6
1*7 = 7
1*8 = 8
1*9 = 9
1*10 = 10
--------------------------
i = 2
2*1 = 2
2*2 = 4
2*3 = 6
2*4 = 8
2*5 = 10
2*6 = 12
2*7 = 14
2*8 = 16
2*9 = 18
2*10 = 20
--------------------------
i = 3
3*1 = 3
3*2 = 6
3*3 = 9
3*4 = 12
3*5 = 15
3*6 = 18
3*7 = 21
3*8 = 24
3*9 = 27
3*10 = 30
--------------------------
i = 4
4*1 = 4
4*2 = 8
4*3 = 12
4*4 = 16
4*5 = 20
4*6 = 24
4*7 = 28
4*8 = 32
4*9 = 36
4*10 = 40
--------------------------
i = 5
5*1 = 5
5*2 = 10
5*3 = 15
5*4 = 20
5*5 = 25
5*6 = 30
5*7 = 35
5*8 = 40
5*9 = 45
5*10 = 50
--------------------------
i = 6
6*1 = 6
6*2 = 12
6*3 = 18
6*4 = 24
6*5 = 30
6*6 = 36
6*7 = 42
6*8 = 48
6*9 = 54
6*10 = 60
--------------------------
i = 7
7*1 = 7
7*2 = 14
7*3 = 21
7*4 = 28
7*5 = 35
7*6 = 42
7*7 = 49
7*8 = 56
7*9 = 63
7*10 = 70
--------------------------
i = 8
8*1 = 8
8*2 = 16
8*3 = 24
8*4 = 32
8*5 = 40
8*6 = 48
8*7 = 56
8*8 = 64
8*9 = 72
8*10 = 80
--------------------------
i = 9
9*1 = 9
9*2 = 18
9*3 = 27
9*4 = 36
9*5 = 45
9*6 = 54
9*7 = 63
9*8 = 72
9*9 = 81
9*10 = 90
--------------------------
i = 10
10*1 = 10
10*2 = 20
10*3 = 30
10*4 = 40
10*5 = 50
10*6 = 60
10*7 = 70
10*8 = 80
10*9 = 90
10*10 = 100
--------------------------

*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Predict the outcome
int main()
{

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;

     /* Tip:
      
      // For every SINGLE iteration of the OUTER loop,
      //   cout << "*";   is executed 8 times  ( = * is printed 8 times).

      // meaning:

      // For i=1 in the outer for-loop:
      // The inner for-loop body will be executed for j=1, then again for j=2, then again for j=3, then again for j=4, .......then again for j=8.
      // and then  cout << endl;  is executed so that cursor jumps to the next line, 

      // ,where  For i=2 in the outer for-loop
      // The inner for-loop body will be executed for j=1, then again for j=2, then again for j=3, then again for j=4, .......then again for j=8.
      // and then  cout << endl;  is executed so that cursor jumps to the next line

      // so [cout << "*";] will be executed 80 times =  "*" will be printed 10 * 8 = 80 times

     */

   
    /* output:
       
          ********  // This row is the result of:  for i=1, where [cout << "*";] is executed 8 times (for j=1, j=2,..j=8) then controller exits the inner loop printing endl;
          ********  // This single row is the result of:  for i=2, where [cout << "*";] is executed 8 times (for j=1, j=2,...j=8). // // // // etc.
          ********  // and so on.
          ********
          ********
          ********
          ********
          ********
          ********
          ********
    

      Outer loop = how many lines (rows)
      ✔ The total number of rows represents ALL iterations of the outer loop.
         Therefore, by looking at the output, the OUTER for-loop could be
         reverse engineered ➡  for (int i = 1; i <= 10; i++)      

      Inner loop = how many characters per line.
      ✔ The total number of characters represents ALL inner loop iterations.
       Therefore, by looking at the output, the INNER for-loop could be
        reverse engineered ➡  for (int i = 1; i <= 8; i++)

      A source of confusion for many:
      Inner loops are not to be associated with "columns",
      as "columns" here is often misunderstood as a fixed number of columns,
      instead of the fact that the inner loop represents
      the number of columns per row.

      Here, saying “inner loop = columns” without context becomes misleading.

    */
    
//} ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Now the condition for the nested for-loop does NOT have to be fixed as it can be i dependant:
int main()
{

    for (int i = 1; i <= 10; i++)   // i=1, i=2, i=3, i=4, i=5, i=6, i=7, i=8, i=9, i=10
    {
        for (int j = 1; j <= i; j++)    // for outer i=1:   j=1 
        {                              //  for outer i=2:   j=1, j=2
            cout << "*";              //   for outer i=3:   j=1, j=2, j=3   and so on.
        }
        cout << endl;
    }
}

/* Explanation: 

 for i = 1, 
 a star is printed one time, followed by the cursor jumping on the next line.

 for i = 2,
 a star is printed two times on the new line, followed by the cursor jumping on the next line.

 for i = 3,
 a star is printed 3 times on the new line, followed by the cursor jumping on the next line.

 and so on till eventually, 10 stars are printed out on the last line.

 Therefore, a right-angle triangle is formed.

 // so the ranges of the inner for-loop can be dependant on the outer for-loop.



 Output:

 *
 **
 ***
 ****
 *****
 ******
 *******
 ********
 *********
 **********

*/




 