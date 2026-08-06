
#include <iostream>
#include <string>
using namespace std;

/* Homework:
   
   #1 Convert string st1 = "43.22" to double, float, & int.
   #2 Convert integer N1 = 20 to string
   #3 Convert double N2 = 33.5 to String
   #4 Convert float N3 = 55.23 to string, and integer.
   _________________________________________________________ */



// #1 Convert string st1 = "43.22" to double, float, & int.
//int main()
//{
//	string st1 = "43.22";
//
//	// string to double
//	double number_double = stod(st1);
//
//	// string to float
//	float number_float = stof(st1);
//
//	// string to integer
//	int number_int = stoi(st1); // data loss occurs.
//
//	cout << "String " << st1 << " to Double = " << number_double << endl;  //43.22
//	cout << "String " << st1 << " to Float = " << number_float << endl;   //43.22
//	cout << "String " << st1 << " to Integer = " << number_int << endl;  //43
//
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------


//#2 Convert integer N1 = 20 to string
//int main()
//{
//	int n1 = 20;
//
//	// integer to string
//	string st1 = to_string(n1); // the argument is literally any type of number: int, float, double, long, short, long long, etc.
//
//	cout << "The Integer " << n1 << " to string is " << st1 << endl; //20
//
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------

//#3 Convert double N2 = 33.5 to String
//int main()
//{
//	double N2 = 33.5;
//
//	//double to string
//	string st = to_string(N2);
//
//	cout << "Double " << N2 << " to String is " << st << endl; // 33.500000
//
//	return 0; 
//}
//------------------------------------------------------------------------------------------------------------


//#4 Convert float N3 = 55.23 to string, and integer.
int main()
{
	float N3 = 55.23;

	// float to string
	string st1 = to_string(N3);
	 
	
	// float to integer (data loss will occur):
	//int num_int = int(N3); // Explicit conversion (function-style)
	// or:
	int num_int = (int) N3; // Explicit conversion (C-Style)

	cout << "Float " << N3 << " to String is " << st1 << endl;
	cout << "Float " << N3 << " to Integers is " << num_int << endl;

	return 0; 
}
