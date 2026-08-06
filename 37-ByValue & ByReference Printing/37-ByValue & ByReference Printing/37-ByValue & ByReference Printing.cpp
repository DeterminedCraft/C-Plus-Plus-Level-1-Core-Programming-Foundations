#include <iostream>
using namespace std;

/*
  "When we say 'Passing a parameter by value' or 'Passing a parameter by reference'...

   Why are they called 'By Value' and 'By Reference'?

   Well, examine the simple code below:
*/

int main()
{
    int Num1 = 1000;

    cout << Num1 << endl;    // 1000
    cout << &Num1 << endl;   // 0x000000893E6FF6E4 (changes each run)
}

/*
    From the output above, the naming becomes obvious:

    ✔ cout << Num1;
        → Prints the VALUE stored inside Num1 (1000)

    ✔ cout << &Num1;
        → Prints the REFERENCE (memory address) of Num1
           Example: 0x000000893E6FF6E4

    In C++ terminology:
        • "By VALUE"     → The function receives only the value (a copy)
        • "By REFERENCE" → The function receives the real memory address (a reference)
*/

/*
   Important Note:
   ----------------
   The printed memory address will normally change each time you run the program.

   Why?
   Because Num1 is a local variable, and its lifecycle is:

       ✔ Created when main() begins executing
       ✔ Destroyed when main() ends

   When Num1 is created, C++ assigns it a free memory cell.
   That cell’s address is what cout << &Num1 prints.

   After the program finishes, that memory is released.
   On the next run, Num1 is created again—most likely in a different memory
   cell—resulting in a different hexadecimal address.
*/