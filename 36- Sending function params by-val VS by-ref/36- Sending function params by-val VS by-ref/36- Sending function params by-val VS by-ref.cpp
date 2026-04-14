#include <iostream>
using namespace std;

/* When sending parameters to a function or a procedure, 
*  they're sent either by value or by reference
*  and there is a huge difference between these two.
    

    Examine this cut-out part of some code:
*/

//// Examine this cut-out part of some code:
int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function became = " << Num1 << endl;

    return 0;

}
/*    ⭐ Conclusion to draw from this code:
         We can already predict the output before seeing the rest of the code.

      ✅ Case 1 — Parameter passed by value
      If Num1 is passed by value, then:

           -A new variable (also named Num1) is created inside the function’s or procedure's scope.
           -This new variable receives a copy of the value 1000.
           -Any modification inside the function or procedure affects only the copied variable, not the one inside main().

       Therefore:

      ✔ 1000 will be printed,
      because the original Num1 inside main() remains unchanged.
  
      ✅ Case 2 — Parameter passed by reference
      If Num1 is passed by reference, then:

           -No new variable is created inside the function or procedure.
           -The function or procedure receives a reference (an alias) to the same Num1 that belongs to the scope of main().
           -Any change inside the function or procedure directly modifies the original Num1.

      Therefore:

      ✔ Any number other than 1000 will be printed,
      if the function modifies the parameter.
*/
   
/*
       *********************************  🎯 Perfect Summary (Expanded)   *********************************

        Pass-by-value:

        → A copy is created
        → The original variable is untouched
        → Prints 1000

        ✔ This is the REGULAR and common practice in programming.
        Most functions and procedures work on copies because it is safer and prevents accidental modification of variables created in main() (or any caller).

        ✅ Pass-by-reference (C++):
         Use pass-by-reference when you want the function or procedure to modify the original variable that belongs to main() (or the caller).
         . Since the parameter is passed by reference, any change inside the function or procedure directly affects the same memory location, 
         meaning the variable in main() will be updated. 

         In pass-by-reference:

         - No new variable is created inside the function or procedure.
         - The parameter becomes an alias to the original variable.
         - Therefore, the function or procedure does not receive a copy of the value (e.g., it does not create a new Num1 that holds its own copy of 1000).
         - All modifications apply directly to the variable in main().

            ⚠ This is not the regular practice.
        It must be used carefully, because the function or procedure can directly change the variables created in main().
        We only use pass-by-reference in specific scenarios, such as:

           - When we intentionally want to modify the caller’s variable (e.g., swapping numbers, updating fields, accumulating results).
           - When returning multiple outputs
           - When we want to avoid copying large data structures for performance reasons  as passing by value would:

             - create a new memory copy
             - waste time and memory
             - limit the changes to the function or procedure scope only.

           - When writing procedures that perform in-place updates

          *** Examples for passing by reference:
          
          1️⃣ Initializing variables in main() via user input.

          For initializing data declared in main(), we must pass by reference.
          Otherwise, the scope of the initialized variables is outside main(), 
          and main() would still contain uninitialized values,
          making it impossible to continue correct execution.


         2️⃣ Printing operations

         For prining data already initialized in main(), passing by value is unnecessary
         and inefficient.

         Instead, we pass by const reference: (Not just by reference)
         - to avoid creating a new memory copy just for printing.
         - to prevent accidental modification, even if only printing is done.

         NOTE: For printing, passing by reference and not by constant reference is wrong (by design, not by behavior):
         because passing by reference only, implies mutation.


         3️⃣ Validation / comparison procedures (if / if-else / logical checks)

         For performing comparisons or decision-making logic (such as validation using conditional statements),
         we also pass by const reference (Not just by reference).

         because passing by reference only, implies mutation.

          - to avoid creating a new memory copy just for printing.
          - to prevent accidental modification, even if only printing is done.

 ******************************************************************************************************************************************************************
*/

// A- Now, let's look at the entire code & predict the outcome:

void MyFunction(int Num1) 
{
    Num1 = 7000;

    cout << "Number inside this procedure = " << Num1 << endl;

}


int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function = " << Num1 << endl;

    return 0;
}

/*
    When the controller executes the line:  MyFunction(Num1);
    this means that MyFunction(Num1) is being called.

    The value 1000 is passed to the parameter "int Num1" inside MyFunction().
    Since the parameter is passed BY VALUE:

        ✔ A new variable with the EXACT same name "Num1" is created
          inside the scope of MyFunction().

        ✔ This new variable receives a COPY of the value 1000.

        ✔ The original Num1 inside main() remains completely and
          absolutely unaffected.

    Inside MyFunction(), this copied value (1000) is then overwritten
    and changed to 7000.

    Therefore, the output becomes:

        Number inside this procedure = 7000
        Number after calling the function = 1000
*/
//*******************************************************************************************************************************************************
// B- Now, let's look at another version of this entire code & predict the outcome:

void MyFunction(int &Num1) // '&' makes Num1 (in '&Num1') a reference — an alias to the original variable in main().
{                          // *** Also meaning No new Num1 is created in the scope of this procedure — any change here modifies the same variable in main().
    Num1 = 7000;

    cout << "Number inside this procedure = " << endl;

}


int main()
{
    int Num1;

    Num1 = 1000;

    MyFunction(Num1);

    cout << "Number after calling the function = " << Num1 << endl;

    return 0;
}

/*
    When the controller executes the line:  MyFunction(Num1);
    this means that MyFunction(Num1) is being called.

    The value 1000 is sent to the parameter "int &Num1" inside MyFunction().
    Since the parameter is passed BY REFERENCE:

        ✔ NO new variable with the name "Num1" is created inside
          the scope of MyFunction().

        ✔ The parameter "Num1" inside MyFunction() becomes an ALIAS
          (a direct reference) to the SAME Num1 variable created in main().

        ✔ Therefore, both main() and MyFunction() are pointing to and
          working on the EXACT SAME memory address.

    Inside MyFunction(), the statement:
            Num1 = 7000;
    directly modifies the Num1 that belongs to main().

    Therefore, the output becomes:

        Number inside this procedure = 7000
        Number after calling the function = 7000
*/


 
