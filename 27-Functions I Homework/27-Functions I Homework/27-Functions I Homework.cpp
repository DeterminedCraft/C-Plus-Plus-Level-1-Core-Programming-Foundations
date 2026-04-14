#include <iostream>
using namespace std;

/* Homework # 1 : print out the following exactly as it appears using a function named "DisplayMyCardInfo"
 

 *************************************
 Name: Ayman Akynu
 Age: 99
 City: Montreal
 Country: Canada
 *************************************
 
 

*/

void DisplayMyCardInfo()    // As you remember, a procedure/ function must do one and ONLY one thing. 
{                           // Here, it displays the required card info.
    string name, city, country;
    unsigned short age;

    name = "Ayman Akynu";
    city = "Montreal";
    country = "Canada";
    age = 99;

    cout << "*************************************\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "*************************************\n";
       
}

int main()
{ 
    DisplayMyCardInfo();
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------



/* Homework # 2 : print out the following exactly as it appears using a function named "PrintStars"

 ********
 ******** 
 ********
 ********

*/


void PrintStars()
{
	cout << "********\n";

}


int main()
{
	PrintStars();  // Wrong ! as for-loops is the answer but we have not gotten there yet!
	PrintStars();
	PrintStars();
	PrintStars();

	return 0;
}
//--------------------------------------------------------------------------------------------------------------------

/* Homework # 3 : print out the following exactly as it appears using a function named "PrintMyProgrammingLoveTale"

 I Love programming!

 I promise to be the best developer ever!

 I know it will take some time to practice, but I
 will achieve my goal!

 Best Regards,
 Kulunku Bulunku.


*/

void PrintMyProgrammingLoveTale()
{
	cout << "I Love programming!\n\n";
	cout << "I promise to be the best developer ever! \n\n";
	cout << "I know it will take some time to practice, but I\n";
	cout << "will achieve my goal!\n\n";
	cout << "Best Regards,\n";
	cout << "Kulunku Bulunku\n";

}


int main()
{
	PrintMyProgrammingLoveTale();

	return 0;
}
//--------------------------------------------------------------------------------------------------------------------

/* Homework # 4 : print out the following exactly as it appears using a function named "PrintLetterH"


*       *
*       *
* * * * *
*       *
*       *
       


*/

void PrintLetterH()
{
    cout << "*       *" << endl;
    cout << "*       *" << endl;
    cout << "* * * * *" << endl;
    cout << "*       *" << endl;
    cout << "*       *" << endl;

}


int main()
{
    PrintLetterH();

    return 0;
}

