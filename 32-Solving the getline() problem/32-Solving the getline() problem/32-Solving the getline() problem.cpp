#include <iostream>
#include <string> // includes the getline() function.
using namespace std;


 /*
  Important:

   We have once encountered the issue of reading a string that contains a space. 

   For example, reading  "Adam Elina".
   As only "Adam" will be considered (the space and what comes after is not taken into account).

   string FullName;
   cin << FullName;            // let's say that user enters: Adam Elina
   cout << FullName << endl;  //Output: Adam

   
   let's have a look: ===>
*/

int main()
{
	string FullName;

	cout << "Enter your full name: \n";  
	cin >> FullName;                   // let us say user enters "Adam Elina"
	cout << "Your entered full name is: " << FullName << "." <<endl;     // output: Adam
	
	// so how to solve this problem ?!
	// Answer: For Strings, From now and on, use the following function instead:
	// 
	// getline(cin, FullName) //= get the whole string line. // ONLY applies to strings  // included in the #include <string> library

	return 0;
}
 
 
//// Look at the code below:
int main()
{
	string FullName;

	cout << "Enter your full name: \n";  
	getline(cin, FullName);          // let us say user enters "Adam Elina"
	cout << "The entered full name is: " << FullName << endl;  // Adam Elina

	return 0;
}
/* However, there exists a problem pertaining to the use of  getline() function WHEN THE PROGRAM ALSO USES cin. 
   This problem is represented in the following program
   which is a classic C++ issue:-  */
   
 int main()
 {
	int number;
	string name;
	string country;

	cout << "Enter the number: \n";
	cin >> number; // you can NOT use getline() instead, as getline() only applies to strings.
	

	cout << "Enter the name: \n";
	getline(cin, name);  // instead of cin, so that a whole line containing a space can be read.

	cout << "Enter your country: \n";
	getline(cin, country); // instead of cin, so that a whole line containing a space can be read.
	cout << endl;

	cout << "Number: " << number << " | Name: " << name << " | country: " << country << endl;

	return 0;
	/* Output:
    Enter the number:
    514
    Enter the name:
    Enter your country:
    Canada

    Number: 514 | Name:  | country: Canada
-------------------------------------------

    Explanation of the Problem:
    You are mixing `cin >>` with `getline()`, which often causes issues.

    Here's what actually happens:

    When the program stops at:

	   cin >> number;

    it waits for the user to:
	 1) Type a value (e.g., 514)
	 2) Press ENTER (so that the curson moves to the next line and then the program resumes executing)

    IMPORTANT:
    The characters the user types form a sequence like this:

	   514\n ( the added \n is the result of hitting ENTER).

    After `cin >> number` reads **only the digits** (514),
    the leftover newline character **'\n'** is STILL sitting in the input buffer.

    Therefore, the VERY NEXT statement:

	   getline(cin, name);

     immediately reads that leftover '\n' and interprets it as:
	   "an empty line"

  This is why:
	  Name becomes empty (""), without waiting for the user to type anything.

  -----------------------------------------------------------------------
  ⚠ ROOT CAUSE:
	  The ENTER key (newline '\n') after `cin >>` is NOT consumed.

  -----------------------------------------------------------------------
  ✔ FIX:
	  Insert this line RIGHT AFTER `cin >>` and BEFORE the next getline():

	   cin.ignore(1, '\n');       // or  cin.ignore(numeric_limits<streamsize>::max() which is more reliable as will see that in future tutorials.
	   
*/    

	 
	/*         ⚡ Quick Rule to Fix cin + getline Issues

     Rule:
      When mixing `cin >>` with `getline()`, ALWAYS use `cin.ignore()` 
      immediately after the `cin >>` IF AND ONLY IF the next input statement 
      in the code is `getline()`.

	  #1 Example (✔ Correct Usage): Assume the ENTIRE program is 

	  cin >> age;
      cin.ignore(1, '\n'); 
	  // required because somewhere next in your code, there is a getline() input statement.

      getline(cin, name);                                  
	  ---------------------------------------------------------------------------------------

	  #2 Example (❌ Not needed here): Assume the ENTIRE program is

	  cin >> age;
      cin >> height;   
	  // no getline coming → do NOT use cin.ignore()


    */
}   
 
 //// The fix: 
int main()
{
	int number;
	string name;
	string country;

	cout << "Enter the number: \n";
	cin >> number; // you can NOT use getline() instead, as variable number is not a string.
	cin.ignore(1, '\n'); // ALWAYS use this line after the cin line (NEVER after the getline(cin, variable))

	cout << "Enter the name: \n";
	getline(cin, name);  // instead of cin, so that a whole line containing a space can be read.
	
	cout << "Enter your country: \n";
	getline(cin, country); // instead of cin, so that a whole line containing a space can be read.
	cout << endl; 

	cout << "Number: " << number << " | Name: " << name << " | country: "<< country << endl;
	
	return 0;
}


/* One final note: 
   
   For a character such as;
   char x;

   cin >> x  is valid

   but never getline(cin,x) as it is for strings only. 


*/ 


/*
🧠 Mental Model(Simple)

 Think of the input buffer as a queue of characters.

 Example input :

 42⏎


 After cin >> number :

	42 is removed and stored in number

	⏎(newline) stays in the queue

	Then getline(cin, name) is called :

 It sees ⏎ immediately

 Thinks : “Oh, the line is empty”

 Returns name = ""

*/




