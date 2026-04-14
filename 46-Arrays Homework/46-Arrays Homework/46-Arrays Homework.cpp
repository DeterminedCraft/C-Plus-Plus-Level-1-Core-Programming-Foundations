
#include <iostream>
using namespace std;

/* Homework: Write a program that uses an array to store 3 grades & performs the following:-
   
 
   Please Enter Grade1 ?
   80
   Please Enter Grade2 ?
   70
   Please Enter grade3 ?
   90
   ************************
   The average of the grades is 81.6667


 */

void ReadGrades(float grades[3])  //Arrays are ALWAYS passed by reference automatically (Adding & will result in syntax error).
{                                 
	cout << "Please Enter Grade1 ? \n";
	cin >> grades[0];

	cout << "Please Enter Grade2 ? \n";
	cin >> grades[1];

	cout << "Please Enter Grade3 ? \n";
	cin >> grades[2];
	cout << "************************\n";

}


float CalculateAverageGrade(float grades[3])  //Arrays are ALWAYS passed by reference automatically (Adding & will result in syntax error). 
{
	return (grades[0] + grades[1] + grades[2]) / 3;  // The brackets matter here !
}


int main()
{
	float grades[3];

	//Initialization is via user input:
	ReadGrades(grades);  //The passed argument 'grades' also contains the array's memory address. Hence, the params do NOT need the & sign.    
	//  ReadGrades(grades[3])  ❌❌ interpreted as the element at index 3 which DNE /is out of bound ❌
	
	//*** The grades[] array initialization complete (now contains 3 elements).

	float GradesAverage = CalculateAverageGrade(grades); //The passed argument 'grades' also contains the array's memory address. Hence, the params do NOT need the & sign. 
	cout << "The average of the grades is " << GradesAverage << endl; // No printing procedure as we're not printing 
	                                                                  // the entire structure shown in the question.
	                                                                  // we are only printing 1 simple line.
    return 0;
}


/* conclusion: Why is it that, Arrays' parameters are ALWAYS & by-default passed by reference (where & not to be included in the params) ??
 
             This is because an array is designed to hold many elements,
             If C++ were to pass the whole array by value, it would need to copy every element into an additional array
             ,with the exact name, whose scope is inside the function or procedure.

             That would be:

              - Slow(copying all elements).

              - Wasteful(uses extra memory).

*/

// The MORE the numbers of functions and procedures are =  The MORE Divide & Conquer = The MORE فَرِّق تَسُد
//  = The BETTER the code is & LESS ERRORS there will be = The FASTER developer you are.