
#include <iostream>
#include <string>
using namespace std;
// *******************************THIS IS ONE OF THE MOST IMPORTANT EXAMPLES EVER IN PROGRAMMING *******************************
//            AGAIN- This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.


/* Write a program to output exactly the following:



 **************************************
 First Name: Ahmad
 Last Name: El-Aina
 Age: 150 years old.
 Phone: (512) 555-9999
 **************************************

 **************************************
 First Name: Ana
 Last Name: Duduk
 Age: 30 years old.
 Phone: (530) 111-8888
 **************************************




*/

// AGAIN- This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.

struct stPersonalInfo
{
	string FirstName;
	string LastName;
	unsigned short age;
	string phone;
};

void ReadPersonalInfo(stPersonalInfo &PersonalInfo) // The 1st element of the array is sent here instead of the whole array. This element data type is the same as that of the array
{                                                    // & is added for passing by reference. Parameter (stPersonalInfo PersonalInfo[0]) is WRONG = telling the compiler
													// to create an array containing no elements.
   // Not looking at the sample required output AT ALL.
	cout << "Enter First Name: \n"; 
	getline(cin, PersonalInfo.FirstName);
	cout << endl;

	cout << "Enter Last Name: \n";
	getline(cin, PersonalInfo.LastName);
	cout << endl;

	cout << "Enter Age: \n";
	cin >> PersonalInfo.age;
	cin.ignore(1, '\n');
	cout << endl;

	cout << "Enter Phone: \n";
	getline(cin, PersonalInfo.phone);
	cout << endl << endl;
}

void ReadPersonsInfo(stPersonalInfo PersonalInfo[2]) // //فَرِّق تَسُد //by ref automatically. Including & will result in syntax error.
{
	ReadPersonalInfo(PersonalInfo[0]); //فَرِّق تَسُد// Only pass the 1st element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
	ReadPersonalInfo(PersonalInfo[1]);  //فَرِّق تَسُد// Only pass the 2nd element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
}

void PrintPersonalInfo(stPersonalInfo& PersonalInfo)
{   // only (& nothing else) looking at the hardcoded text in the sample output to imitate it.
	cout << "************************************** \n";
	cout << "First Name: " << PersonalInfo.FirstName << endl;
	cout << "Last Name: " << PersonalInfo.LastName << endl;
	cout << "Age: " << PersonalInfo.age << endl;
	cout << "Phone: " << PersonalInfo.phone << endl;
	cout << "************************************** \n\n";

}

void PrintPersonsInfo(stPersonalInfo PersonalInfo[2]) //فَرِّق تَسُد
{
	PrintPersonalInfo(PersonalInfo[0]); //فَرِّق تَسُد// Only pass the 1st element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes
	PrintPersonalInfo(PersonalInfo[1]);  //فَرِّق تَسُد// Only pass the 2nd element in the array instead of passing the whole array. This is VERY IMPORTANT for avoiding # mistakes

}

int main()
{
	stPersonalInfo PersonalInfo[2];
	
	//Initialization via user input.
	ReadPersonsInfo(PersonalInfo);  // argument passed along with the array's address in memory. //فَرِّق تَسُد

	// Now, the array PersonalInfo[2] initialization is complete.
	PrintPersonsInfo(PersonalInfo);


	return 0; 
}