
#include <iostream>
using namespace std;

/* Enums Mental Model:
   
   After creating an enum user-defined data type,
   the next natural & IMPERATIVE step is to declare 
   a variable of that enum type.
   
   Where Initialization can be achieved in one of two ways:

   A) Direct initialization:
	  - The enum variable is initialized directly by assigning
	  it to an enumeration constant (enumerator).

   B) Initialization via reading user input:
	  - User input is first read as an integer.
      - The integer is then explicitly cast to the enum type.
      - The resulting enum value (constructed from the integer)
        is assigned to the enum variable.
      - The initialized enum variable is then compared against the
        enumeration constants (enumerators), which act as semantic labels
        in switch statements.

		One cannot directly compare two different data types 
		(e.g., a user-entered int value compared to an enum value).
        Moreover, the compiler does not perform implicit conversions to or from 
		a user-defined data type, such as an enum.

*/


//A: Direct initialization:
enum enMaritalStatus {single = 0, married = 1};
// so far, we've done nothing but create a data type that is enum (enum user-defined data type). 


int main()
{
	enMaritalStatus MaritalStatus; // Fixed imperative step. ALWAYS.

    // Direct initialization: (assigning it a numeration constant/ numerator acting as a label).
	MaritalStatus = enMaritalStatus::single; 
	// the variable 'MaritalStatus' stores the value 0.
	// and its type remains 'enMaritalStatus'.

}
//----------------------------------------------------------------------------------------------


//B:  Initialization via reading user input:

enum enColor { red =1, blue = 2, green = 3, yellow = 4 }; // again, red is an enumeration constant/ enumerator acting as a label ( just like the rest of the typed colors)
// so far, we've done nothing but create a data type that is enum (enum user-defined data type). 

void ReadColor(int &c)
{
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	cout << endl;
}  
 
enColor CastIntegerToEnum(int c) //passing by value.
{
	return (enColor)c; // convert the c from int to enColor data type and lastly store it in 'color' to achieve initialization in main.
}

string ComparingUserEnteredValueToEnumerators(const enColor &color)  // receiving the enum data type numerical value the user entered.
{
	switch (color)
	{
	case enColor::blue: // the parameter already declared variable color of enColor data type.
		return "Blue";
		break;

	case enColor::red:
		return "Red";
		break;

     // populate the rest of the cases


	default:
		return "The number you entered does NOT represent any color.";
	}
}


int main()
{
	enColor color; // Fixed imperative step. ALWAYS.

	// Initialization of the variable 'color' via reading user input:
    // (to be used as the condition in a switch statement,
    //  where it is compared against ALL of the enumeration constants
    //  (enumerators) acting as labels).

	int c; // First declare an int variable (as one can NOT initialize 'color' straight-forwardly from by cin >>)
	ReadColor(c);
	// c is now initialized

	// make c the value of 'color':

	// but first convert the data type of c from int to enColor. (Farrik Tasud)
	color = CastIntegerToEnum(c); // using implicit conversion as in (color = c) isn't going to work as compiler 'will not know how to convert'
    // The initialization of the variable 'color' has finally been achieved via user-input ( = a number of enColor user-defind data type).

	//Important: 
	// Now, [color] will be compared to the enumeration constants / enumerators that act as labels which are: enColor::red , enColor::blue , enColor::green, enColor::yellow 
	// and these enumerators come about as the result of utilizing enums (creating enum user-defined data type)
	// as opposed to comparing variable [color] directly to the int values of 1 2 3 and 4 that represent colors.
	
	
	
	// Now, Why enums are useful ??
	// because without enums,   'color' (the user input) will be compared directly to the int values of 1 2 3 and 4 which
	// means we are purely relying on our memory to know what the number
	// represents = unsustainable = not readable = chances for generating bugs resulting in a long debugging process as
	//our program becomes larger.
	
	// new note added Dec 28th:

	string ChosenColor = ComparingUserEnteredValueToEnumerators(color); // passing the user-entered numerical value that is converted to enColor data type.


	return 0;
}


// Explaining: color = (enColor)c;

// Compiler-level reasoning:
//
// 1️⃣ The expression '(enColor)c' is evaluated first.
//    - 'c' is an integer value entered by the user.
//    - '(enColor)' is an explicit C-style cast.
//    - This instructs the compiler to explicitly convert the integer value
//      of 'c' into the enum user-defined data type 'enColor'
//      (no validation against enum members is performed).
//
// 2️⃣ After the explicit cast is complete,
//    the resulting enum-typed value is assigned to the variable 'color',
//    which is declared as type 'enColor'.


/*
 Will implicit conversion lead to a compilation error?
 ✅ Yes.

 Is it because a user-defined data type is used?
 ✅ Exactly.

*/
//*************************************************************************************************************************************
//*********************************** NO COMMENTS for B: Enums Initialization via reading user input*********************************** 
//*************************************************************************************************************************************

enum enColor { red = 1, blue = 2, green = 3, yellow = 4 };

void ReadColor(int& c) 
{
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	cout << endl;
}

enColor CastIntegerToEnum(int c) 
{
	return (enColor)c;
}

string ComparingUserEnteredValueToEnumerators(const enColor& color)
{
	switch (color)
	{
	case enColor::red:
		return "Red";

	case enColor::blue:
		return "Blue";

	case enColor::green:
		return "Green";

	case enColor::yellow:
		return "Yellow";

	default:
		return "Invalid color value";
	}

}

int main()
{
	enColor color; 

	int c;
	ReadColor(c); 

	color = CastIntegerToEnum(c);

	string ChosenColor = ComparingUserEnteredValueToEnumerators(color);

	cout << "Chosen Color: " << ChosenColor << endl;

	return 0;
	// Note: Invalid user inputs for ranges or characters handling is to be added (Will see that in the upcoming lessons).
}