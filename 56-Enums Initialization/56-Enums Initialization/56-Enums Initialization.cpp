
#include <iostream>
using namespace std;

/* Enums Mental Model:
   
   After creating an enum user-defined data type,
   the next natural & IMPERATIVE step is to declare 
   a variable of that enum type.
   
   Where Initialization can be achieved in one of two ways:

   A) Direct initialization:
	  - The enum variable is initialized directly by assigning
	  it to an enumeration constant (enumerator) acting as label.

			these labels are frequently used in conditional statements 
			where they're compared to int value(s) regardless of how these integer values come about to be.
			

   B) Initialization via reading user input:
	  
	  1- When enumeration constants (enumerators) are assigned to int values. Example:    enum enMaritalStatus {single = 0, married = 1};                 

	  - User input is first read as an integer.
      - The integer is then explicitly cast to the enum type.
      - The resulting enum value (constructed from the integer)
        is assigned to the enum variable.
      - The initialized enum variable is then compared against the
        enumeration constants (enumerators), which act as semantic labels
        in switch statements (to check equality).



       2-  When enumeration constants (enumerators) are assigned to character values. Example:    enum enOperation { Add = '+', Subtract = '-'}; 
		   
	   - User input is first read as a character.
	   - The character is then explicitly cast to the enum type.
	   - The resulting enum value (constructed from the character)
		 is assigned to the enum variable.
	   - The initialized enum variable is then compared against the
		 enumeration constants (enumerators), which act as semantic labels
		 in switch statements (to check equality).
		

		One cannot directly compare two different data types 
		(e.g., a user-entered int value compared to an enum value).
        Moreover, the compiler does not perform implicit conversions to or from 
		a user-defined data type, such as an enum.


	 VERY IMPORTANT NOTE:

	 Sometimes when enums are utilized,
	 where the next natural step of declaring a variable of the enum user-defined data type is performed,
	 we find out that initialization by any shape or form of the variable does not take place.
	 In this case, simply comment out the declaration of this variable of the enum user-defined data type.

*/


//A: Direct initialization:
enum enMaritalStatus {single = 0, married = 1};
// so far, we've done nothing but create a data type that is enum (an enum user-defined data type). 


int main()
{
	enMaritalStatus MaritalStatus; // Fixed imperative step. ALWAYS.

    // Direct initialization: (assigning it a numeration constant/ numerator acting as a label).
	MaritalStatus = enMaritalStatus::single; 
	// the variable 'MaritalStatus' stores the value 0.
	// and its type remains 'enMaritalStatus'.

}
//----------------------------------------------------------------------------------------------


//B:  Initialization via reading user input:

enum enColor { red =1, blue = 2, green = 3, yellow = 4 }; // again, red is an enumeration constant/ enumerator acting as a label ( just like the rest of the typed colors)
// so far, we've done nothing but create a data type that is enum (enum user-defined data type). 

void ReadColor(int &c)
{
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	cout << endl;
}  
 
enColor CastIntegerToEnum(int c) //passing by value.
{
	return (enColor)c; // convert the c from int to enColor data type and lastly store it in 'color' to achieve initialization in main.
}

string ComparingUserEnteredValueToEnumerators(const enColor &color)  // receiving the enum data type numerical value the user entered.
{
	switch (color)
	{
	case enColor::blue: // the parameter already declared variable color of enColor data type.
		return "Blue";
		break;

	case enColor::red:
		return "Red";
		break;

     // populate the rest of the cases


	default:
		return "The number you entered does NOT represent any color.";
	}
}


