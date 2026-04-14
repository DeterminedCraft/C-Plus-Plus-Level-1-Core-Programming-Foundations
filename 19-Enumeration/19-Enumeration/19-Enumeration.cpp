
#include <iostream>
using namespace std;

/*
 
 In a program, if you notice that int value(s) will be used to represent something
 instead of using them arithmetically

 then, begin your code by creating an enum user-defined data type where this
 process  assigns each int value, a unique label that it represents so that, from now and on,
 only labels will be used to reference their respective int values that are hard to remember. 
  
 Relying on our memory to know what the number 
 represents = unsustainable = not readable = chances for generating bugs resulting in a long debugging process as 
 our program becomes larger.)
 _______________________________________________________________________________________________

 *Note Alpha: Now, these labels (assigned to integers during creating the enum user-defined data type),
  are frequently used in conditional statements where they're compared to int value(s) regardless of how 
  these integer values come about to be.

         
 ====================================================================================  
 Side Note:
   
 Sometimes in a program, an integer value is used to represent an idea or a state,
 rather than a pure numerical quantity.

 For example:
 - The decided value of 0 to represent "Single"
 - The decided value 1 of to represent "Married"
 - The decided value of 113 to represent "North"
 - The decided value of 57 to represent "East"
 - etc.

 When such raw integer values are used directly in the program (no enum is created),
 the programmer must constantly remember what each number represents.

 * where later, when these values are, for example, compared inside conditional statements,
 the code relies on the programmer’s memory rather than on the code’s clarity,
 making the program harder to read, reason about, and maintain.


 This is precisely where enumerations (enums) become useful:

 Enums are used to associate labels (= meaningful names) with such integral values,
 making the intent and valid states of the program explicit by allowing
 the code to directly work with those labels (associated with the raw numbers) 
 instead of directly working with these raw numbers.
 =========================================================================================
*/


/* Have a look at this line of code that creates an enum user-defined data type:
 ============================================================
 Line1:   enum enDirection { North = 113, South = 226 }; // Immediately think as follows: without enums I will have 
                                                         // to say,   instead of: if(North ==)  ,  if(113 == )  and good luck in remembering what 113 means..
														 // side note: for the case of == a switch..case statement is to be used (but that's discussed later)
 ============================================================

 - `enum` is a keyword used to START creating an enum user-defined data type.

 - `enDirection` is the enum user-defined data type (Just how an int, float, double, string, char, etc. are data types).

 - `North` and `South` are called "enumeration constants" or "enumerators" (As opposed to the term "member variables" in structures)
    that act as labels.

 - Each enumerator is associated with an integral constant value that represents an idea or a state:
	- North  → 113
	- South  → 226

 So far, only a user-defined data type (That is enum) has been created. 
 We haven't even gotten to the stage of declaring a variable yet.

 That would be the next IMPERATIVE step that is totally separate and independant:

 (Point B):
 =======================================================================================
 Line2:   enDirection direction;
          direction = enDirection::South; // 226 is stored in the 'direction' variable.
 =======================================================================================
- When you declare a variable of type `enDirection` (enum user-defined data type),
  the variable is assigned an enumeration constant / enumerator (that is `South`) acting as a label,
  whose underlying integral value (226) is stored in the variable.



         ************************VERY IMPORTANT:****************************************
 
  when you encounter a comment such as:

  Print the following onto the screen:

  Gender: M // As evident, 'Gender' is of char data type. 
  // Now utilize the enum data type 

  Answer: This means that the value of the variable 'Gender' should be initialized to an int value
  so that 
  1- Either 0 or 1 is printed on the screen.
  2- Or Male or Female is printed on the screen ( 1 or 2 depends on the requirement/ what one is asked to do)
  
  now, to do so:
  
  enum enGender {male = 0, female = 1}        // or any other numbers such as 10 for male or 11 for female, etc.
  enGender gender;
  gender = enGender::male  // stores 0

  Now either:
  For Printing the raw integers on the screen:
  
  cout << "Gender: " << gender << endl;

  Or for Printing 'Male' or 'Female' on the screen:
  // work on that

  **************************************************************************************************************** 
*/



