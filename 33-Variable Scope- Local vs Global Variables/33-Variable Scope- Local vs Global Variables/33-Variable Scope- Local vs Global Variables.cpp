#include <iostream>
using namespace std;

/*
        Variable Scope — Local vs Global Variables

    // Local Variables = Declared inside ANY block { }.
    //                   So their scope is LIMITED to that specific block { }.
    //                   Their lifetime begins when the program ENTERS that block
    //                   and ends when the program EXITS that block.

    // Global Variables = Declared OUTSIDE of all functions and procedures.
    //                    So their scope is the ENTIRE program.
    //                    Their lifetime begins as soon as the program starts executing,
    //                    so they are assigned space in memory before main() runs,
    //                    and their lifetime ends only when the entire program finishes executing.

    Let's begin by examining the following code:
*/

void MyFunction1() // Remember: a Procedure or Function stays 'asleep' (not executed) until it is called.
{
    int x = 500;
    // This 'x' exists ONLY inside the curly braces of MyFunction1().
    // It is a LOCAL variable of this procedure.

    cout << "The value of x inside function is: " << x << endl;
}

int main() // Execution begins here.
{
    int x = 10;
    // This 'x' exists ONLY inside main().
    // It has NOTHING to do with the x inside MyFunction1().
    // It is a LOCAL variable of this function.

    cout << "The local value of x inside main is: " << x << endl;

    MyFunction1();

    return 0;
}

/*
    IMPORTANT NOTES ABOUT VARIABLES IN MEMORY:

   Each and every variable created in memory has 3 properties:
    1. A Name (identifier)        (such as x)
    2. A Value                    (such as 85)
    3. A UNIQUE Memory Address    (a reference in Hex, such as 0x00007ffe...)

 Plus, each variable exists within its own UNIQUE scope.


    Because variables have **scope**, C++ allows you to create more than
    one variable with the exact same name — AS LONG AS they exist in
    different scopes, where each variable will have a COMPLETELY UNIQUE memory address.

    Example:
        - x in main()   → has its own reference (memory address). 
        - x in MyFunction1() → has its own refrence (memory address).

    Even though they share the same NAME ("x"), they are treated as
    completely separate variables in memory.

    Scope determines:
       ✔ Where a variable can be accessed
       ✔ When it is created  (lifetime begins)
       ✔ When it is destroyed  (lifetime ends)

*/

/*    
                            🧠 Memory-Level Understanding

    When the program runs:

    main() starts → C++ allocates memory for x = 10

    Then MyFunction1() is called → C++ allocates a new x = 500

    Each x has:

  -------------------------------------------------------------------------------
  |     UNIQUE Scope     | Variable Name |  Value  | UNIQUE Memory Address (Hex)|
  |-----------------------------------------------------------------------------|       
  | main()               |      x        |   10    |   0x7ff...                 |
  | MyFunction1()        |      x        |  500    |   0x7ff...                 |
  ------------------------------------------------------------------------------|

    

*/