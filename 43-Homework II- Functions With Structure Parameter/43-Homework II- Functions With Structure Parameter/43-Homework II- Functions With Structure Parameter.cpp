
#include <iostream>
#include <string>
using namespace std;

/* Write a program to do the following as it appears:


  ***************************************
  Name: Adam Kulunku.
  Age:  88 Years.
  City: Montreal.
  Country: Canada.
  Monthly Salary: 5000.
  Yearly Salary:  60000.
  Gender: M
  Married: 1
  ***************************************


  // IMPORTANT: The solution demonstrated here is based on what we have learned so far.
                In future, we may have a better solution.
*/

struct stAddress
{
    string city;
    string country;
    // more member variables could be added in the future.
};

struct stFinance
{
    float MonthlySalary;
    float YearlySalary;

};

struct stUserInfo
{
    string name;
    unsigned short age;
    char gender;
    bool isMarried;
    stAddress address;
    stFinance finance;

};

void ReadUserSalary(stUserInfo& Person1)
{
    cout << "Enter Monthly Salary: \n";
    cin >> Person1.finance.MonthlySalary;
    cout << endl;

    cout << "Enter Yearly Salary: \n";
    cin >> Person1.finance.YearlySalary;
    cout << endl;
}


void ReadUserAddress(stUserInfo& Person1)
{
    cout << "Enter City: \n";
    getline(cin, Person1.address.city);
    cout << endl;

    cout << "Enter Country: \n";
    getline(cin, Person1.address.country);
    cout << endl;

}

void ReadUserInfo(stUserInfo& Person1) // A procedure for each struct.  فَرِّق تَسُد (Divide & Conquer)
{
    cout << "Enter Name: \n";
    getline(cin, Person1.name);
    cout << endl;

    cout << "Enter Age: \n";
    cin >> Person1.age;
    cout << endl;
    cin.ignore(1, '\n');

    ReadUserAddress(Person1);
    ReadUserSalary(Person1);

    cout << "Enter Gender (M/F): \n";
    cin >> Person1.gender;
    cout << endl;

    cout << "Are you married (1/0)?: \n";
    cin >> Person1.isMarried;
    cout << endl;
}

void DisplayUserInfo(stUserInfo Person1)
{
    cout << "***************************************\n";
    cout << "Name: " << Person1.name << "." << endl;
    cout << "Age: " << Person1.age << "." << endl;
    cout << "City: " << Person1.address.city << "." << endl;
    cout << "Country: " << Person1.address.country << "." << endl;
    cout << "Monthly Salary: " << Person1.finance.MonthlySalary << "." << endl;
    cout << "Yearly Salary: " << Person1.finance.YearlySalary << "." << endl;
    cout << "Gender: " << Person1.gender << "." << endl;
    cout << "Married: " << Person1.isMarried << "." << endl;
    cout << "***************************************\n\n";
}


int main()
{
    stUserInfo Person1;
    ReadUserInfo(Person1);
    // Now, all user inputs are stored in Person1.
    DisplayUserInfo(Person1);

    return 0;
}