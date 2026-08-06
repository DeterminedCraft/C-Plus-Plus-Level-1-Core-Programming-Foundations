

#include <iostream>
#include <string>
using namespace std;

// *******************************THIS IS ONE OF THE MOST IMPORTANT EXAMPLES EVER IN PROGRAMMING *******************************
//            AGAIN- This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.


/* Output the below information, exactly as it appears:


 *************************************
  First Name:
  Last Name
  Telephone:
  Email:
  Unit Number
  Street Number
  Street Name
  City:
  Country
  Postal Code:
 *************************************
 

 *************************************
  First Name:
  Last Name:
  Telephone:
  Email:
  Unit Number
  Street Number
  Street Name
  City:
  Country
  Postal Code:
 *************************************
   



 */
//AGAIN - This is NOT the final solution as more advanced but still very basic concepts will be introduced in the upcoming lessons.

struct stAddress
{
	string UnitNumber;
	int StreetNumber;
	string StreetName;
	string city;
	string country;
	string PostalCode;
};

struct stContactInfo
{
	string telephone;
	string email;
	stAddress address;
};

struct stPersonalInfo
{
	string FirstName;
	string LastName;
	stContactInfo ContactInfo;
};
// all member variables above are grouped in the logical sequence you desire and NEVER according to the output requested in the question.
 
void ReadAddress(stAddress &address)
{
	cout << "Enter Unit Number: \n";
	getline(cin, address.UnitNumber);
	cout << endl;

	cout << "Enter Street Number: \n";
	cin >> address.StreetNumber;
	cin.ignore(1, '\n');
	cout << endl;

	cout << "Enter Street Name: \n";
	getline(cin, address.StreetName);
	cout << endl;

	cout << "Enter City: \n";
	getline(cin, address.city);
	cout << endl;

	cout << "Enter Country: \n";
	getline(cin, address.country);
	cout << endl;

	cout << "Enter Postal Code: \n";
	getline(cin, address.PostalCode);
	cout << endl;
}

void ReadContactInfo(stContactInfo& ContactInfo) // each structure will have its own dedicated reading procedure.
{
	cout << "Enter Telephone: \n";
	getline(cin, ContactInfo.telephone);
	cout << endl;

	cout << "Enter Email: \n";
	getline(cin, ContactInfo.email);
	cout << endl;

	ReadAddress(ContactInfo.address); // you've to mention .address so that the SRP is not violated.
}

void ReadPersonalInfo(stPersonalInfo &PersonalInfo) // the element of the array is received. Its data type is the same as that of the array
{                                                   // and in the params, one can't name it PersonalInfo[0 or 1]. Beacuse I'm receiving an element and not an array.
	cout << "Enter First Name: \n";
	getline(cin, PersonalInfo.FirstName);
	cout << endl;

	cout << "Enter Last Name: \n";
	getline(cin, PersonalInfo.LastName);
	cout << endl;

	ReadContactInfo(PersonalInfo.ContactInfo); // Passing this argument so the the SRP is not violated. Also, ContactInfo is sent (its data type 
}                                             // is stContactInfo as clearly shown inside the structure-

void ReadPersonsInfo(stPersonalInfo PersonalInfo[2])
{
	ReadPersonalInfo(PersonalInfo[0]); //this is the 0index where the first element is that represents the entire record that will be populated. 
	ReadPersonalInfo(PersonalInfo[1]); //this is the 0index where the first element is that represents the entire record that will be populated. 

	
}

void PrintPersonalInfo(const stPersonalInfo &PersonalInfo) // the parameter received an element in the array. 
{                                                          // 'const' is for avoiding any accidental change of variable's values in main()
	cout << "************************************* \n";
	cout << "First Name: " << PersonalInfo.FirstName << endl;
	cout << "Last Name: " << PersonalInfo.LastName << endl;
	cout << "Telephone: " << PersonalInfo.ContactInfo.telephone << endl;
	cout << "Email: " << PersonalInfo.ContactInfo.email << endl;
	cout << "Unit Number: " << PersonalInfo.ContactInfo.address.UnitNumber << endl;
	cout << "Street Number: " << PersonalInfo.ContactInfo.address.StreetNumber << endl;
	cout << "Street Name: " << PersonalInfo.ContactInfo.address.StreetName << endl;
	cout << "City: " << PersonalInfo.ContactInfo.address.city << endl;
	cout << "Country: " << PersonalInfo.ContactInfo.address.country << endl;
	cout << "Postal Code: " << PersonalInfo.ContactInfo.address.PostalCode << endl;
	cout << "************************************* \n \n";

}

void PrintPersonsInfo(stPersonalInfo PersonalInfo[2])
{
	PrintPersonalInfo(PersonalInfo[0]);  // this is the 0index where the first element is that represents the ENTIRE record that will be printed out.
	PrintPersonalInfo(PersonalInfo[1]);  // this is the 1index where the second element is that represents the ENTIRE record that will be printed out.
}

int main()
{
	stPersonalInfo PersonalInfo[2]; // declaring an array variable that holds 2 elements. Each element represents an entire record.

	// Initializing via user input:
	ReadPersonsInfo(PersonalInfo); // passing the array. The argument also includes the array's memory address.

	// Now, the array PersonalInfo[] initialization is complete.
	PrintPersonsInfo(PersonalInfo); // passing the array. The argument also includes the array's memory address.


	return 0;
}