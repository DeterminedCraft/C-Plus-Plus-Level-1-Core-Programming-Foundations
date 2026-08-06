

#include <iostream>
using namespace std;
/* Data Types & Ranges:
   There is no room for memorization here — just aim for understanding.

   Tip: Having something like this:
        int age = 150;

   is an abomination! Why?
   It’s equivalent to sipping an espresso from a cauldron — an enormous cooking pot.
   This is blasphemy! It means reserving far too much memory only to later store a tiny number like 150.
   Such misuse makes your application inefficient and slow.
   So, is there a suitable data types to supercede the integer one ?. Yes, there is. Continue on with this lesson.
*/

  /* C++ fundamental data types arranged from largest to smallest:
  
    Long double  
    Double  
    Float  
    Long  
    Int  
    Short  
    Char  
  */

/* Now let us have a look at the actual Data Types ranges & sizes:

|   Type   |      Meaning            |             Range                    |    Size(Bytes)   |
| -------- | ------------------------| -------------------------------------| ---------------- |
| int      | Integer                 | -2,147, 483, 648   + 2,147, 483, 647 | 4                |
| float    | Floating - Point        | 1.17549e-38        3.40282e+38     | 4                | 
| double   | Double Floating - Point | 2.22507e-308       1.79769e+308    | 8                | double that of float,range & size wise.
| char     | Character               | -127               127             | 1                |
| wchar_t  | Wide Character          |                                      | 2                |
| bool     | Boolean                 | 0                  1               | 1                |
| void     | Empty                   |                                      | 0                |
| string   | String                  |                                      | 12               |
 
 ** The Size(Bytes) differs in accordance with the OS whether it is 32-bit or 64-bit OS for windows or Linux or any..(applies to all tables 
 *   in this file).
*/

  

/*
*  Understand: Type Modifiers (Modifying the types). 
   There are 4 of them:

   1- Signed.
   2- Unsigned.
   3- Short.
   3- Long

   These 4 modifiers can only modify the data types of: int, double, & char ONLY.
* 
* 

| Type            | Sign     | Range                                       | Size    |
| -------------------------- | --------------------------------------------|---------| 
| int             | signed   | -2,147,483,648   +2,147,483,647             | 4 bytes | * signed is the default (int a = signed int a). Also: the + or - sign is stored alone at the last bit of the 4 bytes
|                 | unsigned | 0              4,294,967,295              | 4 bytes | * no possibility to store negative numbers: Starts from 0 and therefore doubles the max limit. The last bit of the 4 bytes will be used for storing numbers instead of storing the + or - sign 
                                                                                           so, if you want to double the range while keeping the size as it is then type: UNSIGNED int (same concept applies to double & char).

| short int       | signed   | -32,768          +32,767                    | 2 bytes | * observe what happens when, instead, adding 'short' to int: assigned memory is cut in half and the range significantly drops.
| short           | unsigned |  0             65,536                     | 2 bytes | * typing 'short int' is the same as typing 'short'

| long int        | signed   | -2,147,483,648   +2,147,483,647             | 4 bytes | * So after adding 'long' to int, why do the Range & size stay the same ?? (As in long int = int) ?. it is a long story that has to do with the history of the OS evolutions.
| long            | unsigned | 0              4,294,967,295              | 4 bytes | * typing 'long int' is the same as typing 'long'

| long long int   | signed   | -(2^63)        (2^63)-1                   | 8 bytes | * adding long long, doubles the size & significantly increases the range
| long long       | unsigned | 0              18,446,744,073,709,551,615 | 8 bytes | * the unsigned rule is in affect here.


  
* Defining long long int age is blasphemy of the highest order in the programming realm. This deems the program very slow.
* Final conclusion: One should be extra careful when assigning data types to variables.
*/



/* Now, regarding numbers with decimals.

| Type        | Sign   | Range                           | Size    |
| ------------| ------ | ------------------------------- | --------|
| float       | signed | -1.17549e-38   +3.40282e+38    | 4 bytes |
| double      | signed | -2.22507e-308  +1.79769e+308   | 8 bytes |
| long double | signed | -10e-307      +10e+308        | 12 bytes|

*/


