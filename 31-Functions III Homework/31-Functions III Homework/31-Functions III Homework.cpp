#include <iostream>
#include <cmath>
using namespace std;

// Note: The solutions here are NOT final, and some of them are considered "primitive."
// These solutions are based only on what we have LEARNED SO FAR.
// The point is: gradually studying programming concepts and practicing along the way
// builds a strong foundation in programming.
// In the upcoming lectures, we will solve these problems the CORRECT way,
// taking into account best practices, which are indispensable.



/* Homework III (Functions): Solve using either functions or procedures (Depending on what's needed).

   #1,#2,#14,#15,#16,   #18,#19,#20,#21,#22,    #23,#31,#32,#42,#43
*/


/*                             ************** AN IMPORTANT REMINDER **************
 Since a procedure does not return a value,
 you MAY place printing or even input statements inside it.
 HOWEVER- it is strongly preferred to pass parameters even to a procedure instead of writing user-input code inside it.

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
 ***********************************************************************************************************************************
   Separate Note:                                    
                                                    🔍 Key point # 1
                                  The value the user enters does NOT determine the type.
                                  The variable you declared determines the type.

                                   So:

                                  float x; → stores 10 as 10.0f

                                  double x; → stores 10 as 10.0

                                  int x; → stores 10 as 10 (no decimal possible)

                                  string x; → stores "10" as text


                                                    🔍 Key point # 2
                                 ✅ 1. In an expression with mixed types, C++ promotes everything to the “highest-precision” type

                                 This is called usual arithmetic conversions or type promotion.

                                 Examples:

                                 int + float → float

                                 float + double → double

                                 int + double → double

                                 float + long double → long double

                                 The purpose is exactly what you said:

                                 ✔ To avoid data loss during the calculation.

                                 ✅ 2. THEN the final result is stored in a variable — which may cause data loss or not
 ***********************************************************************************************************************************
*/

/* #1:      Print "Adam" */

void PrintName()
{
	string name = "Adam";
	cout << name << endl;
}

