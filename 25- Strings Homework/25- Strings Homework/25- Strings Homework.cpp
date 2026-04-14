
#include <iostream>
#include <string>
using namespace std;

/* Homework:
   Output the following exactly as it appears 
   (Data entered in the example is merely a sample that you may wish to replicate)
 


 Please enter String1?
 Mohammad Abu-Hadhoud

 Please Enter String2?
 5

 Please Enter String3?
 10
*************************************
 The length of the String is 20
 Characters at 0,2,4,7 are: M h m d
 Concatenating String2 and String3 = 510
 5 * 10 = 50

*/


int main()
{
    string String1, String2, String3;

    cout << "Please enter String1: \n";
    getline(cin, String1); // You need the string library included in the header above.
    cout << endl;

    cout << "Please enter String2: \n";
    getline(cin, String2);
    cout << endl;

    cout << "Please enter String3: \n";
    getline(cin, String3);
    cout << "************************************* \n\n";

    cout << "The length of the string is " << String1.length() << endl;
    cout << "Characters at 0,2,4,7 are: " 
        << String1[0] << " " 
        << String1[2] << " " 
        << String1[4] << " " 
        << String1[7] << endl;

    cout << "Concatenating String2 and String3 = " << String2 + String3 << endl;

    cout << String2 << " * " << String3 << " = " << stof(String2) * stof(String3) << endl;

    return 0;
}


