
/*        Arithmetic Operators
* 
*   A=10 , B=20
* 
| **Operator**   | **Description**                                     | **Example**          |
| ---------------| ----------------------------------------------------| -------------------- |
|    +           | Adds two operands                                   |  A + B will give 30  |
|    -           | Subtracts second operand from the first.            |  A - B will give -10 |
|    *           | Multiplies both operands.                           |  A * B will give 200 |
|    /           | Divides numerator by the de-numerator               |  B / A will give 2   | B divided by A
|    %           | This gives remainder of an integer division         |  B % A will give 0   | B modulo A
-----------------------------------------------------------------------------------------------


 Example:
*/
#include <iostream>
using namespace std;

//int main()
//{
//    int A = 10, B = 20;
//    cout << "A= " << A << "  &   B= " << B << endl << endl;
//
//    cout << "A + B = " << A + B << endl;
//    cout << "A - B = " << A - B << endl;
//    cout << "A * B = " << A * B << endl;
//    cout << "A / B = " << A / B << endl; // 0.5 But since A & b are both integers, then the answer will be 0 since 0.5 is less than 1.
//    cout << "B % A = " << B % A << endl;
//    cout << "A % B = " << A % B << endl;
//   // If these 2 values (5 and 3) are stored in an int variable, then:
//  //   5/3 = 1 as digits will be removed.
//    return 0;
//}
/********************* 1- Homework **************************************
// using type int:

 Please enter the first Number A?
 9
 Please enter the second Number B?
 2

 9 + 2 = 11
 9 - 2 = 7
 9 * 2 = 18
 9 / 2 = 4
 9 % 2 = 1

*/
int main()
{
    int A, B;

    cout << "Please enter the first Number A? \n";
    cin >> A;

    cout << "Please enter the second Number B?\n";
    cin >> B;

    cout << endl;
    cout << A << " + " << B << " = " << A + B << endl;
    cout << A << " - " << B << " = " << A - B << endl;
    cout << A << " * " << B << " = " << A * B << endl;
    cout << A << " / " << B << " = " << A / B << endl;
    cout << A << " % " << B << " = " << A % B << endl;

    return 0;
}


