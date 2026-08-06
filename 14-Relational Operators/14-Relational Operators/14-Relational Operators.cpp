
/*
 * Relational Operators: Used for comparison. Each one returns either true or false.
 *
 * Given:  A = 10,  B = 20
 *
 * | **Operator** | **Description**                                                  | **Example**               | **Actual Output (C++)** |
 * | ------------- | ---------------------------------------------------------------- | -------------------------- | ----------------------- |
 * | ==            | Checks if two values are **equal**                               | (A == B) is not true.      | 0 |
 * | !=            | Checks if two values are **not equal**                           | (A != B) is true.          | 1 |
 * | >             | Checks if left value is **greater than** right value             | (A > B) is not true.       | 0 |
 * | <             | Checks if left value is **less than** right value                | (A < B) is true.           | 1 |
 * | >=            | Checks if left value is **greater than or equal to** right value | (A >= B) is not true.      | 0 |
 * | <=            | Checks if left value is **less than or equal to** right value    | (A <= B) is true.          | 1 |
 *
 * * Values for A & B are given above this table.
 * * In C++, the result of a relational operation is either 1 (true) or 0 (false).
 *
 * Note:
 * Any RELATIONAL OPERATOR  ==, !=, >, <, >=, <= inside parentheses ( ) represents a condition.
 * A condition always evaluates to either true (1) or false (0); these 1 and 0 are the actual outputs.
 * -------------------------------------------------------------------------------------------------------------
 * 
 * Let's see some examples:-
 */


  
#include <iostream>
using namespace std;

//int main()
//{
//    int A = 10, B = 20;
//
//    cout << (A == B) << endl; //0
//    cout << (A != B) << endl; //1
//    cout << (A > B) << endl;  //0
//    cout << (A >= B) << endl; //0
//    cout << (A < B) << endl;  //1
//    cout << (A <= B) << endl; //1
//
//    return 0;
//}

//int main()
//{
//    int A = 20, B = 20;
//
//    cout << (A == B) << endl; //1
//    cout << (A != B) << endl; //0
//    cout << (A > B) << endl;  //0
//    cout << (A >= B) << endl; //1
//    cout << (A < B) << endl;  //0
//    cout << (A <= B) << endl; //1
//
//    return 0;
//}

/*
 Now examine the below program which is very important:
*/

//int main()
//{
//    int A = 20, B = 20;
//
//    cout << (A = B) << endl;  // This is NOT a comparison.
//                              // '=' is the assignment operator, not relational.
//                              // A now becomes equal to B (A = 20).
//                              // Output: 20
//
//    cout << (A != B) << endl; // false → 0
//    cout << (A > B)  << endl; // false → 0
//    cout << (A >= B) << endl; // true  → 1
//    cout << (A < B)  << endl; // false → 0
//    cout << (A <= B) << endl; // true  → 1
//
//    return 0;
//}
////---------------------------------------------------------------------------------------------------------------------

/* Homework: Write a program, involving users' inputs, to do the following:
 
 Please enter the first number A?
 50
 Please enter the second number B?
 50

 50 = 50 is 1
 50 != 50 is 0
 50 > 50 is 0
 50 < 50 is 0
 50 >= 50 is 1
 50 <= 50 is 1

*/
int main()
{
	short A, B;
	
	cout << "Please enter the first number A? \n";
	cin >> A; 
	
	cout << "Please enter the second number B? \n";
	cin >> B;
	cout << endl;

	cout << A << " = " << B << " is " << (A == B) << endl;
	cout << A << " != " << B << " is " << (A != B) << endl;
	cout << A << " > " << B << " is " << (A > B) << endl;
	cout << A << " < " << B << " is " << (A < B) << endl;
	cout << A << " >= " << B << " is " << (A >= B) << endl;
	cout << A << " <= " << B << " is " << (A <= B) << endl << endl;

	return 0;
}


