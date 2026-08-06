

#include <iostream>
using namespace std;

/* So far, we have:

- if (condition) statement
  [Best practice: always strive to add an else statement
   to avoid missing any unhandled condition. It prevents unhandled 
   states and makes logic complete and explicit.]

- if (condition) .. else statement

However, we also have:

- if (condition) .. else if (condition) ..
  (as many else if (condition) as needed) .. else statement

  // else → optional, appears once, and must be last
  // Best practice: again, always strive to include it as a safety net.

*/
///////////////////////////////////////////////////////////////////////////////
/******************************** Syntax **************************************
    
    if (condition1)
    {
        // executed if condition1 is true
    }
    else if (condition2)
    {
        // executed if condition1 is false AND condition2 is true
    }
    else
    {
        // executed if condition1 is false AND condition2 is false
    }


    ✔️Key rules (very important)✔️:

     1️⃣- Evaluation is top → down
     2️⃣- Only ONE block executes
     3️⃣- As soon as a condition is true, the rest are skipped
     4️⃣- else:
           - is optional (But, again, alway strive to include it).
           - appears once.
           - must be last.
           - Executes ONLY when ALL the statements above it evaluate to false

*******************************************************************************/

// Let's examine a few examples:
// predict the outout of each example.

// Example 1:
int main()
{
    int time = 22;   // 10 pm

    if (time < 10)
    {
        cout << "Good Morning." << endl;
    }
    else if (time < 20)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening" << endl;
    }

    return 0;
}



// Example 2:
int main()
{
    int time = 9;

    if (time < 10)
    {
        cout << "Good Morning." << endl;
    }
    else if (time < 20)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening" << endl;
    }

    return 0;
}


// Example 3:
int main()
{
    int time = 18; //6 pm

    if (time < 10)
    {
        cout << "Good Morning." << endl;
    }
    else if (time < 20)
    {
        cout << "Good day." << endl;
    }
    else
    {
        cout << "Good evening" << endl;
    }

    return 0;
}
//// Again- you could have as many else if(condition) statements as needed.