

#include <iostream>
#include <string>
using namespace std;
/*
  Write a program asking the user how many person records they'd like to create:
  sample example:

Person 1
*************************************
First Name :
Last Name
Telephone :
Email:
Unit Number
Street Number
Street Name
City :
Country
Postal Code :
*************************************

Person 2
*************************************
First Name :
Last Name :
Telephone:
Email:
Unit Number
Street Number
Street Name
City :
Country
Postal Code :
*************************************

*/

struct stAddress           // every structure will have its own procedure  فَرِّق تَسُد
{
	string UnitNumber;
	int StreetNumber;
	string StreetName;
	string city;
	string country;
	string PostalCode;
};

struct stContactInfo      // every structure will have its own procedure  فَرِّق تَسُد
{
	string telephone;
	string email;
	stAddress address;
};

struct stPersonalInfo     // every structure will have its own procedure  فَرِّق تَسُد
{
	string FirstName;
	string LastName;
	stContactInfo ContactInfo;
};


void ReadAddress(stAddress &address)  
{
	cout << "Enter Unit Number: \n";
	getline(cin, address.UnitNumber);

	cout << "Enter Street Number: \n";
	cin >> address.StreetNumber;
	cin.ignore(1, '\n');

	cout << "Enter Street Name: \n";
	getline(cin, address.StreetName);

	cout << "Enter City: \n";
	getline(cin, address.city);

	cout << "Enter country: \n";
	getline(cin, address.country);

	cout << "Enter Postal Code: \n";
	getline(cin, address.PostalCode);
	cout << endl;
}

void ReadContactInfo(stContactInfo &ContactInfo) 
{
		cout << "Enter Telephone Number: \n";
		getline(cin,ContactInfo.telephone);

		cout << "Enter the Email Address: \n";
		getline(cin, ContactInfo.email);

		ReadAddress(ContactInfo.address);
	
}


void ReadArrayData(int& NumberOfRecords, stPersonalInfo PersonalInfo[100]) // array is ALWAYS passed by ref. Including the & symbolée will cause an error.
{
	cout << "How many personal records would you like to create ?: \n";
	cin >> NumberOfRecords;
	cin.ignore(1, '\n');
	cout << endl;

	for (int i = 0; i < NumberOfRecords; i++)
	{
		cout << "Enter the First Name: \n";
		getline(cin, PersonalInfo[i].FirstName);

		cout << "Enter the Last Name: \n";
		getline(cin, PersonalInfo[i].LastName);

		ReadContactInfo(PersonalInfo[i].ContactInfo);
	}
}

void PrintAddressInfo(const stAddress& address)
{
	cout << "Unit Number: " << address.UnitNumber << endl;
	cout << "Street Number: " << address.StreetNumber << endl;
	cout << "Street Name: " << address.StreetName << endl;
	cout << "City: " << address.city << endl;
	cout << "Country: " << address.country << endl;
	cout << "Postal Code: " << address.PostalCode << endl;
	cout << "************************************* \n \n";
}

void PrintContactInfo(const stContactInfo& ContactInfo)
{
	cout << "Telephone: " << ContactInfo.telephone << endl;
	cout << "Email: " << ContactInfo.email << endl;
	PrintAddressInfo(ContactInfo.address);
}

void PrintArrayData(const int &NumberOfRecords, const stPersonalInfo PersonalInfo[100]) // including & symbol for arrays will cause errors.
{
	for (int i = 0; i < NumberOfRecords; i++)
	{
		cout << "Person" << i + 1 << endl;
		cout << "*************************************\n";
		cout << "First Name: " << PersonalInfo[i].FirstName << endl;
		cout << "Last Name: " << PersonalInfo[i].LastName << endl;
		PrintContactInfo(PersonalInfo[i].ContactInfo);
	}
}

int main()
{
  //Create an array variable (not a normal variable), where each element represents an entire record.
  // This variable will be for the nesting structure ( and never the nested ones ) and create another variable(s) for the other independant structure(s) (not nested) (in case they exist)
	stPersonalInfo PersonalInfo[100]; 
 // The actual number of elements used in the array will be decided later
 // by reading user input.
 //
 // For now, the syntax dictates that we MUST specify the array size
 // immediately at the time of declaration, because an array is a
 // fixed-length data structure.
 //
 // Here, we reserve 100 empty spaces in memory for the array fixed-length data structure.
 // where, again, the user will decide how many elements this array will have.
 //
 // This is a limitation of fixed-length arrays at our current level  of programming.
 //
 // In the future, we will use a variable-length container (such as std::vector)
 // to dynamically determine the number of elements at runtime based on user input.
	int NumberOfRecords = 0; // each element in the array represents a record.

	ReadArrayData(NumberOfRecords, PersonalInfo); // this procedure ALWAYS reads data for: 1- how many elements the array will have 2- store the elements in the array.
	                                              // the array argument 'PersonalInfo' passed into the calling procedure, will be sent along with its memory address
	                                              // this is why the array parameter is ALWAYS passed by ref in the implementing function.
	                                              // also: in this calling procedure, passing the array as "PersonalInfo[100]" is a fatal mitake
	                                               // because: it means that you are refering to the 101th element which DNE and is out-of-bound.


	PrintArrayData(NumberOfRecords, PersonalInfo);
	



	return 0;
}


