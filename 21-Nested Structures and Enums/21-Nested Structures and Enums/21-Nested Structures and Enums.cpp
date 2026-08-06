
/* Nested Structures & Enums:

   Structures and enums greatly:

   1. Simplify programming.
   2. Organize code, making it easy to read and maintain.
   3. Make you significantly faster than the average developer.

   Condition:
   ----------
   This efficiency is only achieved when variables are given
   descriptive and meaningful names (the indispensable basic rule).

   When your program is properly organized using structures and enums,
   a task that might take an average developer more than a day
   can often be completed in just a few hours.

   Note:
   -----
   Structures and enums are fundamental components of data structures—
   a discipline focused on organizing and partitioning data efficiently
   so programs remain smooth, clean, and easy to maintain.

   The example below demonstrates a practical and standard use of
   nested structures combined with enums:
        
        A quick note: enums are used here as we have the REQUIREMENT of printing out an integer (s)
                      that happens to mean something.
*/

/* This is the example: Output the following exactly as it appears:

----------------------------------------
First Name: Ayman
Last Name: Eldu
Phone Number: (602) 629-8654
Email Address: random@gmail.com
Apartment Number: 016
Street Number: 6255
Street Name: Van Random Ave
City: San francisco
Province: California
Postal Code: R1R 2Z9
Country: United States of America
Marital Status ( Single 0 / Married 1): 0
Gender (Male 0 / Female 1): 0
----------------------------------------

*/

#include <iostream>
using namespace std;


enum enMaritalStatus { Single, Married };
enum enGender { Male, Female};
// so far we have created user-defined enum data types. But, not yet defined their own variables.

struct stAddress
{
    string ApartmentNumber; // changed from unsigned short to string (C++ treats numbers starting with 0 as octal (base-8)).
    string StreetNumber;
    string StreetName;
    string PostalCode;
    string city;
    string province;
    string country;
};
// so far we have have created a user-defined structure data type called stAddress. But not assigned it to its variable yet.

struct stContactInfo
{
    string PhoneNumber;  // Use strings for phone numbers.
    string email;
    stAddress address;
};

struct stPerson
{
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGender Gender;
};
// so far, we have have created the data type, but not assigned it to its variable yet.


int main()
{
    stPerson Person1; // with this ONE VARIABLE inside main (fantastic!), I will fill out all the information.
                      // with Person1 dot ONLY I can get to any piece of information regarding that SPECIFIC person THROUGH The stPerson structure ONLY
                      // and that is a practical demonstration/ explanation of the comment on top.
   Person1.FirstName = "Ayman";
   Person1.LastName = "Eldu";
   Person1.ContactInfo.PhoneNumber = "(602) 629-8654";
   Person1.ContactInfo.email = "random@gmail.com";
   Person1.ContactInfo.address.ApartmentNumber = "016";
   Person1.ContactInfo.address.StreetNumber = "6255";
   Person1.ContactInfo.address.StreetName = "Van Random Ave";
   Person1.ContactInfo.address.city = "San francisco ";
   Person1.ContactInfo.address.province = "California ";
   Person1.ContactInfo.address.PostalCode = "R1R 2Z9";
   Person1.ContactInfo.address.country = "United States of America";
   Person1.MaritalStatus = enMaritalStatus::Single; // 0 is what is stored,  which is what is under the label ::Single
   Person1.Gender = enGender::Male; // 0 is stored, which is what is under the label ::Male

    cout << "----------------------------------------\n";
    cout << "First Name: " <<Person1.FirstName  << endl;
    cout << "Last Name: " <<Person1.LastName << endl;
    cout << "Phone Number: " <<Person1.ContactInfo.PhoneNumber << endl;
    cout << "Email Address: " <<Person1.ContactInfo.email << endl;
    cout << "Apartment Number: " <<Person1.ContactInfo.address.ApartmentNumber << endl;
    cout << "Street Number: " <<Person1.ContactInfo.address.StreetNumber << endl;
    cout << "Street Name: " <<Person1.ContactInfo.address.StreetName << endl;
    cout << "City: " <<Person1.ContactInfo.address.city << endl;
    cout << "Province: " <<Person1.ContactInfo.address.province << endl;
    cout << "Postal Code: " <<Person1.ContactInfo.address.PostalCode << endl;
    cout << "Country: " <<Person1.ContactInfo.address.country << endl;
    cout << "Marital Status ( Single 0 / Married 1): " <<Person1.MaritalStatus << endl;
    cout << "Gender (Male 0 / Female 1): " <<Person1.Gender << endl;
    cout << "----------------------------------------\n";


    return 0;
}


