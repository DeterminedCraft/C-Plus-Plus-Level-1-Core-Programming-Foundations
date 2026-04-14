

#include <iostream>
using namespace std;

/* An array can also be of a user-defined structure data type.
* 
*  Just EXACTLY how an array can be of an integer data type or float or double 
*  or string or character or boolean or wide character.
* 
*/
   

/* So lets us start with the following code : -
   Before examing the code:

   1- Expand the Structure.
   2- Collapse the main().

 */

struct stInfo
{
	string FirstName;
	string LastName;
	unsigned short age;
	string telephone;
};
// Will need to fill the record for 2 persons:

int main()
{
	stInfo persons[2]; // CRUCIAL: Instead of the unoptimized old approach    stInfo Person1, Person2;

	// Now, will initialize directly: populating the array with 2 elements.
	// Each element represents an entire record.

	// For the first person
	persons[0].FirstName = "Ahmad";
	persons[0].LastName = "El-Aina";
	persons[0].age = 150;
	persons[0].telephone = "345-665-7700";

	// For the second person
	persons[1].FirstName = "Ana";
	persons[1].LastName = "Nunu";
	persons[1].age = 90;
	persons[1].telephone = "676-912-5390";

	// In the future - We could add a third person (Where you change the array to stInfo persons[3])
	//and you could continue adding as many persons/ records as needed.

	cout << persons[1].FirstName << " is the first name in the second record" << endl;
	

	return 0;
}