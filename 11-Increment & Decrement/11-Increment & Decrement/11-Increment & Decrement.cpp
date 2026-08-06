/*
  A = 10 ,  B = 20
-----------------------------------------------------
| **Operator** | **Description**   |  **Example**   |
| ------------ | ----------------- | -------------- |
| ++           | A++ -> A = A + 1  |  will give 11  |  as long as the A++ is typed on one line !       
|              | ++A -> A = A + 1  |  will give 11  |  as long as the ++A is typed on one line !   
|              |                   |                |
| --           | B-- -> B = B - 1  |  will give 19  |  as long as the B-- is typed on one line !
|              | --B -> B = B - 1  |  will give 19  |  as long as the --B is typed on one line !
-----------------------------------------------------

   ***However, there is a big difference between A++ and ++A
   or  B++ and ++B and so on. This will be illustrated in the near future.

   Example:
*/

#include <iostream>
using namespace std;

//int main()
//{
//    short int A = 10, B = 20;
//    A++;  // Same as typing A = A + 1
//    B--;  // Same as typing B = B - 1
//
//    cout << "A = " << A << endl;
//    cout << "B = " << B << endl <<endl;
//
//    return 0;
//}

int main()
{
    short int A = 10, B = 20;
    ++A;  // Same as typing A = A + 1
    --B;  // Same as typing B = B - 1

    cout << "A = " << A << endl;
    cout << "B = " << B << endl << endl;

    return 0;
}
