
/* Output the below information, exactly as it appears, utilizing Structures.

 *************************************
 Name: Ahmad El-Aina
 Age: 99
 City: Montréal
 Country: Canada
 Monthly Salary: 5000
 Yearly Salary: 60000
 Gender: M
 Married:1
 *************************************


*/
// Again - We are solving this example according to our current level. Not a final solution at all. 
#include <iostream>
using namespace std;

struct stFinances
{
	float MonthlySalary;
	float YearlySalary;
};


struct stAddress
{
	string city;
	string country;
};


struct stPersonal
{
	string name;
	unsigned short age;
	char gender;
	bool IsMarried;
	stAddress address; // variable 'address' will have access to all members (city & country) of the structure stAddress
};


int main()
{
	// It is time to initialize (Either directly or via user input).
	stPersonal personal; // The created variable 'personal' will have access to all members of the structure (user-defined data type) stPersonal.

	personal.name = "Ahmad El-Aina";
	personal.age = 99;
	personal.gender = 'M';
	personal.IsMarried = true; // or 1 (But both will be stored as 1)
	personal.address.city = "Montreal";
	personal.address.country = "Canada";


	stFinances salary; // the created variable 'salary' will have access to all the memebers of the structure stFinances

	salary.MonthlySalary = 5000;
	salary.YearlySalary = 60000;

	cout << "************************************* \n";
	cout << "Name: " << personal.name << endl << "Age: " << personal.age << endl;
	cout << "City: " << personal.address.city << endl << "Country: " << personal.address.country << endl;
	cout << "Monthly Salary: " << salary.MonthlySalary << endl << "Yearly Salary: " << salary.YearlySalary << endl;
	cout << "Gender: " << personal.gender << endl << "Married: " << personal.IsMarried << endl;
	cout << "************************************* \n";


	return 0;
}


