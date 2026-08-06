
#include <iostream>
using namespace std;


// NOTE: This is not a final solution. The solution presented here is considered 'good enough' for the level we are currently at.
// Eventually the final solution will be presented to you.
// The goal is, again, to keep on practicing.



/* The program is as follows:
   
   ******************************************
   Please choose the number of your favourite color ?
   (1) Red
   (2) Blue
   (3) Green
   (4) Yellow
   ******************************************
   
   Your Choice ?
   2

   (and the output is that your console will change color to the one you choose.)
*/

// NOTE: This is not a final solution. The solution presented here is considered 'good enough' for the level we are currently at.
// Eventually the final solution will be presented to you.
// The goal is, again, to keep on practicing.


/* Solution:
   This program uses numbers that represent something (color in our case).
   Therefore, START your program by creating an enum user-defined data type
   , and then go from there.

*/

enum enColors { red = 1, blue = 2, green = 3, yellow = 4 }; // without enums, one has to directly use these integers in the code 
                                                           // where we have to remember what they represent (relying on our memory is not reliable).
void PrintUserInstructions()
{
	cout << " ******************************************\n";
	cout << "Please choose the number of your favourite color ? \n";
	cout << " (1) Red" << endl;
	cout << " (2) Blue" << endl;
	cout << " (3) Green" << endl;
	cout << " (4) Yellow" << endl;
	cout << " ******************************************\n\n";
}


void ReadColors(int &c) // pass by reference 
{
	cout << "Your Choice ? \n";
	cin >> c;
}

enColors CastFromIntToEnColors(int c) // pass by value. // hint:  you should start typing enColor (= you should realize, beforehand, that a value of data type enColor is retuned)
{
	return (enColors)c; // c value is now a number that is of data type enColors.
}


 
void ChangeConsoleColor(const enColors &SelectedColor) // passing by ref.   // passing by const ref. since we are doing comparisons.
{ 
	switch(SelectedColor)
	{
    case enColors::red:
		 system("color 4F");
		 break;

	case enColors::blue:
		system("color 1F");
		break;

	case enColors::green:
		system("color 2F");
		break;

	case enColors::yellow:
		system("color 6F");
		break;

	default:        // a fall-back to blue, if the entered number does not represent any color
		system("color 1F"); 


	}
}

int main()
{
	enColors colors; // declaring a variable of the enum user-defined data type.
	
	PrintUserInstructions();
	// Intializing the variable 'colors' via user-input:
		// step #1: (since enums can not be initialized, in a straight-forward manner, via user-input):
	int c;
	ReadColors(c);
	// c is now initialized.

	    // step #2: store the value of c in the variable 'colors'
	              // However, c is of type int & 'color' is of type enColor.
	              // *Therefore, casting is required (conversion from int to enColor).
	colors = CastFromIntToEnColors(c); 
	// The variable 'colors' has finally been initialized (with the numerical value that the user entered that is now of enColors data type)

	// Now, the natural progression of writing code is:
		//This 'colors' variable will be compared to the enumeration constants/enumerators acting as labels.
	     // And this also happens to be what this problem requires for solving it !

	ChangeConsoleColor(colors); // remember!!: the passed argument in this called function is the user entered numerical value that we converted to enColors data type.



	return 0;
}











