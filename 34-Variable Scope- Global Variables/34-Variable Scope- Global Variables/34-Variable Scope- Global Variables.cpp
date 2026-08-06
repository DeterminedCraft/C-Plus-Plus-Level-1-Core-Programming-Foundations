
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

   Examine the below code:
*/

// Defining a global variable — it can be read and/or modified by ANY function or procedure in the program.
int x = 300; // Program execution begins by initializing this global variable (memory is allocated and x is set to 300).
// After all global variables are initialized, execution continues in main().


void MyFunction1() // Remember: a procedure or function stays "asleep" (not executed) until it is called.
{
    int x = 500;

    cout << "The local value of x inside function is: " << x << endl; // 500
}

int main() 
{
    int x = 10;  

    cout << "The local value of x inside main is: " << x << endl; // 10
    MyFunction1();

    cout << "The Global Variable of x is: " << ::x << endl;  // 300
    
    ::x++; //Updates the value stored at the global variable's memory address. Remember, it is  ::x = ::x + 1;   
    cout << "The modified Global Variable of x is: " << ::x << endl;  // 301
    
    ::x = 7000; // Direct assignment overwrites the global variable's value again
    cout << "The modified Global Variable of x is: " << ::x << endl;  // 7000

    return 0;
}

/* ============================ IMPORTANT CONCEPTS & TERMINOLOGIES ============================

    ▬▬▬ VARIABLE LIFECYCLE ▬▬▬

     1. LOCAL VARIABLES

        A local variable is CREATED the moment the program enters the curly braces { } (the scope) where that variable is defined.
        This applies to any block of code enclosed by { }, including:

        - Functions
        - Procedures (i.e., functions that return void)
        - if statements
        - for loops
        - while loops
        - switch blocks
        - Any other anually created inner blocks

       For variables inside a function or procedure (including main()), this means:

            ✔ Created when the function/procedure begins executing

            ✔ Destroyed immediately when the function/procedure finishes executing

       “Destroyed” means:

         - The variable’s memory is released.
         - Its memory address becomes free and available for reuse.

       Each call to a function or procedure creates new, independent instances of its local variables—even if called repeatedly.


    2. GLOBAL VARIABLES
      - A global variable is created as soon as the program starts running.
        This occurs even *BEFORE main() begins execution*.
        Its value is stored in memory, assigned an identifier (the variable's name),
        and given a unique memory address (reference).

        
       - Its lifetime lasts for the entire duration of the program.
       - It is destroyed only when the whole program terminates.
       - Global variables live in a different memory region (usually the static storage area).


    ▬▬▬ SUMMARY ▬▬▬
        • Local variable → Exists only within its function’s scope; destroyed when function ends.
        • Global variable → Exists for the entire runtime of the program; destroyed at program exit.

============================================================================================== */





