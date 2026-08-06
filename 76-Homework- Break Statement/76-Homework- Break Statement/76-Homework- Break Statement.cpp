// 76-Homework- Break Statement.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit

#include <iostream>
using namespace std;


 /* Homework:
 
  Define an integer array that contains 10 elements.
  Search for the number 20 and print its position.

*/



int main()
{
    int number = 20;
    int numbers[10] = { 33, 66, 84, 20, 67, 93, 51, 26, 77, 17 };

    for (int i = 0; i < 10; i++)   // i=0, i=1, i=2, ..., i=9
    {
        cout << "We are at iteration " << i+1 << endl;

        if (numbers[i] == number)
        {
            cout << "The number " << number << " is found at the index: " << i << endl;
            break;
        }

    }

    return 0;
}
/*Output:
 We are at iteration 1
We are at iteration 2
We are at iteration 3
We are at iteration 4
The number 20 is found at the index : 3 
*/
//--------------------------------------------------------------------------------------------------------------


// Now, let's remove the break statement and then run the program
int main()
{
    int number = 20;
    int numbers[10] = { 33, 66, 84, 20, 67, 93, 51, 26, 77, 17 };

    for (int i = 0; i < 10; i++)   // i=0, i=1, i=2, ..., i=9
    {
        cout << "Iteration " << i + 1 << endl;
            
        if (numbers[i] == number)
        {
            cout << "The number " << number << " is found at the index: " << i << endl;
        }

    }

    return 0;
}
 // Output:
 /*
Iteration 1
Iteration 2
Iteration 3
Iteration 4
The number 20 is found at the index: 3
Iteration 5
Iteration 6
Iteration 7
Iteration 8
Iteration 9
Iteration 10
 
 */

/* Conclusion after running : Yes it will find the looked for number. However this program 
                              is of slow performance as the controller goes through all 
                              the iterations of the for-loop.

                              Make the program efficient and faster by including the break statement.

*/ //-----------------------------------------------------------------------------------------------------------------------------
           

/*   [keep in mind that the current index containing the searched for number could
*            change tomorrow. Meaning: If 20 is the first element 
*            today (at index 0), then tomorrow it could be 
*            the second element (at index 1) or the last element
*            or the 651th element and so on. This is how one should think when coding]
* 
 so if it is found at the second iteration, and I have a total of 10,000 iteration,
 then there is no need to continue iterating 9998 times.
 becasuse the searched for number has already been found. 
 Otherwise, my program is deemed slow. Hence, a break statement will be used.


 /* An improved version of the program is:
 */

int main()
{
    int number = 20;
    bool IsFound = false; // for flags like this, always initialize to false.
    int numbers[10] = { 33, 66, 84, 20, 67, 93, 51, 26, 77, 17 };

    for (int i = 0; i < 10; i++)   // i=0, i=1, i=2, ..., i=9
    {
        cout << "We are at iteration " << i + 1 << endl;

        if (numbers[i] == number)
        {
            cout << "The number " << number << " is found at the index: " << i << endl;
            IsFound = true;
            break;
        }

    }
    if (!IsFound)
    {
        cout << "Number looked for is NOT found" << endl;
    }

    return 0;
}











