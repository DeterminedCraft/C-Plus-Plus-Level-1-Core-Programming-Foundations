

#include <iostream>
using namespace std;

/********** Previously to print out to the screen:
 * Syntax:
 *  std::cout << variable or "..."
 
    explanation:

    (std::cout) = to the monitor.
    <<          = write
	"..."       = the following message. OR, instead, a variable.
	;           = end this line.

*/

/********** Now, to read data from the user (for example- asking the user to input a value so that it is stored into a variable):
 *  Syntax:
 *  std::cin >> value

    explanation:

    (std::cin)  = from the monitor.
    <<          = read
    value       = this value and store it into a variable.
    ;           = end this line.
  
  Example:
*/
//int main()
//{
//    char MyChar;
//    int MyNumber;
//
//    cin >> MyChar;  // The value inputted in the console initilizes the variable.
//    cin >> MyNumber; // The value inputted in the console initilizes the variable.
//
//    cout << "The entered char: " << MyChar << " & number: " << MyNumber << endl;
//
//    return 0;
//}

//int main()
//{
//    char MyChar;
//    int MyNumber;
//
//    cout << "Enter a character:\n";
//    cin >> MyChar;
//    cout << "Enter a number:\n";
//    cin >> MyNumber;
//    cout << "The character entered is: " << MyChar << " and the number entered is: " << MyNumber << endl;
//}

//int main()
//{
//    string name;
//    int age;
//
//    cout << "Enter your name: ";
//    cin >> name;
//    cout << "Enter your age: ";
//    cin >> age;
//
//     return 0;
//}

/******************************** Homework * *******************************


1- Write programs that asks the user to input the following information:

****************************************************
Name: Ahmad El-Aina
Age: 245 years
City: Montreal
Country: Canada
Monthly Salary: 10000
Yearly Salary:  100,00 // it should output this entire line with the value
Gender: M (Enter M of F). Plus use char data type.
Married: 1 (Enter 1 for married or 0 for single). Plus use boolean data type 
****************************************************

*/

//int main()  // code will be improved as we go along.
//{   // We only declare the variables
//    string name, city, country;
//    int age;
//    float MonthlySalary;
//    //float YearlySalary = MonthlySalary * 12; // Can not do it here as MonthlySalary variable has to be initialized (=0) resulting in YearlySalary = 0
//    char gender;
//    bool isMarried;
//    
//    // Then, each value entered in the console initializes the variables.
//    cout << "Please enter your name: ";
//    cin >> name;
//    cout << "Please enter your age: ";
//    cin >> age;
//    cout << "Please enter your city: ";
//    cin >> city;
//    cout << "Please enter your country: ";
//    cin >> country;
//    cout << "Please enter your monthly salary: ";
//    cin >> MonthlySalary;
//    cout << "Please enter gender as M or F: ";
//    cin >> gender;
//    cout << "Are you married ? 1/0: ";
//    cin >> isMarried;
//    cout << endl << endl;
//
//    // Now, we simply print out the variables.
//    cout << "****************************************************\n";
//    cout << "Name: " << name << endl;
//    cout << "Age: " << age << " years old" << endl;
//    cout << "City: " << city << endl;
//    cout << "Country: " << country << endl;
//    cout << "Monthly Salary: " << MonthlySalary << endl;
//    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
//    cout << "Gender: " << gender << endl;
//    cout << "Married: " << isMarried << endl;
//    cout << "****************************************************\n";
//    return 0;
//}   


/*2- Write programs to do the following:

Type in the first number: 70
Type in the second number: 99
Type in the third number: 1

----------------------------------

Total = 170
*/

//int main()
//{
//    int firstNumber, secondNumber, thirdNumber;
//
//    cout << "Type in the first number: ";
//    cin >> firstNumber;  // The value inputted in the console initilizes the already decalred variable.
//
//    cout << "Type in the second number: ";
//    cin >> secondNumber;  // The value inputted in the console initilizes the already declared variable.
//
//    cout << "Type in the third number: ";
//    cin >> thirdNumber;  // The value inputted in the console initilizes the already declared variable.
//
//    cout << endl;
//    cout << "----------------------------------\n\n";
//    cout << "Total = " << firstNumber + secondNumber + thirdNumber << endl;
//
//    return 0;
//}



/*3- Write programs to do the following:
 
 After 5 years I will be 200 years old.
*/

//int main()
//{
//    int CurrentAge = 90;
//    int AfterNumberOfYears; 
//
//    cout << "Enter the number of years: ";
//    cin >> AfterNumberOfYears;
//    cout << endl;
//    cout << "After " << AfterNumberOfYears << " years, I will be " << AfterNumberOfYears + CurrentAge << " years old. " <<endl;
//}

// or (as per lecture. pay attention to the variables' names)
int main()
{
    int age;
    //int AgeAfter5Years = age + 5; // Placing it here will force us to initilize the variable above (=0), making AgeAfter5Years always =5
                                   // regardless of the value entered by the user, in the next lines of code, for 'age'.Coommon sense !
    cout << "Please enter your age: ";
    cin >> age;
    cout << endl;

    int AgeAfter5Years = age + 5; // very meaningful variable name.
    cout << "Your age after 5 years is: " << AgeAfter5Years << endl;
    
    return 0; 
}