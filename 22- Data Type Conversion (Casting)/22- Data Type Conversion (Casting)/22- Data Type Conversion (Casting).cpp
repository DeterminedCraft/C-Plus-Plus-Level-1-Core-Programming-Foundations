
#include <iostream>
#include <string>  // will give access to a few functions used here (stoi, stof, stod, to_string)
using namespace std;
/*
 Data Type Conversion (= Casting data = converting a variable from one data type to another).

 For example I have a variable of the data type double storing the value of 13.7
 so how can I:

 1-  Convert this variable from double to integer ? ( or vice -versa)
 2-  and what happens to the stored value during the conversion ?

 Or:

 Sometimes I have a string variable storing "1234".
 How can I convert it to an integer variable, a double variable, etc.

 __________________________________________________________________________________________________

        C++ fundamental data types arranged from largest to smallest:
                 ⮙                                     ⮛
          NO     │                                      │     DATA
          DATA   │         Higher Data Type             │     LOSS
          LOSS   │                                      │
                 │        ┌──────────────────┐          │
                 │        │   Long double    │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │      Double      │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │      Float       │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │       Long       │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │        Int       │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │       Short      │          │
                 │        └──────────────────┘          │
                 │                 ↓                    │
                 │        ┌──────────────────┐          │
                 │        │       Char       │          │
                 │        └──────────────────┘          │
                 │                                      │
                 ⮙         Lower Data Type             ⮛


    Converting from a large data type to a smaller one usually results in DATA LOSS.

     Example:
     A float variable has the value 13.6.
           If converted to an integer, depending on the compiler version, truncation / rounding  might occur.

           GENERALLY, converting float variable → int variable results in storing 13, and discarding the fractional part.
           That is how data is lost (0.6 in this example) when converting from a larger data type to a smaller one.

          However, converting from a smaller to a larger data type does NOT result in data loss.
          This concept applies to all programming languages.
 ----------------------------------------------------------------------------------------------------------------------------------------------------------

*/

                             /* There are three ways to convert data types in C++:
                                1) Implicit conversion     → done automatically by the compiler
                                2) Explicit C-style cast   → (int)Num2
                                3) Explicit function-style → int(Num2)
 
                                Implicit conversion may lead to data loss.
                                Prefer explicit conversion for clarity and safety.
                              
                              */



/* Example Converting from double to integer:
*
*   - This means converting a double variable to an integer variable (variable name remains the same).
*   - Notice the demonstrated data loss in the example below:
*/

 // An example on Implicit Conversion
int main()
{
    int Num1;
    double Num2 = 18.99;

    Num1 = Num2; // we want to convert Num2 variable from double to int IMPLICITLY. // or  Num1 = (int)Num2; or Num1 = int(Num2);
    cout << Num1 << endl;
    cout << Num2 << endl; // The original double Num2 variable remains unchanged.
 
    return 0;
}


// Or: Explicit conversion (C-style)
int main()
{
    int Num1;
    double Num2 = 18.99;
    
    Num1 = (int)Num2;  // Explicit (C-style) conversion
    cout << Num1 << endl;
    cout << Num2 << endl;
  
    return 0;
} 


// Or:Explicit conversion (function-style)
int main()
{
    int Num1;
    double Num2 = 18.99;
   
    Num1 = int(Num2);  // Explicit conversion using int() function
    cout << Num1 << endl;
    cout << Num2 << endl;

    return 0;
}

// An EXTREMELY IMPORTANT Another example on Implicit Conversion
int main()
{
    float Num1, Num2;
    int sum; // 6.1
    
    Num1 = 3.9;
    Num2 = 2.2; 

    sum = Num1 + Num2; //6.1 // C++ evaluates the whole right - hand expression using the original data types, then converts the final result to the target variable’s type.
                       // In the explicit conversion format it is either: 
                       // sum = int (Num1 + Num2) 
                       // 
                       // or:
                       // float FloatSum = Num1 + Num2;
                       // sum = (int)FloatSum
    cout << sum << endl;

    return 0;

    /* So:

    ✔️ Step 1: Add the floats
    3.9 + 2.2 = 6.1   (float result)

    ✔️ Step 2: Convert the result (6.1) to int
    The fractional part is discarded → becomes 6
    (Note: even if the result were 6.9, the .9 would still be discarded → becomes 6)

    ✔️ Step 3: Store into sum
    sum becomes 6
    --------------------------------------------------------------------------------------
     
    ❌ What Does NOT Happen?

C++ does NOT do this:

Convert Num1 → int (3)

Convert Num2 → int (2)

Then add 3 + 2 = 5

Then store 5 into sum

This NEVER happens unless you explicitly write it:
sum = (int)Num1 + (int)Num2;   // produces 3 + 2 = 5

     */

}

/*--------------------------------------------------------------------------------------------------------------- 
 Note:
   Prefer explicit data type conversions over implicit ones.
   Explicit conversions make your intention clear to the compiler and the reader,
   and they help PREVENT accidental data loss during narrowing conversions.
*/

/*

🎯 Final Clarification (Important)
 ✔ “Casting” = explicit data type conversion
 ✔ Implicit conversion = automatic type conversion
 ✔ Both are considered type conversions, but only explicit is called “casting.”

*/

/* Only read this after having fully comprehended the above code

    The Mechanics of thinking:

    int Num1;
    double Num2 = 18.99;

    Num1 = Num2;

    // In int Num1 we are trying to store 18.99 that is double.
    // This assignment works because the compiler implicitly converts Num2 from double to int
    // in this case, the compiler will do that implicitly for us.

    // Num2 remains exactly 18.99 in memory and remains of type double.

______________________________________________________________________________________________________________________
*/

int main()
{
    string st = "123.456";

    //Convert string to integer
    int num_int = stoi(st); // data loss demonstrated (fraction removed). // accessible as #include <string> is added to the header.
    

    //Convert string to float.
    float num_float = stof(st);  // No visible data loss in this specific example, 
                                //but float has limited precision (~6 decimal digits), so more complex decimals may lose precision
    

    //Convert string to double 
    double num_double = stod(st); // no visible data loss. 
   

    cout << "num_int: " << num_int << endl;  // data loss demonstrated.
    cout << "num_float: " << num_float << endl; // no visible loss here, but limited precision 
    cout << "num_double: " << num_double << endl; // no visible data loss. This is the MOST correct conversion because double has the highest precision.

    return 0;
}
/*
  As you have already guessed:

  sto denotes: string to.
    string to integer  stoi
    string to float stof
    string to doule stod
*/

int main()
{
    int Num1 = 123;
    double Num2 = 18.99;

    string st1, st2;
    // from integer to string
    st1 = to_string(Num1);   // in editor's suggestions, this function's argument could be any type of number (int, double, float, short, long, etc.)

    // from double to string
    st2 = to_string(Num2);

    cout << "From integer: " << Num1 << " to string, one has " << st1 << endl;
    cout << "From double: " << Num2 << " to string, one has " << st2 << endl;

    return 0;
}

