
#include <iostream>
using namespace std;

/* The program is as follows:


   ******************************************
   Please choose the number of your country ?
   (1) Jordan
   (2) Tunisia
   (3) Oman
   (4) Egypt
   (5) Iraq
   (6) other
   ******************************************

   Your Choice ?
   2

   Your country is Tunisia
*/

// NOTE: This is not a final solution. The solution presented here is considered 'good enough' for the level we are currently at.
// Eventually the final solution will be presented to you.
// The goal is, again, to keep on practicing.
//-----------------------------------------------------------------------------------------------------------------------------------

/* Solution / Rule:

   If there is an indication that any number used in a program
   represents or *means* something (rather than being used
   arithmetically),

   then the FIRST STEP in coding the program
   is to create an enum user-defined data type.
*/




enum enCountries { Jordan = 1, Tunisia = 2, Oman = 3, Egypt = 4, Iraq = 5, other =6 };

void ReadCountry(int& c) // passing by ref.
{
	cout << "Your choice ? \n";
	cin >> c;
	cout << endl;
}

void DisplayInstructionMenu()
{
	cout << "******************************************\n";
	cout << "Please choose the number of your country ? \n";
	cout << "(1) Jordan" << endl;
	cout << "(2) Tunisia" << endl;
	cout << "(3) Oman" << endl;
	cout << "(4) Egypt" << endl;
	cout << "(5) Iraq" << endl;
	cout << "(6) other" << endl;
	cout << "******************************************\n \n";
}

enCountries CastingFromIntToEnum(int c) // pass by value
{
	return (enCountries)c; // returns the numerical value entered by the user that is now of data type enCountries 
}

string DisplaySelectedCountry(const enCountries& countries) // by const ref. since we are comparing values.
{
	switch (countries) // comparing the SINGLE numerical value entered by the user that is now of type enCountries to the enumeration constants (enumerators) acting as labels
	{
	case enCountries::Egypt: // ,to the constant value 'hiding' behind the label.
		return "Egypt";
		break;
	
	case enCountries::Iraq: // enCountries::Iraq = 5
		return "Iraq";
		break;

	case enCountries::Jordan:
		return "Jordan";
		break;

	case enCountries::Oman:
		return "Oman";
		break;

	case enCountries::Tunisia:
		return "Tunisia";
		break;

	case enCountries::other:
		return "other";
		break;
	
    default:
		return "Invalid number entered";

	}
}

int main()
{
	DisplayInstructionMenu();
	enCountries countries;
	// Initializting this variable via reading user-input:
	// This consists of 2 steps since enums can not be initialized in a straight-forward manner:

	// step 1:
	int c;
	ReadCountry(c);
	// variable c is now initialized.

	// step 2: store the value of c in variable 'countries'.
	// But these two belong to 2 different data types. Casting (explicit conversion) is to be performed. Implicit conversion will not work *
	countries = CastingFromIntToEnum(c); // variable 'countries' is storing the numerical value entered by the user that is, now, of data type enCountries.

	// Now, it will be compared to the enumeration constants (enumerators) that act as labels.
	string selectedCountry = DisplaySelectedCountry(countries);

	cout << "Your country is: " << selectedCountry << endl;


	return 0;
}




