

#include <iostream>
#include <string> // contains the needed functions stoi, stof, stod, etc.
using namespace std;


/* String
   A string variable contains a collection of characters surrounded by double quotes.
  
   What one also needs to know:

   In C++, `string` is a class from the Standard Library (<string>)
   that behaves like a primitive data type in everyday use.

   A string object, like any object created from a class, has
   access to all member functions of the `string` class, which can
   be used to manipulate or inspect the string's value.

   These member functions are accessed through the string object
   using the dot operator.
*/


//int main()
//{
//    string MyString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // MyString is not only a string variable but also an object of the string class,
//                                                    // that is used to access all built-in member functions of the string class.
//
//    cout << "The length of the string is: " << MyString.length() << endl; // length starts from 1
//    // since string is a collection of characters, then we can access each and every character via its index:
//    cout << "In the string, the character at index 0 is: " << MyString[0] << endl; // indexes ALWAYS start from 0 //A
//    cout << "In the string, the character at index 2 is: " << MyString[2] << endl; // C
//    cout << "In the string, the character at index 25 is: " << MyString[25] << endl; //Z
//
//    string S1 = "10", S2 = "20";
//
//    string S3 = S1 + S2; // stores 1020. Concatenation of strings. Mathematical addition is for numbers.
//    cout << "Concatenation of the string: " << S1 << " and the string " << S2 << " is: " << S3 << endl; //1020
//
//    //I want to a mathematical addition of S1 and S2:
//    double sum = stof(S1) + stof(S2);
//    cout << "The sum of " << S1 << " and " << S2 << " = " << sum << endl;  //30
//
//
//
//    return 0;
//}

//int main()
//{
//    string S1 = "AB", S2 = "CD";
//
//    string S3 = S1 + S2;
//    cout << "The concatenation of the string " << S1 << " and the string " << S2 << " is: " << S3 << endl; //ABCD
//
//    /* 
//      cout << stof(S1) << endl; 
//      // The program will throw an exception since the argument S1 is some alphabets inside the "".
//         Instead numbers need to be inside the "".
//         Because how do you want the compiler to convert AB to float (or int or double, etc,) ?
//         ridiculous !
//    
//    */
//      
//    return 0;
//}


/*
  Important:

   We have once encountered the issue of reading a string that contains a space. 

   For example, reading  "Adam Elina".
   As only "Adam" will be considered (the space and what comes after is not taken into account).

   string FullName;
   cin << FullName;            // let's say that user enters: Adam Elina
   cout << FullName << endl;  //Output: Adam

   
   let's have a look: ===>
*/
//
//int main()
//{
//	string FullName;
//
//	cout << "Enter your full name: \n";  // let us say user enters "Adam Elina"
//	cin >> FullName;
//	cout << "Your entered full name is: " << FullName << "." <<endl; // output: Adam
//	
//	// so how to solve this problem ?!
//	// Answer: From now and on use the following function instead:
//	// 
//	// getline(cin, FullName) // get the whole line.
//	// 
//	// Look at the code below:
//	return 0;
//}

int main()
{
	string FullName;

	cout << "Enter your full name: \n";  // let us say user enters "Adam Elina"
	getline(cin, FullName);
	cout << "The entered full name is: " << FullName << endl;


	return 0;
}