int main()
{
	enColor color; // Fixed imperative step. ALWAYS.

	// Initialization of the variable 'color' via reading user input:
    // (to be used as the condition in a switch statement,
    //  where it is compared against ALL of the enumeration constants
    //  (enumerators) acting as labels).

	int c; // First declare an int variable (as one can NOT initialize 'color' straight-forwardly from by cin >>)
	ReadColor(c);
	// c is now initialized

	// make c the value of 'color':

	// but first convert the data type of c from int to enColor. (Farrik Tasud)
	color = CastIntegerToEnum(c); // using implicit conversion as in (color = c) isn't going to work as compiler 'will not know how to convert' between an in-build and user-defined data type.
    // The initialization of the variable 'color' has finally been achieved via user-input ( = a number of enColor user-defind data type).

	//Important: 
	// Now, [color] will be compared to the enumeration constants / enumerators that act as labels which are: enColor::red , enColor::blue , enColor::green, enColor::yellow 
	// and these enumerators come about as the result of utilizing enums (creating enum user-defined data type)
	// as opposed to comparing variable [color] directly to the int values of 1 2 3 and 4 that represent colors.
	
	
	
	// Now, Why enums are useful ??
	// because without enums,   'color' (the user input) will be compared directly to the int values of 1 2 3 and 4 which
	// means we are purely relying on our memory to know what the number
	// represents = unsustainable = not readable = chances for generating bugs resulting in a long debugging process as
	//our program becomes larger.
	
	// new note added Dec 28th:

	string ChosenColor = ComparingUserEnteredValueToEnumerators(color); // passing the user-entered numerical value that is converted to enColor data type.


	return 0;
}


// Explaining: color = (enColor)c;

// Compiler-level reasoning:
//
// 1️⃣  The expression '(enColor)c' is evaluated first.
//     - 'c' is an integer value entered by the user.
//     - '(enColor)' is an explicit C-style cast.
//     - This instructs the compiler to explicitly convert the integer value
//       of 'c' into the enum user-defined data type 'enColor'
//       (no validation against enum members is performed).
//
// 2️⃣  After the explicit cast is complete,
//     the resulting enum-typed value is assigned to the variable 'color',
//     which is declared as type 'enColor'.


/*
 Will implicit conversion lead to a compilation error?
 ✅ Yes.

 Is it because, a user-defined data type is used?
 ✅ Exactly.

*/
//*************************************************************************************************************************************
//*********************************** NO COMMENTS for B: Enums Initialization via reading user input*********************************** 
//*************************************************************************************************************************************

enum enColor { red = 1, blue = 2, green = 3, yellow = 4 };

void ReadColor(int& c) 
{
	cout << "Enter the number of your favourite color ( red =1, blue = 2, green = 3, yellow = 4): " << endl;
	cin >> c;
	cout << endl;
}

enColor CastIntegerToEnum(int c) 
{
	return (enColor)c;
}

string ComparingUserEnteredValueToEnumerators(const enColor& color)
{
	switch (color)
	{
	case enColor::red:
		return "Red";

	case enColor::blue:
		return "Blue";

	case enColor::green:
		return "Green";

	case enColor::yellow:
		return "Yellow";

	default:
		return "Invalid color value";
	}

}

int main()
{
	enColor color; 

	int c;
	ReadColor(c); 

	color = CastIntegerToEnum(c);

	string ChosenColor = ComparingUserEnteredValueToEnumerators(color);

	cout << "Chosen Color: " << ChosenColor << endl;

	return 0;
	// Note: Invalid user inputs for ranges or characters handling is to be added (Will see that in the upcoming lessons).
}