int main()
{
	PrintName();
	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
/* #2: Write a program to ask the user to enter his/her name and print it on the screen.
*/

void PrintEnteredName(string name) 
{                                    
	cout << name << endl;           
}

int main()
{
	string name;
	cout << "Please enter your name: \n";
	cin >> name;
	cout << endl;

	PrintEnteredName(name);

	return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////////
/* #14:
   Write a program to ask the user to enter:
   - Number1
   - Number2

   Then print the two numbers, then swap the two numbers & print them.
*/
void PrintTheEnteredTwoNumbers(float Num1, float Num2)
{
	cout << "The first entered number is: " << Num1 << endl;
	cout << "The second entered number is: " << Num2 << endl;
}

void SwapTheEnteredTwoNumbers(float &Num1, float &Num2) // Created as a procedure, because a function can only return one specific value,                                                      // and the two swapped numbers cannot be returned together.
{                                                      // '&' means pass-by-reference, so we work with the original Num1 and Num2 from main(),                                                 // instead of creating new variables named Num1 and Num2 (in a different memory space)
	float temp = Num1;                                // whose scope (lifetime and visibility) belong only to the procedure’s own scope.
	Num1 = Num2;                                     
	Num2 = temp;
	// Now the Num1 and Num2 in main() are swapped-
}
int main()
{
	float Num1, Num2;

	cout << "Enter the First Number: \n";
	cin >> Num1;

	cout << "Enter the Second Number: \n";
	cin >> Num2;
	cout << endl;

	PrintTheEnteredTwoNumbers(Num1, Num2);
	SwapTheEnteredTwoNumbers(Num1, Num2);
	PrintTheEnteredTwoNumbers(Num1, Num2);
	/*
   The two lines below are an unoptimized approach, because the function
   PrintTheEnteredTwoNumbers(Num1, Num2) already performs the exact same output.

   cout << "variable named Num1 now = " << Num1 << endl;
   cout << "variable named Num2 now = " << Num2 << endl;
    */
	return 0;
	// Crucial: There is a note block at the very bottom elaborating on this example code.
}
////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #15
   Write a program to calculate rectangle area and print it on the screen:

   - With the user input of width a
   - With the user inpput of height b

   Formula:  Area = a * b  
   */

float RectangleArea(float width, float height)
{
    float area = width * height;
    return area;

}

int main()
{
    float width, height,AreaOfRectangle;

    cout << "Enter the Rectangle's width: \n";
    cin >> width;

    cout << "Enter the Rectangle's height: \n";
    cin >> height;
    cout << endl;

    AreaOfRectangle = RectangleArea(width, height);

    cout << "The Area of the Rectangle is: " << AreaOfRectangle << endl;
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #16: 
   Write a program to calculate Rectangle Area through the diagonal and width and print it on the screen:

   -With the user input of:
        -Width a
        -Diagonal length d

    Formula:    Area = a . Square root ( (d * d) - (a * a))
 */

float RectangleArea(float width, float diagonal)
{
    float area = width * sqrt((diagonal * diagonal) - (width * width));
    return area;

}


int main()
{
    float width, diagonal, AreaOfRectangle;

    cout << "Enter the Rectangle Width: \n";
    cin >> width;

    cout << "Enter the Rectangle Diagonal: \n";
    cin >> diagonal;
    cout << endl;

    AreaOfRectangle = RectangleArea(width, diagonal);

    cout << "Rectangle Area = " << AreaOfRectangle << endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//#18, #19, #20, #21, #22

/* #18: Write a program to calculate Circle Area and then print it on the screen.
    
    - User should input: radius r.

    Formula:  Area = PI * r ^ 2

*/

double AreaOfCircle(float CircleRadius)
{
    const double  PI = 3.141592653589793;
    return PI * CircleRadius * CircleRadius; //Return statement directly computes the value → no unnecessary temporary variable.
}

int main()
{
    float CircleRadius; //CircleRadius as float is fine since radius input is usually not extremely precise
    double CircleArea; // becasue PI is used.

    cout << "Enter the Circle Radius: \n";
    cin >> CircleRadius;
    cout << endl;
    
    CircleArea = AreaOfCircle(CircleRadius);
    
    cout << "Circle area = " << CircleArea << endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
/* #19: Write a program to calculate Circle Area through diameter, then print it on the screen.
        
        -User input for Diameter D

    Formula: Area = PI * (D ^ 2) / 4
*/

double AreaOfCircle(float CircleDiameter)
{
    const double PI = 3.141592653589793;
    return PI * CircleDiameter * CircleDiameter / 4;  
}

int main()
{
    float CircleDiameter;
    double CircleArea;

    cout << "Please enter Circle Diameter: \n";
    cin >> CircleDiameter;  // initialization via user input.
    cout << endl; 

    CircleArea = AreaOfCircle(CircleDiameter);

    cout << "The Circle Area = " << CircleArea << endl;

    return 0; 
}
//////////////////////////////////////////////////////////////////////////////////////////////////
/* #20: 
   Write a program to calculate Circle Area inscribed in a square, then print it to the screen

   User Input: Square side A
   
   Formula:     Circle Area = PI * (A ^ 2) / 4 
*/

double AreaOfCircle(float SquareSide)
{
    const double PI = 3.141592653589793;
    return PI * (SquareSide * SquareSide) / 4;
}

int main()
{
    float SquareSide;
    double CircleArea;

    cout << "Enter the Square Side: \n";
    cin >> SquareSide;
    cout << endl;

    CircleArea = AreaOfCircle(SquareSide);
    cout << "Area of the Circle inscribed in the square = " << CircleArea << endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
/* # 21: Write a program to calculate Circle Area along the circumference, then print it on the screen.
   
   - User Input: Circle Circumference L

   Forumla: Circle Area = L ^ 2 / (4 * PI)

 */

double AreaOfCircle(float CircleCircumference)
{
    double const PI = 3.141592653589793;
    return CircleCircumference * CircleCircumference / (4 * PI);
}


int main() 
{
    float CircleCircumference;
    double CircleArea;

    cout << "Enter the Circumference of the circle: \n";
    cin >> CircleCircumference;
    cout << endl;

    CircleArea = AreaOfCircle(CircleCircumference);

    cout << "The Area of the circle = " << CircleArea << endl;

    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* # 22: Write a program to calculate Circle Area inscribed in an Isosceles Triangle, then print it on the screen.

   - User Input: Length of triangle a.
                 Base of triangle b.

   Forumla: Circle Area = PI * ((b * b) / 4) *  ((2 * a) - b) / ( (2 * a) + b))

 */

double AreaOfCircle(float TriangleLength, float TriangleBase)
{
    const double PI = 3.141592653589793;
    return PI * ((TriangleBase * TriangleBase) / 4) * 
          ((2 * TriangleLength) - TriangleBase) 
         / ((2 * TriangleLength) + TriangleBase);
}

int main()
{
    float TriangleLength, TriangleBase;
    double CircleArea;

    cout << "Enter the Length of the Triangle: \n";
    cin >> TriangleLength;

    cout << "Enter the Base of the Triangle: \n";
    cin >> TriangleBase;

    CircleArea = AreaOfCircle(TriangleLength, TriangleBase);
    
    cout << "The Area of the Circle inscribed in the Triangle = " << CircleArea << endl;

    return 0; 
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
*  #23: Write a program to calculate the Area of the Circle circumscribed around an arbitrary Triangle, then print it on the screen.
*  User Input:

     -Triangle side a
     -Triangle side b
     -Triangle TriangleSide c
* Formula:   
            P  = ( a + b + c ) / 2 (semiperimeter)
            Area = PI * [ ((a*b*c) / (4 * sqrt( P * (P-a) * (P-b) * (P-c)))) ] ^ 2
*/
float SemiperimeterOfTriangle(float TriangleSideA, float TriangleSideB, float TriangleSideC) // فَرِّق تَسُد
{
    return (TriangleSideA + TriangleSideB + TriangleSideC) / 2;
}

double AreaOfCircle(float TriangleSideA, float TriangleSideB, float TriangleSideC, float TriangleSemiperimeter)  // فَرِّق تَسُد
// a function does ONE SPECIFIC thing. Hence, including the Semiperimeter calculation violates the Single Responsibility Principle (SRP) فَرِّق تَسُد
{  //Therefore, we have one pure function !
     double const PI = 3.141592653589793;
     return PI * pow(
         ((TriangleSideA * TriangleSideB * TriangleSideC) / 
         (4 * sqrt(TriangleSemiperimeter * 
         (TriangleSemiperimeter - TriangleSideA) * 
         (TriangleSemiperimeter - TriangleSideB) * 
         (TriangleSemiperimeter - TriangleSideC)))),
         2);
}
int main()
{
    float TriangleSideA, TriangleSideB, TriangleSideC, TriangleSemiperimeter;
    double CircleArea;

    cout << "Enter Triangle's Side A: \n";
    cin >> TriangleSideA;

    cout << "Enter Triangle's Side B: \n";
    cin >> TriangleSideB;

    cout << "Enter Triangle's SideC: \n";
    cin >> TriangleSideC;
    cout << endl;

    TriangleSemiperimeter = SemiperimeterOfTriangle(TriangleSideA, TriangleSideB, TriangleSideC);
    CircleArea = AreaOfCircle(TriangleSideA, TriangleSideB, TriangleSideC, TriangleSemiperimeter);

    cout << "The circle Area = " << CircleArea << endl;

    return 0;
}///////////////////////////////////////////////////////////////////////////////////////////////////////

 //#31, #32, #42, #43
 /*
  #31: Write a program to ask the user to enter:

   - Number

   Then, print Number^2, Number^3, Number^4
   
   // again- For this homework:
   You're asked to solve using either functions or procedures.
  */


  // should be solved using for-loops. However, at this learning stage, you're asked to solve using function or procedures.
double Power2Number(float number)  // فَرِّق تَسُد
{
    return pow(number, 2); 
}

double Power3Number(float number) // فَرِّق تَسُد
{
    return pow(number, 3);
}

double Power4Number(float number) // فَرِّق تَسُد
{
    return pow(number, 4);
}

int main()  // should be solved using for-loops. However, at this learning stage, you're asked to solve using function or procedures.
 {
    float number;
    double NumberToPower2, NumberToPower3, NumberToPower4;
    
    cout << "Please enter a number: \n";
    cin >> number;
    cout << endl;

    NumberToPower2 = Power2Number(number);  
    NumberToPower3 = Power3Number(number);
    NumberToPower4 = Power4Number(number);

    cout << "Number: " << number << " ^ 2 = " << NumberToPower2 << endl;
    cout << "Number: " << number << " ^ 3 = " << NumberToPower3 << endl;
    cout << "Number: " << number << " ^ 4 = " << NumberToPower4 << endl;

    return 0;
 }

//#32
 /*
  #32: Write a program that asks the user to enter:

  - Number
  - M
  
  Then, print the Number ^ M

  */
   
double NumberToPowerM(float number, float m)
{
    return pow(number, m);
}

int main()
{
    float number, m;
    double exponentiation;

    cout << "Enter a number: \n";
    cin >> number;  // Initialization via user input.

    cout << "Enter an exponent: \n";
    cin >> m;  // Initialization via user input.
    cout << endl;

    exponentiation = NumberToPowerM(number, m);

    cout << number << " ^ " << m << " = " << exponentiation << endl;

  return 0;
}///////////////////////////////////////////////////////////////////////////
/* #42: Write a program to calculate the task duration in seconds, then print it on the screen.
        
        Given, the duration of a task in:
        Days, Hours, Minutes, & Seconds.
*/
double DaysToSeconds(float days)
{   
    const double SecondsInOneDay = 24 * 60 * 60;   //86,400 seconds/day
    return days * SecondsInOneDay;
}
double HoursToSeconds(float hours)
{
    const double SecondsInOneHour = 60 * 60;
    return hours * SecondsInOneHour;
}
double MinutesToSeconds(float minutes)
{
    const double SecondsInOneMinute = 60;
    return minutes * SecondsInOneMinute;
}
int main()
{
    float days, hours, minutes, seconds;
    double SecondsFromDays, SecondsFromHours, SecondsFromMinutes, TotalTaskDuration;
    
    cout << "Enter the number of days: \n";
    cin >> days;

    cout << "Enter the number of hours: \n";
    cin >> hours;

    cout << "Enter the number of minutes: \n";
    cin >> minutes;

    cout << "Enter the number of seconds: \n";
    cin >> seconds;
    cout << endl;

    SecondsFromDays = DaysToSeconds(days);
    SecondsFromHours = HoursToSeconds(hours);
    SecondsFromMinutes = MinutesToSeconds(minutes);

    TotalTaskDuration = SecondsFromDays + SecondsFromHours + SecondsFromMinutes + seconds;
    cout << "The Total Task Duration in seconds is: " << TotalTaskDuration << endl;
    return 0;
}
/* Note regarding the above example #42:
   Assigning 'double' was the correct choic in:
   double NumberOfSecondsInEnteredDays, NumberOfSecondsInEnteredHours, NumberOfSecondsInEnteredMinutes, TotalTaskDuration; 
   
 Justification examples:

   ✅ 1. DAYS (requires double)
Example: 12,345 days  (This is not insane — some tasks (server uptime, logs, simulations) can span years).
12,345 days × 86,400 = 1,066,488,000 seconds


➡️ 10-digit result → float loses precision
➡️ Must use double

✅ 2. HOURS (requires double)  
Example: 1,000,000 hours (Not unrealistic — scientific simulation data).
1,000,000 hours × 3600 = 3,600,000,000 seconds


➡️ 10-digit result → float fails
➡️ Must use double

✅ 3. MINUTES (requires double)
Example: 100,000,000 minutes (historical datasets storing time in minutes or long-term scientific modeling).
100,000,000 minutes × 60 = 6,000,000,000 seconds


➡️ 10-digit result → float fails
➡️ Must use double

⭐ Conclusion

If the conversion to seconds produces more than 7 digits,
float becomes inaccurate → double is required.


  /* 
   Why input values are declared as 'float':
   ----------------------------------------
   The user-entered values (days, hours, minutes, seconds) are expected to be 
   reasonable in size. Since 'float' supports a very large numerical range:

       float range ≈ 1.175 × 10⁻³⁸   to   3.402 × 10³⁸

   it is extremely unlikely that a user will enter values outside this range.
   Therefore, using 'float' for the raw user input is sufficient.

   
   Why the *results* must be declared as 'double':
   ----------------------------------------------
   When converting the user input into seconds, we multiply by:

       • 24 × 60 × 60   = 86,400   (days → seconds)
       • 60 × 60        = 3,600    (hours → seconds)
       • 60                        (minutes → seconds)

   These multiplications can produce very large values. Even though 'float'
   can store very large numbers, it provides only 6–7 digits of precision.
   This is NOT enough for large results, because values such as:

       1,066,488,000   seconds
       3,600,000,000   seconds
       6,000,000,000   seconds

   require more than 7 digits of accuracy. A 'float' would 
   lose the lower digits (loss of precision), producing incorrect results.

   'double' provides 15–16 digits of precision, which ensures that all
   computed values remain accurate, even when the totals reach billions.

   Summary:
   --------
   • User input → float   (safe range, small values)
   • Calculations → double (required for precision)

       Type       | Precision     | Range
       -----------|----------------|------------------------
       float      | 6–7 digits     | ~10⁻³⁸ to ~10³⁸
       double     | 15–16 digits   | ~10⁻³⁰⁸ to ~10³⁰⁸
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

/* #43: Write a program that inputs:
        
        - The number of seconds

        and changes to: Days, Hours, Minutes, & Seconds.

        EX:   Input  ➡️ 193,535
              Output ➡️ 2 : 5 : 45 : 35
   
*/
unsigned int SecondsToDays(unsigned int seconds)
{
    const unsigned  SecondsInOneDay = 24 * 60 * 60; //86400  //short has a max of 65,535
    return seconds / SecondsInOneDay;
}

unsigned int RemainderOfSecondsToDays(unsigned int TotalSeconds) // rememeber: argument (unsigned int TotalSeconds) = (unsigned TotalSecond)
{
    const unsigned SecondsInOneDay = 24 * 60 * 60;        // Future improvement- Notice this line is re-computed again. SO make it global
   return TotalSeconds % SecondsInOneDay;
}
unsigned int SecondsToHours(unsigned int remainder)
{
    const unsigned SecondsInOneHour = 60 * 60; // I changed the type from unsigned short to unsigned int (Reason is 
    return remainder / SecondsInOneHour;     // that on this line, math operations on two diff. data types promotes the smaller data type to the larger one      
                                             // so that no data loss occurs ( SecondsInOneHour promoted to unsigned int) resulting in not saving any space in memory.
}
unsigned int RemainderOfSecondsToHours(unsigned int remainder)
{
    const unsigned SecondsInOneHour = 60 * 60;   // Future improvement- Notice this line is re-computed again. SO make it global
    return remainder % SecondsInOneHour;
}
unsigned int SecondsToMinutes(unsigned int remainder)
{
    const unsigned SecondsInOneMinute = 60;    // Future improvement- Notice this line is re-computed again. SO make it global
    return remainder / SecondsInOneMinute;
}
unsigned int RemainderOfMinutesToSeconds(unsigned int remainder)
{
    const unsigned SecondsInOneMinute = 60;
    return remainder % SecondsInOneMinute;
}

int main()
{
    unsigned int TotalSeconds, days, hours, minutes, seconds, remainder;

    cout << "Enter the number of seconds: \n";
    cin >> TotalSeconds;

    days = SecondsToDays(TotalSeconds);
    remainder = RemainderOfSecondsToDays(TotalSeconds);


    hours = SecondsToHours(remainder);
    remainder = RemainderOfSecondsToHours(remainder);

    minutes = SecondsToMinutes(remainder);
    seconds = RemainderOfMinutesToSeconds(remainder);
    
    cout << days << " Days : " << hours << " Hours : " << minutes << " Minutes : " << seconds << " seconds" << endl;
   

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////
/* Invaluable note regarding the above Example #14:
*  1- A swapping function is not possible as function only returns one specific value (the 2 swapped numbers can't be returned). 
 
   2- Having:

      void SwappingTwoNumbers(float Num1, float Num2)

 means the parameters are passed **by value**.

 C++ creates new variables named Num1 and Num2 in a different memory space.
 These variables belong only to the procedure’s own scope.

 Even though they share the same names as the variables in main(),
 they are completely separate because their lifetime and visibility (scope)
 are restricted to the procedure.

 In other words, we are working with *copies* inside the procedure’s scope,
 not the original variables from main().

 Any changes (including swapping) affect only these copies.

📌 Result:
 The swap appears correct inside the procedure,
 but the real Num1 and Num2 in main() never change.

 . In programming, the normal and preferred behavior is that functions do not modify the variables in main(). 
   A pure function only uses its inputs and returns a value without causing side effects.
   Therefore, passing parameters by value is the standard approach because it ensures safety, predictability, and protects the original data from accidental changes.
   The exception is when you intentionally want to modify the caller's (main()) variables
 — for example, swapping two numbers, where passing by reference becomes necessary.


------------------------------------------------------------
        🔍 Memory Model — Pass-by-Value (Copies)
------------------------------------------------------------

main():
    Num1  → 10   (memory address: 0x1000)
    Num2  → 20   (memory address: 0x1004)

SwappingTwoNumbers(float Num1, float Num2):
    Num1  → 10   (memory address: 0x2000)   ← copy
    Num2  → 20   (memory address: 0x2004)   ← copy

   (Swapping occurs here, but only on the copies.)

------------------------------------------------------------
        🔍 Memory Model — Pass-by-Reference (Correct Swap)
------------------------------------------------------------

main():
    Num1  → 10   (0x1000)
    Num2  → 20   (0x1004)

SwappingTwoNumbers(float& Num1, float& Num2):
    Num1  → refers to address 0x1000  ← original
    Num2  → refers to address 0x1004  ← original

   (Swapping here modifies the real variables in main().)
*/
