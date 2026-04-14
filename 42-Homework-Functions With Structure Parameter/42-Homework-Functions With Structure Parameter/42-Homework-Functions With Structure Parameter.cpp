

#include <iostream>
#include <string>
using namespace std;


/* Output the below information, exactly as it appears, utilizing Structures.

 *************************************
  Name:
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

struct stAddress
{
    string UnitNumber; // it could be alpha numerical.
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

struct stUserInfo
{
    string name;
    stContactInfo ContactInfo;
};
// Remember: Each structure will have its own dedicated procedure for initialization via user input. فَرِّق تَسُد


void ReadAddress(stUserInfo& Person1)
{
    cout << "Enter UnitNumber: \n";
    getline(cin, Person1.ContactInfo.address.UnitNumber);
    cout << endl;

    cout << "Enter Street Number: \n";
    cin >> Person1.ContactInfo.address.StreetNumber;
    cin.ignore(1, '\n');
    cout << endl;

    cout << "Enter Street Name: \n";
    getline(cin, Person1.ContactInfo.address.StreetName);
    cout << endl;

    cout << "Enter City: \n";
    getline(cin, Person1.ContactInfo.address.city);
    cout << endl;

    cout << "Enter Country: \n";
    getline(cin, Person1.ContactInfo.address.country);
    cout << endl;

    cout << "Enter Postal Code: \n";
    getline(cin, Person1.ContactInfo.address.PostalCode);
    cout << endl;
}


void ReadContactInfo(stUserInfo& Person1)
{
    cout << "Enter Telephone: \n";
    getline(cin, Person1.ContactInfo.telephone);
    cout << endl;

    cout << "Enter email: \n";
    getline(cin, Person1.ContactInfo.email);
    cout << endl;

    ReadAddress(Person1);

}

void ReadUserInfo(stUserInfo& Person1)
{
    cout << "Enter Name: \n";
    getline(cin, Person1.name);
    cout << endl;

    ReadContactInfo(Person1);
}


void PrintUserInfo(stUserInfo Person1)
{
    cout << "*************************************\n";
    cout << "Name: " << Person1.name << endl;
    cout << "Telephone: " << Person1.ContactInfo.telephone << endl;
    cout << "Email: " << Person1.ContactInfo.email << endl;
    cout << "Unit Number: " << Person1.ContactInfo.address.UnitNumber << endl;
    cout << "Street Number: " << Person1.ContactInfo.address.StreetNumber << endl;
    cout << "Street Name: " << Person1.ContactInfo.address.StreetName << endl;
    cout << "City: " << Person1.ContactInfo.address.city << endl;
    cout << "Country: " << Person1.ContactInfo.address.country << endl;
    cout << "Postal Code: " << Person1.ContactInfo.address.PostalCode << endl;
    cout << "*************************************\n\n";
}

int main()
{
    stUserInfo Person1;

    ReadUserInfo(Person1);
    // Person1 member variables are now initialized via user input.
    PrintUserInfo(Person1);



    return 0;
}



// Note: How to start solving this type of example?
//
// Answer:


