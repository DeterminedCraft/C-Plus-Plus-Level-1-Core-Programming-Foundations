
#include <iostream>
using namespace std;
/*          

 Since a procedure does not return a value,
 you MAY place printing or even input statements inside it.
  HOWEVER- it is strongly preferred to pass parameters even to a procedure.

 Also, a procedure, just like a function, still does ONLY one thing (✔️ Single Responsibility Principle)

 However, since the only purpose of a function is to return a value,
 I should NOT include printing statements or input statements inside it.

 Never include input statements inside a function- Input statements are meant solely for initializing variables via user input, 
 NOT for use inside functions whose purpose is to process and return values.
 Instead we pass parameters to a function, and the function processes them
 in order to return a value.

 This is exactly what we did with the round() function,
 where we passed a parameter to it — for example: round(3.7) —
 and the function processed that parameter and returned the value 4.

 Furthermore- it is strongly preferred to pass parameters even to a procedure instead of writing user-input code inside it.


*/




/*
 Example 1: Simply, examine the following code
*/
 
//int MySumFunction(int num1, int num2) // parameters (initializing values) are passed to the function WHEN it's called (not called means 'sleeping').
//{
//    return num1 + num2; 
//
//}
//
//
//int main()
//{ 
//    int sum;
//
//    sum = MySumFunction(3, 7); // capturing/storing the returned value in a variable first and then printing it is more elegant + for later use in the program.
//    cout << sum << endl;
//    // or quickly just do:
//    cout << MySumFunction(10, 20) << endl;
//    cout << MySumFunction(2, 4) << endl;
//    cout << MySumFunction(6, -9) << endl;
//
//
//    return 0;
//}




/* //////////////////////////////////////////////////////////////////////////////////////////
 Example 2 : In ONLY one program, output the following exactly at it appears utilizing: 
         
                - A function named MySumFunction.
                           
 Please enter Number1 ?
 10

 Please enter Number2 ?
 20
 **************************
 
 30


 // Important: Read the note below BEFORE attempting to solve this problem:

*/


/*
  Note: There is ONLY ONE CORRECT solution for this problem utilizing BEST PRACTICES **regardless** of the included 
      instruction of having to use " - A function named MySumFunction."
      
      This instruction is included only to help you practice what you have learned so far (which is NOT yet enough to
      solve this problem correctly, as we are still progressing through the concepts).

      Therefore, if you have advanced further in the course and are revisiting this file, ignore this primitive
      method and apply what you have learned from the following lectures.

      If not, then you will most likely solve it in this simpler, primitive way — which is CRUCIAL for understanding
      the final, correct solution that will be introduced in the upcoming lessons.


*/

// Crucial: The solution below is NOT the final correct one. 
// The FINAL correct one will be presented later.
// Remember- We're gradually introducing programming concepts.

float MySumFunction(float num1, float num2) // function 'sleeping' till it is called in main()
{
    return num1 + num2;
}

int main() // Where execution begins
{
    float Num1, Num2;
 
    cout << "Please enter Number1 ? \n";
    cin >> Num1;

    cout << "Please enter Number2 ? \n";
    cin >> Num2;

    float sum = MySumFunction(Num1, Num2);
    cout << "**************************\n\n";
    cout << sum << endl;

    return 0;
}


