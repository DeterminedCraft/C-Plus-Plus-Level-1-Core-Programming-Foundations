
#include <iostream>
using namespace std;

/* Variable Scope Homework:
* 
* Create a program that contains:
	-two (or more) global variables
	- A function
	- A main() function off course !

	and modify the values of the global and local variables,
	observing their lifecycle plus aspects similar to the previous scope examples 
	in earlier notes.
*/

// Solution: your job is now to only examine the program below and predict the output. The run the program.

/*  THREE GLOBAL VARIABLES  */
// Created BEFORE main() begins, stored in the global/static memory area.
int gCounter = 10;
float gBalance = 250.75;
string gMessage = "System Ready";

/*  FUNCTION THAT MODIFIES BOTH GLOBAL AND LOCAL VARIABLES */
void ProcessTransaction()
{
    cout << "\n---- Inside ProcessTransaction() ----\n";

    // Print the new global variable WITHOUT modifying it
    cout << "Global gMessage (read-only) = " << gMessage
        << " | Address: " << &gMessage << endl;

    float transactionAmount = 50.25;

    cout << "Initial Local transactionAmount = " << transactionAmount
        << " | Address: " << &transactionAmount << endl;

    cout << "Global gCounter before change = " << gCounter
        << " | Address: " << &gCounter << endl;

    cout << "Global gBalance before change = " << gBalance
        << " | Address: " << &gBalance << endl;

    transactionAmount += 100;
    gCounter += 1;
    gBalance -= 40.00;

    cout << "\nAfter modifications INSIDE ProcessTransaction():\n";
    cout << "Local transactionAmount = " << transactionAmount << endl;
    cout << "Global gCounter = " << gCounter << endl;
    cout << "Global gBalance = " << gBalance << endl;
}

int main()
{
    cout << "---- Inside main() ----\n";

    int gCounter = 999;

    cout << "Local gCounter in main = " << gCounter
        << " | Address: " << &gCounter << endl;

    cout << "Global gBalance in main = " << ::gBalance      // Note: no need to include :: before the variable 'gBalance' is there is no local to main() variable with the exact same name.
        << " | Address: " << &::gBalance << endl;

    // Print the new global variable in main() as well (still not modifying it)
    cout << "Global gMessage in main = " << gMessage
        << " | Address: " << &gMessage << endl;

    cout << "\nCalling ProcessTransaction()...\n";
    ProcessTransaction();

    cout << "\n---- Back to main() ----\n";

    cout << "Local gCounter in main = " << gCounter << endl;
    cout << "Global gCounter (actual) = " << ::gCounter << endl;
    cout << "Global gBalance (actual) = " << ::gBalance << endl;

    return 0;
}



