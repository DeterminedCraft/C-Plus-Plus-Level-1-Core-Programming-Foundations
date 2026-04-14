#include <iostream>
using namespace std;

/*
                              Mental Model: Initializing Variables Declared in main()
                                                   

 This mental model is not final and represents an early stage of explanation.
 As we progress, the concepts will be rebuilt from first principles.
 This becomes clear when revisiting the repository for a second time.

 If you are a beginner, it is essential to go through these notes, as programming concepts build progressively on one another.
 If you are revisiting, you can skip this file entirely and continue forward.
 --------------------------------------------------------------------------------------------------------------------------------------------------

 In programming, variables are typically initialized in two main ways:

 1) Direct Initialization (Direct initialization means the variable is created and assigned a value at the same moment.)

 Mental Model:
*/

int main()
{
    float Number1 = 3.8;
    float Number2 = 9;

    // Common sense:
    // These variables belong to main().
    // Their scope is ONLY inside main().
    // They can be used:
    //   - for calculations inside main
    //   - as arguments to a function or procedure
}

/*
 2) Initialization via User Input (Correct Model)
    Here, variables are declared in main() but MUST BE initialized through a dedicated input procedure فَرِّق تَسُد
*/

void UserInput(float& Num1, float& Num2)
{
    cout << "Enter the First Number:\n";
    cin >> Num1;

    cout << "Enter the Second Number:\n";
    cin >> Num2;

    // Because parameters are passed BY REFERENCE:
    // Num1 and Num2 here refer to the variables that live in main().
}

int main()
{
    float Num1, Num2;

    UserInput(Num1, Num2);

    // Now Num1 and Num2 have been initialized by the user input values and can be used:
    //  - for calculations
    //  - for further function calls
}

/*
  ✔ Key Points

  - Variables are declared in main() but initialized inside UserInput().
  - Passing parameters by reference (&) ensures that:
       - No new variables are created in UserInput().
       - The variables inside main() receive the user’s input.
  - The procedure performs exactly one job: reading input.


  ❌ ❌ Wrong Mental Model (Beginner Pitfall) ❌ ❌
  Beginners often write this:
*/

void UserInput()
{
    float Num1, Num2;  // Local to the procedure ONLY.

    cout << "Enter the First Number:\n";
    cin >> Num1;

    cout << "Enter the Second Number:\n";
    cin >> Num2;
}

int main()
{
    UserInput();   // DOES NOT initialize Num1 or Num2 in main() 
}

/*
 Why This is WRONG

 - Num1 and Num2 inside UserInput() are local variables.
 - Their lifetime begins and ends inside that procedure.
 - main() never receives these values.
 - You cannot continue working with these numbers in main() after UserInput() execution ends.

 What This Leads To

 ✔ Violates Single Responsibility Principle
 Because beginners then try to:

 - print inside the same procedure
 - do calculations inside it
 - continue logic inside it

 …thus turning it into a monster function that “does everything.” /creates unmaintainable “God function”.

 ✔ Misunderstanding of variable scope
 They think “calling the procedure” magically makes the variables accessible in main(), which is not true.


 -------------------------------------------------------------

 ⭐ Crucial Rule of Proper Procedure Design
 A procedure (void function):

 ✔ Does ONE THING only.
 Examples of acceptable “one thing”:

 - A procedure that ONLY reads input
   (it may have multiple cin >> statements, but nothing else)
 - A procedure that ONLY prints output
   (multiple cout << lines allowed, but nothing else)

 ❌ ❌ ❌ ❌ ❌ ❌ Not Acceptable:

 - Input + calculation
 - Input + printing
 - Calculations + Printing
 - Printing + processing
 - Input + validation + processing
 - Anything that mixes responsibilities

 That breaks mental clarity and best-practice architecture.
 Keeping each procedure focused makes your program predictable, testable, and easy to extend.

 ------------------------------------------------------------------

 ⭐ Final Core Message:

  Variables declared in main() must be initialized in a way that ensures their values remain inside main()’s scope,
  not inside any other set of curly braces. Variables can be initialized either directly at the point of declaration in main(),
  or indirectly through user input using a dedicated input procedure.

  When using an input procedure, variables must be passed by reference so that the initialization modifies the actual variables that live in main(),
  not temporary variables in a local scope.

  Any input or printing procedure does ONE job only — no calculations, no extra logic — preserving the Single
  Responsibility Principle and setting the foundation for clean and maintainable program architecture.

 -------**********************************************************************************----------------------------
                                         Extremly Important Note:
 -------**********************************************************************************----------------------------
  
  // So when do you use a by reference ?

    // *1-  Updating the values of the original variables declared in main()
    //      [Not a standard practice unless NEEDED in special scenarios.
    //       Example: Swapping two numbers].

    // *2-  A MUST - Initializing the original variables declared in main() via user input.

// If you want to display the values of the initialized variables in main,
// create a procedure (which is something we know), & pass parameters by const ref. (instead of creating new variables whose scope is the procedure
// just so that you display them !)
// BUT
// refrain from doing so ! as the standards dictate the pass by -ref is to be used for ONLY either 1 or 2.

*/
