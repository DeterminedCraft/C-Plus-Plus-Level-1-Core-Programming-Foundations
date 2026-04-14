
/* Data Types in C++:  1- Fundamentals   2- Derived   3-User Defined
* 
* 
*1- Fundemantel Data Types:
*                                          ------> int  -->  Whole number: 712
*Integral Type (رقم ذو وحدة كاملة)    :---|
*                                          ------> char -->  Single Character: 'A' 
*                                           (char is put under the integral type because it's represented with its whole num in the ASCII 
                                            table which is what's stored in memory).

*       
                                           ------> float  -->  Floating Point: 14.5
*Floating Type                        :---|
*                                          ------> double -->  Floating Point: 14.5 
                                           (Its max size is the double of float & could take many many more digits after the decimal point
                                            for accuracy).
 -----------------------------------------------------------------------------------------------------------------------------------
 Boolean Type            Note #1:     🧠 Concept:

                                       A Boolean variable can store only two possible values:

                                        true → means 1 is stored internally
                                        false → means 0 is stored internally

                                        bool isRunning = true;    // stores 1
                                        bool isStopped = false;   // stores 0

                                        cout << "isRunning = " << isRunning << endl;  // prints 1
                                        cout << "isStopped = " << isStopped << endl;  // prints 0


                         Note #2:      🧩 You can also initialize directly with numbers:

                                        1 → treated as true
                                        0 → treated as false

                                        bool flag1 = 1;   // same as true
                                        bool flag2 = 0;   // same as false

                                        cout << "flag1 = " << flag1 << endl;   // prints 1
                                        cout << "flag2 = " << flag2 << endl;   // prints 0                                      
 -----------------------------------------------------------------------------------------------------------------------------------

 *String Type                          : string --> Text: "Mohammaed"


 Void Type                            : void     --> Empty  

 Wide Character                       : wchar_t  --> Unicode (One can't store, for example, an Arabic or a chinese character in char data type as it is 
                                                              only designated for the ASCII table (containing nglish letters & the standard keyboard symbols). 
                                                              Nevertheless, one can do so in wchar_t which is designated for the Unicode table.
 ____________________________________________________________________________________________________________________________________________________________

 2-Dervied Data Types: (Will be explained in details later in documentation. For now, just keep them in mind)

 Function
 Array
 Pointer
 Reference
 _____________________________________________________________________________________________________________________________________________________________

 3- User Defined data Types: (Will be explained in details later in documentation. For now, just keep them in mind)

 Class
 Structure
 Union 
 Enum
 Type Def

 _____________________________________________________________________________________________________________________________________________________________
*/

/*
* Syntax:        type VariableName = value;    Where type is either:  int, float, double, char, String, bool, wchar_t

*/
#include <iostream>
using namespace std;

//int main()
//{
//    int MyAge = 99;
//    cout << MyAge;
//    cout << "\n";
//    return 0;
//}

//int main()
//{
//    int MyAge;
//    MyAge = 99;
//    cout << MyAge << "\n";
//    return 0;   
//}

//int main()
//{
//    int MyAge = 99;
//    cout << MyAge << endl;
//    MyAge = 100;
//    cout << MyAge << endl;
//    return 0;
//}
//int main()
//{
//    int MyAge = 99;
//    cout << "My age is: " << MyAge << " years old." << endl;
//   
//    return 0;
//}

//int main()
//{
//    int MyAge;
//    MyAge = 100;
//    cout << MyAge;
//    cout << endl;
//
//    MyAge = 102;
//    cout << MyAge << endl;
//
//    return 0;
//}
                         /*_______________________________________Exploring other data types____________________________*/

int main()
{
    int myNumber = 52;                    // Integer (Whole number without decimals)
    float myFloatNumber = 7.84;          // Floating point number (with decimals)
    double myDoubleNumber = 21.89822;   // Large floating point number (double that of float) (with decimals) & could also be used for very accurate numbers requiring many many digits after the decimal point.
    char myLetter = 'G';               // Character... placing it in double quotes would throw a compiler error.
    char SomeCharacter = 65;
    string myText = "Ahmad";          // String (text)......a string is an array of characters.   Placing it in a single quote would throw a compiler error.
    bool myBoolean = true;           // Boolean (true or false)
    
    // advanced (You could skip the below 2 lines)
    int someNumber = 'AA';
    int anotherNumber = 'y';

    cout << myNumber << endl;
    cout << myFloatNumber << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;   // Notice that the output is 1 (for true) or 0 (for false)
    cout << SomeCharacter << endl;  // A
    cout << someNumber << endl;
    cout << anotherNumber << endl;

    return 0;
}


//int main()
//{
//    char myLetter = 'M';
//    cout << "'" << myLetter << "'" <<endl;  // output:  'M'
//    
//    char mySymbol = '\'';                 // output:  '
//    cout << mySymbol << endl;
//        
//    return 0;
//}

//int main()
//{
//    int x = 4;
//    int y = 10;
//    int sum = x + y;
//    cout << sum << endl;
//
//    return 0;
//}

//int main()
//{
//    int x = 4;
//    int y = 10;
//    cout << x + y << endl;
//
//    return 0;
//}

//int main()
//{
//    int x = 1, y =2 , sum = x + y; // declaring and initializing variables on one line if they are all of the same data type. 
//    cout << sum << endl;
//
//    return 0;
//       /* Tip: do not only intialize multiple variables on one line and then on the next line declare these multiple variables together (in one line)
//               as this is considered an unoptimized way to code and isn't safe */
//}

//int main()
//{
//    int x = 99, y = 99, z = 2;
//    cout << x + y + z << endl;
//    
//    return 0;
//}

