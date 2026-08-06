

#include <iostream>;
using namespace std;

  
 // Remember the fundamentals:

int main()
{
	float x[3]; // declaring an array variable of data type float.

	// Array x can be initialized directly:-
	x[0] = 65;   
	x[1] = 28;   
	x[2] = 85.3; 

	// OR 
	 
	// Or array x can be initialized via user input:-
	ReadArrayData(x);  // where the procedure is implemented outside the main() function.
	// Reaching the next line = The array has been populated with elements = The initialization is now complete.                 
	return 0;
}
////-----------------------------------------------------------------------------------------------------------------------------------------

 
 /* Below is an elaborate example on initializing an array via user input.
 
  Now, start looking at the following code, 
 
  by first collapsing all functions and procedures below:
*/


void ReadArrayData(int x[3]) // by-reference automatically for Array parameters. '&' will cause syntax errors. (= Initializing inside main())
{
	cout << "Please Enter The First Number: \n";
	cin >> x[0];
	cout << endl;

	cout << "Please Enter the Second Number: \n";
	cin >> x[1];
	cout << endl;

	cout << "Please Enter the Third Number: \n";
	cin >> x[2];
	cout << endl;

}

void PrintArrayData(int x[3])
{
	cout << "********************************\n";
	cout << "The Entered First Number is: "  << x[0] << endl;
	cout << "The Entered Second Number is: " << x[1] << endl;
	cout << "The Entered Third Number is: "  << x[2] << endl;
	cout << "********************************\n"; 

}


int main()
{
	int x[3]; // declaring an int array variable of 3 elements.

	// Initializing the array via user input:
	ReadArrayData(x); // passing the array as an argument. It will be sent along with its memory address. hence, no need for & in the parameters of the function implementation.
	// mission complete- The array has been populated with elements.

	PrintArrayData(x); // passing the array as an argument. It will be sent along with its memory address. hence, no need for & in the parameters of the function implementation.

	return 0;
   
}
//// Note:  procedure name based on the array's name. If the array's name was 'Grades', then naming would be ReadStudentsGrades(x)
////------------------------------------------------------------------------------------------------------------------------------------------------------------------------

