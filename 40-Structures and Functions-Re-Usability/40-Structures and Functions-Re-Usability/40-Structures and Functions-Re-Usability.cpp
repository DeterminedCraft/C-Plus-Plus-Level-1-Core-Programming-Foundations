
#include <iostream>
#include <string>
using namespace std;

/*
   Mixing Structures & Functions
   
*/

  // Optimized code denotes:
//
//   1- Fewer lines of code.
//   2- Better logic.
//      ( Better logic, itself, usually results in fewer lines of code and fewer potential bugs.)
/*
 This lesson will save efforts in programming, maximizing readability & Re-Usability.
 The fewer the lines of code in a program are, the less bugs there are  & more enjoyable 
 programming becomes.

 Today's lesson is on mixing Structures & Functions = Re-usability 

*/


// Example on How Mixing Functions/Procedures & Structures = Maximizing Re-Usability.
    // Begin by collapsing all curly braces outside of main() & try comprehending the code.

struct stInfo
{
    string name;
    unsigned short UnitNumber;
    string PhoneNumber;
};

void ReadInfo(stInfo &info) // ANY other name could be used here; matching names is simply a stylistic choice.
{                          

    cout << "Enter Your name: \n";
    getline(cin, info.name);
    cout << endl;

    cout << "Enter your UnitNumber: \n";
    cin >> info.UnitNumber;
    cin.ignore(1, '\n');    // Clear leftover newline before next getline
    cout << endl;

    cout << "Enter your phone number: \n";
    getline(cin, info.PhoneNumber);
    cout << endl;

    // Done reading user inputs and stores them inside the structure variable declared in main().
}   

void PrintInfo(stInfo info) // since 'info' is the name you chose, in the reading procedure above.
{                           // then, also choose 'info' (it could be any other name) for consistency & readability purposes.
    cout << "------------------\n";
    cout << "User name is: " << info.name << endl;
    cout << "Unit Number is: " << info.UnitNumber << endl;
    cout << "Phone Number is: " << info.PhoneNumber << endl;
    cout << "------------------\n";

}


int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);  //Initialization of declared main() variables (visit lesson #39: Mental Model)
    PrintInfo(Person1Info);
}
    /*As you can now see - This is clean, clear, & an optimized code for anyone who would re - visit this code in future
                        especially you in, where you would remember quickly what you've done.
     
      So, as you can see:
      📌 Why We Use Structures ?
         
         Simply for readability, maintainability, and code optimization
         For example: 
     
     ******************** Example 1 ******************** :
     
      // Without struct:
      void ReadInfo(string name, unsigned short unit, string phone);

     // With struct (recommended)
     void ReadInfo(stInfo& info);


     ******************** Example 2 ******************** :
     
      // Without struct (20 parameters):
      void ReadInfo(
       string fname, string lname, int age, string email,
       string address, string city, string country,
       string phone, string postalCode, string occupation,
       string company, string nationality, string gender,
       string maritalStatus, string emergencyContactName,
       string emergencyContactPhone, string idNumber,
       string taxNumber, string birthPlace, string notes
   );
        Where This becomes:

                 - unreadable
                 - unmaintainable
                 - error-prone
                 - impossible to refactor cleanly.

     // HOWEVER, with struct (recommended):
      void ReadInfo(stPersonInfo& info);

      **THEREFORE, whenever you want to declare variables in main() that are related amongst each other, then instead
      declare them as member variables in a user-defined data type that is a structure.  
      (related amongst each other so that a structure is justified.. we will see that as we go on)

      Note, this explanation is better than the one below, which is:
      
      [Whenever, inside main(), you find yourself calling a function or procedure with multiple RELATED parameters (two or more),
      that logically belong together, group these parameters into a structure — but only when using a structure is logically justified.
      If the parameters form multiple logical groups, create more than one structure.
*/

  //------------------------------------------------------------------------------------------------------------------------------------------------------
 //-------------------------------------------------------------------------------------------------------------------------------------------------------

/* 
Now :
Re-usability means writing functions,procedures, structures, classes, modules, and libraries —
in a way that allows them to be used many times, anywhere in the program, whenever needed — without rewriting their associated lines of code.

Example: */
struct stInfo
{
    string name;
    unsigned short UnitNumber;
    string PhoneNumber;
};

void ReadInfo(stInfo &info) 
{

    cout << "Enter Your name: \n";
    getline(cin, info.name);
    cout << endl;

    cout << "Enter your UnitNumber: \n";
    cin >> info.UnitNumber;
    cin.ignore(1, '\n'); 
    cout << endl;

    cout << "Enter your phone number: \n";
    getline(cin, info.PhoneNumber);
    cout << endl;

    // Done reading user inputs and stores them inside the structure variable declared in main().
}

void PrintInfo(stInfo info)
{                           
    cout << "------------------\n";
    cout << "User name is: " << info.name << endl;
    cout << "Unit Number is: " << info.UnitNumber << endl;
    cout << "Phone Number is: " << info.PhoneNumber << endl;
    cout << "------------------" << endl << endl;
}


int main()
{
    stInfo Person1Info;
    ReadInfo(Person1Info);  
    PrintInfo(Person1Info);

    // Now, assume we want to add a second person.
    // This is where re-usability shines:
    stInfo Person2Info;
    ReadInfo(Person2Info);
    PrintInfo(Person2Info);
    // Only three additional lines of code!

    // Without using the combination of: functions/procedures & structure(s),
    // you would need separate variables for every field (name, unit, phone),
    // repeated again and again for every person.
    // This quickly becomes unreadable, unmaintainable spaghetti code
    // that takes far longer to write and is extremely easy to break.

    // By combining Functions/Procedures with Structures,
    // we reduce the program to a very small and clean set of reusable building blocks.
    // The entire program becomes simple, readable, and fast to write.
    
    // Let's add a third person:
    stInfo Person3Info;
    ReadInfo(Person3Info);
    PrintInfo(Person3Info);
    // And if we needed 10 more people, it would take less than a minute!
    // Without using Structures + Functions/Procedures, this task would take forever.
    // This is why some programmers take a week to finish something,
    // while others finish the same task in an hour or less.

     // Note: Later, we will use loops to handle multiple persons more efficiently.
}

/*  Last very important note :
*   What happens if instead of:  void ReadInfo(stInfo &info)
* 
*   where passing is by reference, you remove '&' so that you pass by value ?
    as in:
*   void ReadInfo(stInfo info) ?
* 
*   Short Answer: All Person#Info in main() remain empty:  
    
     stInfo Person1Info remains empty. 
     stInfo Person2Info remains empty. 
     stInfo Person3Info remains empty.

*   Try it !
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
*/




















