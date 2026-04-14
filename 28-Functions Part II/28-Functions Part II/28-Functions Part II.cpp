
#include <iostream>
#include <cmath>
using namespace std;


/* Previously, we mentioned that there is a difference between a procedure and a function.

   ✔ A procedure does NOT return a value — that is why its return type is `void`.

   ✔ A function, on the other hand, MUST return a value, and therefore its return type 
     matches the type of the value it returns (int, double, string, char, etc.).

   In summary:
   - Procedure  → return type = void → no value returned.
   - Function   → return type = data type of the returned value.

   ✔ Both procedures and functions must be created *outside* the main() function.
*/


/*****
  When a function returns a value, the function call evaluates to that value.
  However, this returned value is not stored anywhere unless you assign the
  function call to a variable.
*/

// Example # 1---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()  // This is a procedure (return type = void)
{
    cout << "This is my first function; it got executed" << endl;

}

string MyFunction2() // This is a function (must return a value)
{
    // You may write as many lines of code as you want here before the single return statement.
    return "This entire string is the returned value. It is only returned when the function is called.";
    // as soon as the return statement above executes, the controller immediately exists the function
    // Hence, any line(s) of code written after the return statement will be ignoted by the compiler.
}


int main()
{
    MyFunction(); 
    // Calling the procedure: this simply executes the line(s) of code 
    // inside MyFunction().

    MyFunction2();
    // Calling the function. This does two things:
   // 1- Executes the line(s) of code—if any—before the return statement.
   // 2- Then, MyFunction2() evaluates to its returned value.
   //    (The line(s) of code before the return statement exist solely 
   //     to produce that returned value.)
   // 
    // However, in this call, the returned value is NOT captured

    // So in order to capture the returned value, write INSTEAD:
    string ReturnedValue = MyFunction2();

    // And then you can either print it to the screen, or use it later in the program.
    cout << ReturnedValue << endl;

    // Unless you simply want to print it directly to the screen without capturing the returned value:
    cout << MyFunction2() << endl;
    // You can print the returned value directly like this without capturing / storing it.
// However, capturing the returned value in a variable first and then printing it
// is more elegant and easier to maintain.
//
// In addition, storing the value allows you to reuse it later in the program without
// calling the function again. Re-calling the function would re-execute all of
// its internal code just to recompute the same returned value.

    return 0; // As soon as this line executes, program control exits the main() function.
    // Hence, any line(s) of code written after the return statement are ignored.

    /*  Regarding MyFunction2(), or any other function:
        It does ONE thing and only ONE thing. Meaning:

    A function always returns EXACTLY ONE SPECIFIC VALUE.
    This is the same behavior as built-in functions such as:
        round(), floor(), ceil(), etc.,
    each of which returns one—and only one—specific result
    that we can later use further.

    All the lines of code before the FINAL return statement exist
    for the purpose of producing that EXACTLY ONE SPECIFIC VALUE.
    Therefore, when we write a function, we should ensure that
    all statements before the return contribute to ONLY generating
    that one final value which will be returned.
    */
 
}

/*  Extremely important concept:

   cout << MyFunction() << endl;

   This line is valid ONLY if MyFunction() returns a value.
   Why?

   Because the insertion operator (<<) requires something that
   can be printed — an int, float, string, etc.

   If MyFunction() returns a value → cout receives that value → OK.

   BUT if MyFunction() is a PROCEDURE (i.e., return type: void),
   then: cout << MyProcedure();
                ^^^^^^^^^^^
   is illegal, because 'void' is NOT a printable type.

   The compiler sees that you're trying to insert a 'void'
   into cout and throws a *compile-time error* BEFORE executing
   the body of the procedure.

   Summary:
       cout << function_that_returns_value(); // ✅ works
       cout << procedure_that_returns_void(); // ❌ compile error
*/



// Example # 2--------[Building on the notes from Example #1]----------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()  
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2() 
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
 int x = 10;
 int y = 20;

 return x * y;
}



int main()
{
    int result;
    result = MyFunction3();  // You are calling the function and capturing (storing) its return value in an int variable called 'result'.

    cout << result << endl;
   
    return 0;
}





// Example # 3---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
    int x = 10;
    int y = 20;

    return x * y;
}



int main()
{
    int result;
    result = MyFunction3() + 50;  

    cout << result << endl;

    return 0;
}




// Example # 4---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


int MyFunction3()
{
    int x = 50;
    int y = 2;

    return x * y;
}



int main()
{
    int result;
    result = MyFunction3() / 3;  // remember: this is an integer division

    cout << result << endl; // Hence, 33

    return 0;
    /*
     Important: if result is defined as float, then 33 is still printed.
    */
} 




// Example # 5---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.5;
    float y = 20.3;

    return x * y; //213.15
}



int main()
{
    float result;
    result = MyFunction3();  

    cout << result << endl;  //213.15

    return 0;
}






//// Example # 6---------------------------------------------------------------------------------------------
////---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.5;
    float y = 20.3;

    return x * y; //213.15
}



int main()
{
    int result;
    result = MyFunction3();  // an implicit conversion is performed

    cout << result << endl;  //213

    return 0;
}
/*
 But explicit conversion is better because :

 it makes your intention clear,

 avoids implicit truncation surprises,

 avoids compiler warnings in strict compilation modes(not errors).

 So: instead of the above   result = MyFunction3();  // an implicit conversion is performed
 Have: 

      result = int(MyFunction3());
     // or
      result = (int)MyFunction3();
 */ 


// Example # 7---------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

void MyFunction()
{
    cout << "This is my first function; it got executed" << endl;

}


string MyFunction2()
{
    return "This entire string is the returned value. It is only returned when the function is called.";
}


float MyFunction3()
{
    float x = 10.42;
    float y = 20.8;

    return x * y; //216.736
}



int main()
{
    float result;

     ////Now, for whatever reason in your program, 
     ////say that you want the returned value of MyFunction3() rounded DOWN,
     ////before you process it any further.
    result = floor(MyFunction3());  

    cout << result << endl;  //216

    return 0;
}