// Original Notes: Decide what to do with them later even though I made some corrections

 /* Enumeration (تَعْدَاد) : A user-defined data type.
   --------------------------------------------------------------
   An enumeration (تَعْدَاد) is used to group together several
   related descriptive constant values, each representing a member
   (or label) of that enumeration.

   Each member automatically receives an INTEGER VALUE, starting
   from index 0, unless otherwise specified by the user.
   (Note: but even if the first member on the 0 index is to receive an int value of 0,
          then make it explicit (relying on implicit compiler behavior, is unsafe and unprofessional)

		  Ex: ❌❌ Wrong Pratice ❌❌    : enum enMaritalStatus { Single , Married };
		  Ex: ✅✅ Correct practice ✅✅ : enum enMaritalStatus { Single = 0 , Married = 1 };

   Why?
   ----
  To replace hard-coded numbers with meaningful human-readable NAMES.

   For example:
       Inside a robot navigation system, the integer value 113 might represent the east direction.
       Rather than forcing the developer to remember that 113 corresponds to "East",
       we can simply assign that value to a named constant called East.

       That way, in the future, the code can read:

           if (direction equals East)
           {
               // Move the robot eastward.
           }

       — without ever needing to recall or explicitly mention that 113 was assigned to East.
 

   Examples on Assigning integer values, that will be used in our program, to descriptive constant values:

	Example #1:    In our program, we find out that 566 is equivalent to North, 100 to South, 113 to East, 690 to South.
	___________    Us developers, do not have to memorize each number representing its respective direction.
				   Instead, assign these integer values to their respective related constant member values
   
	   enum EnDirection { North = 566 , South = 100 , East = 113 , West = 690 }; 
	   // The descriptive constant member values being 'North', 'South', 'East', & 'West'.

   So:
	   North = 566   
	   South = 100   
	   East  = 113
	   West  = 690  
   __________________________________________________________________________________________________

   Example #2: 
   -----------
	   enum EnDirection { North , South , East = 113 , West }; // The descriptive constant member values being 'North', 'South', 'East', & 'West'.
	  
   So:
	   North = 0   * Automatically assigned int value.
	   South = 1   * Automatically assigned int value.
	   East  = 113  
	   West  = 114  * Automatically assigned int value.

	   ❌❌ But this is a Wrong Pratice ❌❌
		As you have to make the values explicit (relying on implicit compiler behavior, is unsafe and unprofessional)

		so the ✅✅ Correct practice ✅✅ is:
		enum EnDirection { North = 0 , South = 1 , East = 113 , West }
   __________________________________________________________________________________________________

	Example #3:
   ------------
	enum EnDirection { North, South, East, West };  // The descriptive constant member values being 'North', 'South', 'East', & 'West'.
	  
   So:
	   North = 0    * Automatically assigned int value.
	   South = 1    * Automatically assigned int value.
	   East  = 2    * Automatically assigned int value.
	   West  = 3    * Automatically assigned int value.
  
  ❌❌ But this is a Wrong Pratice ❌❌
		As you have to make the values explicit (relying on implicit compiler behavior, is unsafe and unprofessional)

		so the ✅✅ Correct practice ✅✅ is:
		enum EnDirection { North = 0 , South = 1 , East = 2 , West = 3 }


   Conceptually:
   -------------
   An Enum is like a STRUCTURE, except:
   - A structure groups RELATED VARIABLES of *different* data types.
   - An enumeration groups RELATED CONSTANT DESCRIPTIVE VALUES each represented internally (by default) or explicitly by an integer.

   When you create a variable of an enumeration type, that variable can only hold ONE of the defined members of that Enum data type:

   Example #4:
   --------
   EnDirection Direction; 
   Direction = EnDirection::South;  // stores 112 // The variable 'Direction' can only take one of the four defined enum members.
                                    
*/

