
/* Assignment Operators: They help make code shorter, cleaner, and often easier to read.

| **Operator** | **Example** | **Equivalent To**  |       
| -------------- | ----------| -------------------|
|   =            | A = 5     | A = 5              |
|   +=           | A += B    | A = A + B          | again- to make the code shorter. As simple as that.
|   -=           | A -= B    | A = A - B          |
|   *=           | A *= B    | A = A * B          |
|   /=           | A /= B    | A = A / B          |
|   %=           | A %= B    | A = A % B          |
---------------------------------------------------

*/

#include <iostream>
using namespace std;

int main()
{
    int A = 10, B = 20;

    A += B; // A = A + B    
    cout << "A = " << A << endl;  // 30 is the new value for A.

    A -= B; // A = A - B
    cout << "A = " << A << endl;

    A *= B; // A = A * B
    cout << "A = " << A << endl;

    A /= B; // A = A / B;
    cout << "A = " << A << endl;

    A %= B; // A = A % B;
    cout << "A = " << A << endl << endl;

    return 0;
}


