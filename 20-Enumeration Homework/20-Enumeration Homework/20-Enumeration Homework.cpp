
#include <iostream>
using namespace std;


/* Output the below information, exactly as it appears using direct initialization:

 *************************************
 Name: Ahmad El-Aina
 Age: 99
 City: Montréal
 Country: Canada
 Monthly Salary: 5000
 Yearly Salary: 60000
 Gender (enter 1 for Male / 2 for female): 1                         
 Married (enter 0 for single / 1 for married): 0                           
 My Favourite Color (white = 0, black = 1, blue = 9): 9         
 ************************************* 

*/

enum enGender { male = 1, female = 2 };
enum enMaritalStatus { Single = 0, Married = 1 };
enum enFavouriteColor { White = 0, Black = 1, Blue = 9 };    // Immediately think as follows: without enums I will have 
                                                            // to say,   instead of: if(male ==)  ,  if(1 == )  and good luck in remembering what 1 means..
														   // side note: for the case of == a switch..case statement is to be used (but that's discussed later)

struct stAddress
{
	string city;
	string country;
};

struct stFinance
{
	float MonthlySalary;
	float YearlySalary;
};

struct stPersonalInfo
{
	string name;
	unsigned int age;
	stAddress address;
	stFinance finance;
	enGender gender;
	enMaritalStatus MaritalStatus;
	enFavouriteColor FavouriteColor;
};


// Below: Yes, the concept of procedures& functions has not been introduced yet  so, you can instead print directly using cout in main())
void PrintPersonalInfo(const stPersonalInfo &PersonalInfo) // passing by const ref.
{
	cout << "*************************************\n";
	cout << "Name: " << PersonalInfo.name << endl;
	cout << "Age: " << PersonalInfo.age << endl;
	cout << "City: " << PersonalInfo.address.city << endl;
	cout << "Country: " << PersonalInfo.address.country << endl;
	cout << "Monthly Salary: " << PersonalInfo.finance.MonthlySalary << endl;
	cout << "Yearly Salary: " << PersonalInfo.finance.YearlySalary << endl;
	cout << "Gender (enter 1 for Male / 2 for female): " << PersonalInfo.gender << endl;
	cout << "Married (enter 0 for single / 1 for married): " << PersonalInfo.MaritalStatus << endl;
	cout << "My Favourite Color (white = 0, black = 1, blue = 9): " << PersonalInfo.FavouriteColor << endl;
	cout << "*************************************\n";
}

int main()
{
	stPersonalInfo PersonalInfo;

	// Initializing directly as requested:
	PersonalInfo.name = "Ahmad El-Aina";
	PersonalInfo.age = 99;
	PersonalInfo.gender = enGender::male;                   // stores 1
	PersonalInfo.MaritalStatus = enMaritalStatus::Single;   // stores 1
	PersonalInfo.FavouriteColor = enFavouriteColor::Blue;   // stores 9
	PersonalInfo.address.city = "Montreal";
	PersonalInfo.address.country = "Canada";
	PersonalInfo.finance.MonthlySalary = 5000;
	PersonalInfo.finance.YearlySalary = 60000;

	// Below- Yes, the concept of procedures & functions has not been introduced yet
    // (so, you can instead print directly using cout in main())
	PrintPersonalInfo(PersonalInfo);

	return 0;
}











// In a separate file after introducing the concept: Initialization of enums via user input:

/* Output the information as shown in the sample below, utilizing user input:

*************************************
Name: Ahmad El-Aina
Age: 99
City: Montréal
Country: Canada
Monthly Salary: 5000
Yearly Salary: 60000
Gender (1 = Male, 2 = Female) : 0                          
Married (0 = Single, 1 = Married):1                         
My Favourite Colour (1 = Green, 2 = Red, 3 = Blue, 4 = Black):               
*************************************
*/
 