/*

| Type   | Sign     | Range        | Size     |
| ------ | -------- | ------------ | -------- |
| char   | signed   | -127   127 | 1 byte   |
|        | unsigned | 0      255 | 1 byte   |

| bool   |          |              | 1 byte   |  * Empty Range as it depends on the operating system.
| String |          |              | 12 bytes |  * Empty Range as it depends on the operating system. 
| Void   |          | Empty        | 0 bytes  |

*/

// A- Now, let's take practical examples that put this information into perspective:

//int main()
//{
//    // Note: By default, everythig is signed
//
//    int v1;
//    signed int v2;      // same exact thing as typing    int v2
//
//    unsigned int v3;   // 1- changes the range from 0 to double that of the maximum. 2- The size of the reserved memory should stay the same.
//                      //  for #1, to double that of the maximum becasue the + sign stored at the last bit of the last byte is now used to store numbers.
//
//    short int v4;   // much smaller ranges than that of int, plus half the size. -32,768          +32,767    2 Bytes
//    short v5;      // = short int v5   The exact same thing.
//
//    unsigned short int v6; // range spans from 0 to double the maximum range of the short int type (65,536). Size remains the same.
//    unsigned short v7;  // = unsigned short v7 // that is what to use for age !!
//
//    signed long int v8; // the exact same thing as  signed int v8. Why this is, is a long story.
//    long int v9; // exactly the same thing as int v9 & signed is included by default before long in here.
//    long v10; // =  long int v9
//
//    unsigned long v11; // = unsigned long int = unsigned int. Range is from 0 to double the maximum range of integer. The size remains the same as that of int
//    
//    long long int v12; // range is much bigger than that of int & size is double that of int.
//    unsigned long long int v13; // range is from 0 to double the maximum range of long long int where the sizing remains the same 
//                                // as that of long long int (= signed long long int) becasue we're compensating the removal of the 
//                               // negative ranges with the doubling of the maximum range.
//
//    long double v14; 
//    signed char v15;
//    char v16;
//    unsigned char v17;

    // Bottom line: Use the appropriate data types along with the modifiers: Signed, Unsigned, Short, & Long (that are 
    //              only applicable to int, double, & char) according to what is needed.
    //              an espresso needs an espresso cup or a cup that is slightly bigger but never a cauldron as drinking will be too slow.


// B- Let's look at another example:

int main() // tip: read ALL the comments for this program before running it.
{
    double distance = 56E12;  // 56E12 rquals to 56*10 ^12
    cout << distance << endl;
    
    short d = 3434233; // Overflow Error! out of range. as short has the range of -32,768 to +32,767
                       // but PAY ATTENTION here, NOT all compilers will yield errors: SOME compilers will truncate this number
                      //  where the program will run with no errors but your results will be WRONG
    // so one needs to be AWARE from the get-go, that the ranges for the short int is -32,768 to +32,767

    cout << d << endl;

    unsigned int a = -10;  // Error !: It is unsigned so why the negative ?- The normal outcome is that 
                           //the compiler will yield an error preventing the code from running 
                           // However, some compilers will NOT yield an error where it will compensate the value
                           // with other values it chooses causing wrong results.
                          
    cout << a << endl;
    return 0;
}

/* The outcome of the above program, will depend on your compiler. I am using VS 2022.
* 
*  Normally: The above program should not run at all as it contains errors.
*  Nevertheless, in my case it faslsly worked as shown in the outcome below:
* 
*          5.6e+13
           26361       <------huge truncation took place (an evidence of truncation) instead of throwing an error = causing wrong results.
           4294967286  <------total replacement of -10 with the biggest value that the unsigned int can return.  = causing wrong results.


// FINAL CONCLUSION: Know the ranges so that an overflow error or wrong results are not rendered.

*/