///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Now in the case that the enumeration constants (enumerators) are assigned to characters, as in:
   enum enOperation { Add = '+', Subtract = '-' };

   // then the prompting message would, for example, be:
   //
   // Enter the symbol of the desired mathematical operation ( Addition = '+', Substraction = '-', Multiplication = '*', Division = '/') 

   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////





   //Added recently: Crucial:
   // 
   // NEVER checkout the solution without first trying:

   // The solution is down below at the very bottom:
   // 
   //----------------------------------------------------------------------------

   // Scenario: 
   // 
   // Assume that there are 3 possible winners:
   // Player1, Computer, No Winner.
   // 
   // Replace the XXX part's

   XXX DetermineWinner(enChoice PlayerChoice)
   {
	   switch (PlayerChoice)
	   {
	   case enChoice::paper:
		   return XXX;         // assume that Player1 is the winner.
	   }
   }








   // solution:
   enWinStatus DetermineWinner(enChoice PlayerChoice)
   {
	   switch (PlayerChoice)
	   {
	   case enChoice::paper:
		   return enWinStatus::Player1;         // assume that Player1 is the winner.
	   }
   }

   /* Solution:
   *   
   * return enWinStatus::Player1;    Therefore the return type is  enWinStatus
   * 
   *  never do:       return "Player1"; 
      As the program is interested in the state itself, not the word.
   
  
   * This function's responsibility is to determine the winner, not to determine how the winner should be displayed.
   *       
   * 
   *                  with "Player1", the program does not care that humans call it "Player1".
   *                  "Player1" is just a label for a state. 
   *                  The system is not interested in the word "Player1" or the label of a state.
   *                  The system is interested in the state itself.
   * 
   * and yes, we need to create an enum user-defined data type that's enWinStatus.
   * ONLY covert to string at the MOMENT when it's needed to do so for printing and NEVER earlier.
   * 
   * */






   /*  Here is AI improved version of the above solution:
   * 
   * 
   * // Solution:
enWinStatus DetermineWinner(enChoice PlayerChoice)
{
    switch (PlayerChoice)
    {
    case enChoice::Paper:
        return enWinStatus::Player1;   // Assume Player1 wins.
    }
}

/*
    DESIGN NOTES

    1) Start by asking:
       "What concept does this function return?"

       This function determines the winner of a round.

       The winner is NOT text.
       The winner is a game state.

       Therefore, the return type should be:

           enWinStatus

    ------------------------------------------------------------

    2) Think in terms of states, not labels.

       A round can only be in one of these states:

           - Player1
           - Computer
           - NoWinner

       Since there is a fixed number of valid states, an enum is
       the appropriate data type.

    ------------------------------------------------------------

    3) The function's responsibility is to determine the winner,
       NOT to decide how the winner should be displayed.

       Correct:

           return enWinStatus::Player1;

       Avoid:

           return "Player1";

       Returning a string mixes game logic with presentation.

    ------------------------------------------------------------

    4) The program reasons about states.

       Humans read labels.

       "Player1" is merely the human-readable label for the state:

           enWinStatus::Player1

       Internally, the program should work with the enum.
       Only convert the enum into text when interacting with the
       user (console, GUI, log file, report, etc.).

    ------------------------------------------------------------

    5) General Design Principle

       Keep information in its most meaningful type for as long
       as possible.

       Convert to strings only at the program's boundaries
       (printing, GUI, files, network messages, etc.).

    ------------------------------------------------------------

    Mental Checklist

    Before choosing a data type, ask:

        • What concept am I representing?
        • What states can that concept have?
        • Does it have a fixed set of valid states?

    If the answer is YES, an enum is usually an excellent choice.
*/
   
   
   
   
   /*      EXTREMLY IMPORTANT STATEMENT TO INCORPORATE:  "the program is interested in the state itself, not the word."
   
    I especially like your realization that "the program is interested in the state itself, not the word." That's a profound insight because
    it applies well beyond enums. Experienced developers constantly distinguish between the model (the program's understanding of reality) 
    and its representation (what humans see). Your enWinStatus is part of the model; "Player1" is merely one possible representation of that model.
   
   * 
    DESIGN NOTES

    ...

    4) The program reasons about states.

       Humans read labels.

       The program is interested in the state itself,
       not the word used to describe that state.

       For example:

           enWinStatus::Player1

       is the state.

           "Player1"

       is merely the human-readable label for that state.

       The label exists for people.
       The state exists for the program.

       Therefore, keep using the enum throughout the program and
       convert it to a string only when communicating with the user
       (console, GUI, log file, report, etc.).

    ...
*/
   
   /*  Even dig deeper on this note:
   * /*
    IMPORTANT IDEA

    Every meaningful concept in a program has two sides:

        1) The internal representation (what the program understands)
        2) The external representation (what humans see)

    Example:

        Internal state:
            enWinStatus::Player1

        External representation:
            "Player1"

    The internal representation should drive the program's logic.

    The external representation should only be used when presenting
    information to a human.
*/
   

/*
    ============================================================
                     PROGRAMMING PHILOSOPHY
    ============================================================

    The program reasons about states,
    not the human-readable words that represent those states.

    Therefore:

        • Represent concepts using the most meaningful type
          (enum, struct, class, etc.).

        • Keep data in that type for as long as possible.

        • Convert to strings only when communicating with
          the outside world (console, GUI, logs, files, network).

    Remember:

        State  ---> Logic
        Label  ---> Presentation

    The state drives the program.

    The label serves the human.
*/
   
   
   
   
   
   
   
   