enum EnColor { Red = 620 , Blue = 0, Yellow = 3, Pink = 166 };   
enum EnDirection { North = 4, South = 29 , East = 0, West = 2 };
enum EnWeek { Monday = 1, Tuesday = 290, Wednesday = 300, Thursday = 734, Friday = 0, Saturday = 11, Sunday = 23 };
enum EnGender { Male = 0, Female = 1 };
enum EnMaritalStatus { Single = 0, Married = 1 };
enum EnStatus { Success = 0, Failure = 2, Pending = 1 };

int main()
{
	EnColor Color; // Defining a variable 'colors' of the data-type 'EnColors'
	// 'colors' will have an access to all constant-value members under the user-defined 'EnColors' data type. BUT CAN ONLY STORE one of the defined members.
	EnDirection Direction;
	EnWeek Week;
	EnGender Gender;
	EnMaritalStatus MaritalStatus;
	EnStatus ApiStatus;

	Color = EnColor::Red; // stores 620 of the label ::Red
	Direction = EnDirection::South; 
	Week = EnWeek::Thursday;
	Gender = EnGender::Male;
	MaritalStatus = EnMaritalStatus::Single;
	ApiStatus = EnStatus::Success; // stores 0 of the label ::Success

	cout << "'Red' is assigned to the Integer: " << Color << "\n";    // 620    
	cout << "'South' is assigned to the Integer: " << Direction << "\n";  // 29
	cout << "'Thursday' is assigned to the Integer: " << Week << "\n"; // 734
	cout << "'Male' is assigned to the Integer: " << Gender << endl; // 0
	cout << "'Single' is assigned to the Integer: " << MaritalStatus << endl;    // 0 
	cout << "'Success'is assigned to the Integer: " << ApiStatus << endl;    // 0
}


/* 
 If you want to store each direction at the same time, create one variable per direction:
 as shwon below:
*/

//enum EnDirection { North = 566, South = 100, East = 113, West = 690 };
//
//int main()
//{
//	EnDirection NorthDirection = EnDirection::North;
//	EnDirection SouthDirection = EnDirection::South;
//	EnDirection EastDirection = EnDirection::East;
//	EnDirection WestDirection = EnDirection::West;
//
//	cout << "North = " << NorthDirection << endl;
//	cout << "South = " << SouthDirection << endl;
//	cout << "East  = " << EastDirection << endl;
//	cout << "West  = " << WestDirection << endl;
//
//	return 0;
//}


/*  EXTEREMLY IMPORTANT REAL-TIME PROJECT NOTES:
📌 Note: Enumeration Constants (Enumerators)

Enumeration constants (enumerators) ALWAYS act as labels that describe
the integral values they are assigned to.
They provide semantic meaning to otherwise raw integer values and improve
code readability and intent.

An enumerator itself is ONLY a name (identifier);
the actual stored value is ALWAYS an integer.

------------------------------------------------
✅ What an enumerator can be assigned to

Each enumerator can ONLY be assigned an integral value.

1️⃣ Default integers (implicit values)

enum enColor { Red, Blue };
// Red  = 0
// Blue = 1

2️⃣ Explicit integer values

enum enColor { Red = 1, Blue = 2 };

3️⃣ Characters (because characters are integral types)

enum enOperation { Add = '+', Subtract = '-'};

// Character literals are stored as their ASCII integer values

------------------------------------------------

✅ Valid forms of enumerator names (identifiers)

Enumerators must be valid C++ identifiers and therefore can be composed of:

- One letter:
  A, b, etc.

- Multiple letters:
  Add, Multiply, etc.

- Letters + digits (must not start with a digit):
  Add1, Operation2, etc.

- Underscores are allowed:
  Add_1, Add_Operation2, etc.

❌ Enumerators cannot be symbols (+, -, *, /)
❌ Enumerators cannot be strings ("Add")



------------------------------------------------
🔒 Mental Model Summary

Enumerator name  → label (identifier, compile-time)
Enumerator value → integer (what is actually stored)

Enums classify numbers — they do NOT store text.
*/
