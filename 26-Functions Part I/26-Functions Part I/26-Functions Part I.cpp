#include <iostream>
using namespace std;


/*  Before delving into the subject, here is an intrinsic pre-requisite:

    Programming Paradigms:

    There are 2 main types of programming:

    1- Procedural (Functional) Programming:
       - Relies on functions and procedures.
       - The program is built step-by-step (top-down).
       - Data is separate from the functions that operate on it.

    2- Object-Oriented Programming (OOP):
       - Relies on classes and objects.
       - An object bundles data (attributes) and behaviors (methods) together.
       - Promotes abstraction, encapsulation, inheritance, and polymorphism.
*/



/*

✅ What is a Function?

   A function is a block of code (written outside the main statement)
   that performs a single specific action and only runs when it is called.

   ✔️✔️✔️ Key Characteristics ✔️✔️✔️

   1- It only executes when called.
      (The code inside a function does NOT run automatically.)

   2- It may take arguments (parameters), or it may take none.
      Arguments allow you to pass data into the function.

   3- It performs exactly one action (one responsibility).
      A well-designed function should do one thing only,
      clearly and correctly.

   4- It promotes code reusability.
      Instead of re-writing the same lines of code many times,
      you write the logic once and call the function whenever needed.

   6- IMPORTANT:  A procedure is a function that does NOT return a value (its return type is void),


   Examples:
   ---------
   The Math functions we have used—such as round(), ceil(), floor(), sqrt()—
   are part of the <cmath> library.

   Hint:
       To use these functions, include the header:
       #include <cmath>

   Note:
   -----
   This library, along with many others, is automatically included with
   the C++ compiler when you install the Visual Studio IDE.

   so these functions that belong to the <cmath> library,
   exist *outside* of the main() function (off course ! duh!).


   As for our own functions that we are going to write,
   they will also be *outside*  the main() statement,
   BUT still *INSIDE* the same C++ source file.
*/


/* so let us see an example:

*/

void MyFunction() // A procedure (rather than a function) because it doesn't return a value as its return type is void.
{
    cout << "This is my first function, it got executed." << endl;
}

void MyFunction2() // one can create as many procedures and functions as needed.
{
    cout << "This is my second function" << endl;

}
int main() // where the execution begins
{
    MyFunction(); // Just type its name (becasue it is a procedure)

    // Now notice: If I comment out the above line, 
    // then the procedure (or function) will not ne executed (= The line(s) of code inside the procedure (or function)
    // won't be executed).
    // This is simply becasue a procedure or a function is only executed when called.
    // When it's not called, it's 'sleeping'.

    // Just how we were calling the built-in round(), floor(), ceil(), etc. functions,
    // in here we are calling the procedure named 'MyFunction' that we created ourselves.

    // We can also call it, inside the main() statement, as many times as we wish or needed.

    MyFunction2();

    return 0;
}


/* So functions make writing programs easier.
   and it partitions my program; where each single part could be inspected seperately.
   This renders our code, no matter how big it is, like a lego.

   Also, the rules for naming procedures and functions are the same as those for variables.
*/


/*
    In C++ and most programming languages, and especially when following
    good programming practices:

    * A procedure (void function) can contain printing statements inside it.
      This is acceptable because a procedure performs actions and does not
      return a value.

    * A function, however, should NOT contain any printing statements.
      A well-designed function should FOCUS solely on computing and returning
      exactly ONE specific value — and nothing else.

      Any printing or output related to the returned value should be done
      in main(), or wherever the function is called, rather than inside
      the function itself. Otherwise, the function is not reusable.

    This separation keeps the code clean, reusable, and easy to maintain.
*/
