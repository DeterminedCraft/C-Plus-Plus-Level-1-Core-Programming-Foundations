
#include <iostream>
using namespace std;

/* Arrays: 
   An array is a variable that can store more than one value of the SAME data type.

   Helps in storing information, retrieving, and searching for them, in a specific way.
   An array can be of any fundemental data type:
         int, float, double, wchar_t, char, string, bool.

 If you remember — a string is an array of characters, meaning we can index it to access any of its individual characters:

    String x = "Ana Ku";    // x is not only a string. It is also an array of characters.

    It immediately follows:

    x[0] = 'A';   
    x[1] = 'n';   
    x[2] = 'a';   
    x[3] = ' ';   
    x[4] = 'K';     
    x[5] = 'u';   

 
 What is an Array ?

 An array is a variable that can store more than one value of the SAME data type.

 Examples of arrays:
     - int array storing students' marks
     - double array
     - float array
     - string array
     - bool array
     - char array
     - wchar_t array

 We will see all of that as we progress.


*/

//// Let's see a few examples:-
//int main()
//{
//    
//    string x = "Ahmad El-Aina"; // variable 'name', is not only a string but is also an array of characters. 
//                                  // Meaning that we've an access to all of its individual characters via indexing.
//    cout << x[0] << endl; // prints A 
//    cout << x[5] << endl; // prints empty space
//    cout << x[12] << endl; // prints a
//
//    return 0;
//}

//// Another example:-
//int main()
//{
//    int x[5] = { 22, 18, 2, 55, 520 }; // x is an integer array holding 5 elements
//
//    cout << x[0] << endl; // prints 22
//    cout << x[1] << endl; // prints 18
//    cout << x[2] << endl; // prints 2
//    cout << x[3] << endl; // prints 55
//    cout << x[4] << endl; // prints 520
//
//    return 0;
//}

/* How it works in memory: 
   
             When I declare and initialize an array:

              int x[5] = { 22, 18, 2, 55, 520 };
                          
                  ┌────────┬────────┬────────┬────────┬────────┐
                  │ ┌────┐ │ ┌────┐ │ ┌────┐ │ ┌────┐ │ ┌────┐ │
                  │ │ 22 │ │ │ 18 │ │ │  2 │ │ │ 55 │ │ │520 │ │   ← Array Elements: Each reserving an integer memory space (4 bytes)
                  │ └────┘ │ └────┘ │ └────┘ │ └────┘ │ └────┘ │                                                           ⬇       
                  │ 0x3E8  │ 0x3EC  │ 0x3F0  │ 0x3F4  │ 0x3F8  │   ← Memory Addresses (hex)                                ⬇       
                  ├────────┼────────┼────────┼────────┼────────┤                                                           ⬇         
                  │    0   │    1   │    2   │    3   │    4   │   ← Immediately assigning indexes to memory spaces ◀─◀──◀─⬇                       
                  └────────┴────────┴────────┴────────┴────────┘
                     x[0]     x[1]     x[2]     x[3]     x[4]

  
  *Note: Indexes ALWAYS start from 0.

*/
//--------------------------------------------------------------------------------------------------------------------------------------------------------
/* And don't forget —
   Instead of defining, for example, 10 separate integer variables:

       int x1 = 10;
       int x2 = 5;
       int x3 = 7;
       int x4 = 12;
       ...
       int x10 = 23;

   You simply create ONE array variable x of type int:

       int x[10] = {10, 5, 7, 12, ..., 23};   // The simplest and fastest way.

   // Or the longer way:

       int x[10];

       x[0] = 10;
       x[1] = 5;
       x[2] = 7;
       x[3] = 12;
       ...
       x[9] = 23;
*/



// ------------------------------
// Example 1
// ------------------------------
int main()
{
    int x[5] = { 22, 18, 2, 55, 520 }; 

    cout << x[0] + 8 << endl;
    cout << x[0] + x[2] << endl;  // prints 24

    return 0; 
}



// ------------------------------
// Example 2
// ------------------------------
int main()
{
    int x[3]; // declaring an array and then initializing on the next line.

    x[0] = 3;
    x[1] = 2;
    x[2] = 7;

    cout << x[0] + x[2] << endl; // prints 10

    return 0;
}



// ------------------------------
// Example 3
// ------------------------------
int main()
{
    float x[4];

    x[0] = 3;   // stored as 3.0f in memory
    x[1] = 2.6;
    x[2] = 8; // stored as 8.0f in memory.
    x[3] = 7;

    cout << x[0] + x[1] << endl; // prints 5.6
    cout << x[0] + x[3] << endl; // prints 10 (calculated to 3.0f + 7.0f = 10.0f and then printed as 10)

    return 0;
}



// ------------------------------
// Example 4 
// ------------------------------
int main()
{
    string x[3] = { "Ahmad", "Ana", "Nora" };

    cout << x[0] + x[1] << endl; // concatenation. Prints AhmadAna
    cout << x[0] + " " + x[1] << endl; // concatenation. Prints Ahmad Ana

    //capturing and then printing:
    string y = x[0] + x[2];
    cout << y << endl;

    return 0; 
}



// ------------------------------
// Example 5 — Another style
// ------------------------------
int main()
{
    string x[3];

    x[0] = "Ahmad";
    x[1] = "Ana";
    x[2] = "Nora";

    return 0;
}



// ------------------------------
// Example 6 
// ------------------------------
int main()
{
    bool x[3] = { true, false, true }; // stored in memory as 1,0,1

    cout << x[0] << endl;  // prints 1 (represents true)
    cout << x[1] << endl;  // prints 0 (represents false)

    return 0;
}




// ------------------------------
// Example 7 
// ------------------------------
int main()
{
    bool x[3] = { 1, 0, 1 }; // stored in memory as 1,0,1 (representing  true, false, true)

    cout << x[0] << endl;  // prints 1 (represents true)
    cout << x[1] << endl;  // prints 0 (represents false)

    return 0;
}



// ------------------------------
// Example 8 
// ------------------------------
int main()
{
    bool x[3];

    x[0] = true; // stored in memory as 1
    x[1] = false; // stored in memory as 0
    x[2] = true; // stored in memory as 1

    cout << x[1] << endl; // prints 0

    return 0;
}



// ------------------------------
// Example 9
// ------------------------------
int main()
{
    bool x[3];

    x[0] = 0;
    x[1] = 1;
    x[2] = 1;

    cout << x[1] << endl; // prints 1

    return 0;
}