/************************************************************** FOUNDATIONAL NOTE **************************************************************
* /*********************************************************************************************************************************************
 Core idea:
 In C++, floating-point (decimal) literals are double by default.
 If you don’t specify a suffix, the compiler assumes precision first.

 What this means in practice:

 1) Decimal literals
    0.05
    11.6
    50.0
    → all are of type double

 Example:
     
      float mark = 50.5;
/*
  Event 1:
    The compiler sees the literal `50.5` and treats it as a `double`.

  Event 2:
    The compiler sees it must be stored in a `float` variable.

  Event 3:
    An implicit conversion is applied:
      double → float

  To avoid this, write:
    float mark = 50.5f;   


    ********** And when it comes to initializing via reading user input:  **********
    
    -    3 → 3.0f   ,    2.7 → 2.7f 
    // User input is parsed from text ("3" → 3.0f, "2.7" → 2.7f) and constructed directly as float.

    (✅ Parsing = reading raw text and figuring out its structure and meaning according to rules.)
    (✅Parsing (التحليل النحوي / التحليل الصياغي))


 2) Integer literals
    50
    → type is int

    Example:
      float mark = 50;
      // implicit conversion: int → float
      // safe and exact in this case

 3) A decimal point changes the type
    50    → int
    50.0  → double
    50.0f → float

    Example:
      float mark = 50.0;
      // implicit conversion: double → float

    To avoid that:
      float mark = 50.0f;

 Discipline / mental model:
 - Match the literal type to the variable type
 - Avoid silent conversions when possible
 - Be explicit when intent matters (especially in fundamentals and numeric logic)

 One-line rule to remember:
 Decimal literal = double unless explicitly suffixed.
 If you use float, suffix the literal with f.
 */
//*********************************************************************************************************************************************
//*********************************************************************************************************************************************




// C- The following program will help you confirm/check the SIZE (that will be reserved in memory when using a specfic data type.)

// sizeof(argument is the data type) is a ready-to-use C ++ function
// in some versions of VS, certain libraries need to be included on top in order to use this function. 
//  However, in VS 2022, this function is already included in iostream library.

//int main()
//{ 
//
//cout << "The size of bool data type is " << sizeof(bool) << "\n";
//cout << "The size of char data type is  " << sizeof(char) << "\n";
//cout << "The size of short data type is " << sizeof(short int) << "\n";
//cout << "The size of int data type is " << sizeof(int) << "\n";
//cout << "The size of int long data type is " << sizeof(long) << "\n";
//cout << "The size of int long long data type is " << sizeof(long long) << "\n";
//cout << "The size of float data type is " << sizeof(float) << "\n";
//cout << "The size of double data type is " << sizeof(double) << "\n";
//
//return 0;
//}

// D- In addition, The following program will help you confirm/check the RANGE of the data type
       //  You only call:   CHAR_MIN    , LONG_MAX,  LLONG_MIN, etc. as shown in the program
      // you MAY need this in programming later on

//int main()
//{
//    cout << "char Range : (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
//    cout << "unsigned char Range: (" << 0 << " , " << UCHAR_MAX << ")\n\n";
//
//    cout << "short int Range: (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
//    cout << "unsigned short int Range: (" << 0 << ", " << USHRT_MAX << ")\n\n";
//
//    cout << "int Range: (" << INT_MIN << " , " << INT_MAX << ")\n";
//    cout << "unsigned int Range: (" << 0 << " , " << UINT_MAX << ")\n\n";
//    
//    cout << "long int Range: (" << LONG_MIN << ", " << LONG_MAX << ")\n";
//    cout << "unsigned long int Range: (" << 0 << ", " << ULONG_MAX << ")\n\n";
//
//    cout << "long long int Range: (" << LLONG_MIN << " , " << LLONG_MAX << ")\n";
//    cout << "unsigned long long int Range: (" << 0 << " , " << ULLONG_MAX << ")\n\n";
//
//    cout << "float Range: (" << FLT_MIN << " " << FLT_MAX << ")\n";
//    cout << "float(negative) Range: (" << -FLT_MIN << " , " << -FLT_MAX << ")\n\n";
//
//    cout << "double Range: (" << DBL_MIN << " , " << DBL_MAX << ")\n";
//    cout << "double(negative) Range: (" << -DBL_MIN << -DBL_MAX << ")\n";
//
//    cout << "long double Range: (" << LDBL_MIN_10_EXP << " , " << LDBL_MAX_10_EXP << ")\n";
//    
//    return 0;
//}

// Homework: Revisit all previous homework's and choose the proper data type.
//           so, for example, if you have used an int to store a small number and/or if it is not going to use
//           negative numbers nad/or if its value is not going to exceed 32,000 then you define it as unsigned short
//           and so on. It is imperative to practice this in order for your program to be fast. And remember
//           that your application if going to be used by at least thousands of users per second.