//int main()
//{
//    char char1 = 'a', char2 = 'h', char3 = 'm', char4 = 'a', char5 = 'd';
//    cout << char1 << char2 << char3 << char4 << char5 << endl << endl;
//    cout << "Printing the name in reverse: \n\n";
//    cout << char5 << char4 << char3 << char2 << char1 << endl << endl;
//
//    cout << "-------------------------------------------------------------\n";
//
//    cout << char1 << char2 << char3 << char4 << char5 << "  Printing in reverse:  " << char5 << char4 << char3 << char2 << char1 << endl << endl;
//
//
//    return 0;
//}

  /*_______________________________________Variable naming____________________________*/
  /*
  *    No two variables shall have the exact same name = every single variable shall have a unique name.
  * 
  *    a variable name should only be meaningful/ descriptive (& it will never need an adjacent comment describing what it is,as its name should serve this purpose).
  *    This creates a comprehensible and maitainable code.
  * 
  *    For example: studentAge as opposed to age as a variable name.
  *    Another example:
  *    
  *    int MinutesPerHour = 60;  // Good
  *    int m = 60 // bad becasue the question of what 'm' means arises.
  * 
  *    A variable name can contain letters, digits, and underscores.
  *    A variable name must begin with a letter or an underscore (_) ( and not 2x  or 2student or 2_student, etc.).
  *    A variable name is case sensitive (myVar and myvar are different variables).
  *    A variable name can not contain whitespaces or special characters like ¨! # %, etc.
  *    Reserved words can never be used as variable names.
  *    
 */
 /*_______________________________________Constants____________________________*/
//const int myNumber = 15;  // myNum will always be 15....A lock is put on it in memory so that the value can no longer be overwritten in memory.
//MyNumber = 20; // error: assignment of read-only variable 'myNum'

// The concept of constants is extremly useful in programming in order to avoiding unintentional errors.

/* You should always declare the variable as constant when you have VALUES THAT ARE UNLIKELY TO CHANGE:
*  For example: 
*  
*  const int minutesPerHour = 60; // It is a fact and it will never change. Hence, define it as a constant. Plus if another developer wants to make changes to the code, they may modify it by mistake ! so why allow such a possibility ? so, instead just define it as a const.
*  const float PI = 3.14    // same thing applies here ! (Plus disallowing anyone from changing this value as pie will always be 3.14)

*/
//int main()
//{
//    const int MinutesPerHour = 60; // Placing our hypothetical or imaginary lock on it so that the value in memory can never be overwritten (= for reading only!)
//     MinutesPerHour = 10;   // will throw a compiler error.
//    cout << MinutesPerHour << "\n";
//}
/*****************     Homework  *******************
* 1- Are the following valid variable names and why ?
* 
* Age                                                                     yes- starts with a letter and there is no special character(s) or space(s)
* My-Age                                                                  No- it contains a special character
* My_Age                                                                  yes- starts with a letter and there is no special character(s) or space(s)
* _Age                                                                    yes- starts with an underscore (_) and there is no special character(s) or space(s)    
* 2x                                                                      No- Starts with a number
* X2                                                                      yes- starts with a letter and there is no special character(s) or space(s)
* My name                                                                 No- it contains an empty space
* MyName                                                                  yes- starts with a letter and there is no special character(s) or space(s)
* #Name                                                                   No- it contains a special character
* $Name                                                                   No- it contains a special character
* N@me                                                                    No- it contains a special character
* int                                                                     No- it is a reserved keyword
* float                                                                   No- it is a reserved keyword

*/


/*
2- Write programs to do the following:

****************************************************
Name: Ahmad El-Aina.
Age: 245 Years.
City: Montreal
Country: Canada
Monthly Salary: 10000
Yearly Salary:  100,00 ( use calculations)
Gender: M
Married: 1 (use boolean to output this one).
****************************************************

*/

//int main()
//{ 
//    string name = "Ahmad El-Aina";
//    int age = 245; // In the next notes, we will go over data type sizes. By then, you will understand why assigning int type to an age variable is ridiculous (= a slow program!)
//    string city = "Montreal";
//    string country = "Canada";
//
//    float MonthlySalary = 10000;
//    float YearlySalary = 12 * MonthlySalary;
//    char gender = 'M'; // If you store it in a string = consuming a large amount of memory space to only store a letter ! (ridiculous)
//    bool isMarried = true;
//
//    cout << "****************************************************\n";
//    cout << "Name: " << name << "." << endl << "Age: " << age << "." << endl << "City: " << city << "." << endl << "Country: " << country << "." << endl;
//    cout << "Monthly Salary: " << MonthlySalary << "." << endl;
//    cout << "Yearly Salary: " << YearlySalary << "." << endl;
//    cout << "Gender: " << gender << "."<< endl;
//    cout << "Married: " << isMarried << "." <<endl;
//    cout << "****************************************************\n";
//
//    return 0;
//}


/*
3- Write programs to do the following:

20 +
30 +
10

______________________________

Total = 60
*/

//int main()
//{
//    float FirstNumber = 20;
//    float SecondNumber = 30;
//    float ThirdNumber = 10;
//    float total = FirstNumber + SecondNumber + ThirdNumber;
//
//    cout << FirstNumber << " +\n" << SecondNumber << " +\n" << ThirdNumber << endl << endl << "______________________________\n\n";
//    cout << "Total = " << total << endl;
//
//    return 0;
//}

/*
4- Write programs to do the following:

After 5 years you will be 105 years old.

*/

//int main()
//{
//    int age = 100;
//    int YearsToAdd = 5;  // intitial variable name was AfterYears.. not a very desciptive name.
//     //int finalAge = age + YearsToAdd;
//    cout << "After " << YearsToAdd << " years you will be " << age + YearsToAdd << " years old.\n"; // or include finalAge variable to do the addition.
//
//    return 0;
//}

