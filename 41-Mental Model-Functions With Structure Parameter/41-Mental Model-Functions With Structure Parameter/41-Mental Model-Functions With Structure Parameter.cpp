
 
#include <iostream>
#include <string>
using namespace std;

/* Mental Model:

   In main(), if the variables that are to be declared are logically related,
   then they must be declared as member variables inside one or more structures.
   (and when creating structures, ALWAYS ask yourself if enumS can be created first on top,
    this is the only correct approach (Note 'Alpha' on the very buttom, is a continuation on this note but
    for now keep on reading the below lines)

   The user-defined data type (structure) that will be used to declare the
   variable(s) inside main() is:
     - EITHER the structure that *nests* other structures
       (in which case the nested structures are NOT used as data types
        for declaring variables in main()),
     - OR a structure that is *independent* (not nesting and not nested),
       in which case an additional variable is declared for each independent group.
   
   **In main(), the declared variable is either:
   *  - A normal variable. (Will be used to initialize one record).
   *  - An array variable. (Will be used to initialize more than one record). // arrays will be explained in the upcoming lessons.
   
   In main(), structure member variables can be initialized:
   1- Directly.
      or
   2- Via user input:
      In this case, create ONE dedicated input procedure for EVERY structure
      — فَرِّق تَسُد (Divide & Conquer) — whether the structure is nesting
        or nested.

        Even for printing, each structure will have its own dedicated printing procedure.

      Each structure variable is to be passed as THE ONLY argument to
      its corresponding called input procedure (pass-by-reference for the parameters).
      
      * If an array variable is declared, then each element inside the array represents
      * an entire record.
      * 
      * Where the strategy of divied and conquer has to be PROPERLY applied by maximizing it.
      * 
      * Ex: Inside main():    
      *  ReadRecordS(..)   // calling function
      * 
      * Where the implementation is:

        void ReadRecordS(..) فَرِّق تَسُد
        {
          ReadFirstRecord(x[0]); فَرِّق تَسُد // calling function
          ReadSecondRecord(x[1]); فَرِّق تَسُد // calling function
        }

        and the same structure applying for printing procedures as well (with arrays)
      * 
      * 
      This is an example:

*/


/* -------------------------
   Structures (defined outside main)
------------------------- */

struct stAddress
{
    string city;
    string street;
};

struct stPerson
{
    string name;
    unsigned short age;
    stAddress address; // nested structure
};

/* -------------------------
   Dedicated Input Procedures
------------------------- */

// Input procedure for stAddress
void ReadAddress(stAddress& addr) // Instead of (stPerson &person) which is also correct
{                                 // but makes accessing the member variables in stAddress longer: [person.address.city] 
                                  // (procedure first accesses stPerson structure & then the 2nd stAddress structure (violating SRP)
    cout << "Enter City: ";       // of accessing the stAddress structure directly.
    getline(cin, addr.city);     // This follows the Single Responsibility Principle
                                // and فَرِّق تَسُد (Divide & Conquer).

    cout << "Enter Street: ";
    getline(cin, addr.street);
}

// Input procedure for stPerson
void ReadPerson(stPerson& person)
{
    cout << "Enter Name: ";
    getline(cin, person.name);

    cout << "Enter Age: ";
    cin >> person.age;
    cin.ignore(1, '\n'); // clear buffer

    // Read nested structure using its own procedure
    cout << "\n-- Now enter address information --\n";
    ReadAddress(person.address);
}

/* -------------------------
   Display Procedures (Optional, for demonstration)
------------------------- */

void PrintAddress(const stAddress& addr)
{
    cout << "City: " << addr.city << endl;
    cout << "Street: " << addr.street << endl;
}

void PrintPerson(const stPerson& person)
{
    cout << "\n--- Person Information ---\n";
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;

    cout << "\n--- Address ---\n";
    PrintAddress(person.address);
}

/* -------------------------
   MAIN PROGRAM
------------------------- */

int main()
{
    // Declare structure variable(s) in main()
    stPerson person; // or if you want to fill the records for 2 persons or more, then use an array: stPerson personS[2] 
    // OR the unoptimized way of doing it:    stPerson person1;  stPerson person2; etc.  (Not good = unoptimized. use an array instead).

    // Pass each structure variable as the only parameter
    // to its dedicated input procedure
    ReadPerson(person);

    // Demonstration output
    PrintPerson(person);

    return 0;
}

/* ============================================================
  NOTE 'Alpha' — Enums & Structures (Correct Design Order)
  ============================================================

  When designing a structure, ALWAYS ask yourself first:
  👉 "Can any of the structure’s member variables be better
      represented as an enum?"

  ------------------------------------------------------------
  Correct & Required Rule
  ------------------------------------------------------------

  An enum MUST be declared BEFORE any structure that uses it.

  - Enums can be used as member types inside structures.
  - Structures CANNOT be used inside enums.
  - Attempting to use an enum inside a structure BEFORE the enum
    is declared will result in a COMPILER ERROR.
    (This is required by the C++ type system.)

  ------------------------------------------------------------
  Why enums should be defined first
  ------------------------------------------------------------

  Defining enums first allows the structure to:
  - Express intent clearly (states, categories, options)
  - Restrict values to a known, valid set
  - Improve readability and maintainability
  - Prevent invalid or magic-number values

  ------------------------------------------------------------
  Access Through Structure Variables
  ------------------------------------------------------------

  Once an enum is properly defined and used as a member variable
  inside a structure, a variable of that structure type can
  access ALL of its member variables, including those whose
  type is an enum.

  Structure member variables may be of any type, such as:
  - int, float, double
  - char, wchar_t
  - string
  - another struct
  - enum (user-defined enum type)

  ------------------------------------------------------------
  Mental Model
  ------------------------------------------------------------

  Enums define the *allowed states or categories*.
  Structures group and organize related data.

  Therefore:
  👉 Enums define meaning first
  👉 Structures consume that meaning
*/
