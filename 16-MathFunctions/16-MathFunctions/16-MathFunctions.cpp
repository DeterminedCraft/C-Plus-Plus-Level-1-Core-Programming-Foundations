
/* Math Functions: They are included in the cmath library. So add it to the header:  #include <cmath>
   Let us examine:

   1- The Square Root function.
   2- The Round function. (تقريب الأعداد)
   3- The Power function. 
   4- The ceil function  (تقريب الأعداد إلى الأعلى).
   5- The floor function (تقريب الأعداد إلى الأسفل).
   6- The absolute value function.

   Note: At this introductory level 1 C ++ course, only the essential math functions are illustrated.
         The more advanced ones will be discussed in the next levels courses.

		 There are many other C ++ math functions:
		 https://en.cppreference.com/w/cpp/header/cmath.html

*/

#include <iostream>
#include <cmath> // One needs to include it. But sometimes not (depending on the IDE). But, always include it.
using namespace std;

//int main()
//{
//	double x = 64;
//	cout << "Square root value of " << x << " is: " << sqrt(x) << endl; // gives 8
//	cout << "Square root value of 50 is: "<< sqrt(50) << endl; // gives 7.07107
//
//	return 0;
//}
// In general a function contains lines of code that I need (or may need in the future) to execute more that one time
// in a single program.
// So,instead of writing the same lines of code again, one would write them only one time wrapped in what's called a function.
// and this function is used (called) whenever needed.

//int main()
//{
//	cout << round(2.4) << endl; // gives 2
//	cout << round(2.5) << endl; // *gives 3 
//	cout << round(2.7) << endl; //gives 3
//	// Notice here that a function returns a value regardless of what it is.
//	cout << sqrt(50) << endl;  // gives 7.07107
//
//	cout << round(sqrt(50)) << endl; //gives 7 // It is possible to use a function inside a fucntion.
//	// here: the sqrt(50) returns 7.07107. 
//	// This number (7.07107) becomes the argument of the round() function.
//	// The round function returns 7.
//
//	return 0;
//}

//int main()
//{
//	cout << round(2.4) + round (5.6) << endl; // gives 8  (2 + 6)
//	// so functions, just exactly as variables, can be normally used in equations. No more no less.
//
//	cout << round(2.4) / 2 << endl; // 1
//	cout << round(2.4) + 5 << endl; // 7
//	cout << (round(2.4) / 2) + round(5.6) << endl; // gives 7  (1 + 6)
//
//	return 0;
//}

//int main()
//{
//	// Print out the solution of 2^4 ( 2 to the power 4)
//	int x = 2;
//	int y = 4;
//
//	cout << x << " to the power " << y << " is: " << pow(x, y) << endl; // 16
//	cout << y << " to the power " << x << " is: " << pow(y, x) << endl << endl; // 16
//
//	cout << "4 to the power 3 is: " << pow(4, 3) << endl;; // 64
//	
//	return 0; 
//}

//int main()
//{
//	// Print out the solution of 2^4 ( 2 to the power 4)
//	int x = 2;
//
//	//int x = x * x; // this had been the old way of doing thins before the concept of functions was introduced.
//	// Instead, do:
//	int result = pow(x, x); // or pow(x,2)
//
//	// and to print it out:
//	cout << result << endl;
//
//	return 0;
//}




/*   ←──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ──── | ────→
   -3   - 2.9 - 2.5 - 2.1 - 2 - 1.5  - 1      0       1     1.5    2      2.1    2.5    2.9    3

*/
//int main()
//{
//	cout << ceil(2.9) << endl;  // gives 3
//	cout << floor(2.9) << endl;  // gives 2
//
//	cout << ceil(-2.9) << endl; //gives -2
//	cout << floor(-2.9) << endl; // gives -3
//
//	cout << ceil(2.1) << endl;  // gives 3
//	cout << floor(2.1) << endl;  // gives 3
//
//	return 0;
//}


//int main()
//{
//	cout << abs(-10) << endl; // gives 10
//	cout << abs(10) << endl;  // gives 10
//
//	return 0;
//}
//------------------------------------------------------------------------------------------------------

/******************** Homework ********************

 #16  #18  #19  #20  #21  #22  #23  #31  #32  #42  #43
  Do the following corrections: Do not directly approximate the calculated area as this creates imprecision.
  Instead, calculate the area as precisely as possible. Then, in the printing line do the approximation.
  Reason is: You may need the calculated area, circumference or value in general, plugged in another formula
  or used in subsequent calculation(s). The final wanted calculation is to be approximated (rounded, ceilinged, floored, etc.)
  if desired.
*----------------------------------------------------------------------------------------------------/

/*  #16 
 Write a program to calculate the area of a rectangle when the following values are given:

- The diagonal length 𝑑
- The width a

Formula:  Area= a * Square Root of (d^2−a^2)
Hint:     Use power function inside the sqrt function
​
*/
//int main()
//{
//	float RectangleDiagonalLength, RectangleWidth, RectangleArea;
//	
//
//	cout << "Enter the Rectangle's Diagonal length: \n";
//	cin >> RectangleDiagonalLength;
//
//	cout << "Enter the Rectangle's Width: \n";
//	cin >> RectangleWidth;
//	cout << endl;
//
//	RectangleArea = RectangleWidth * sqrt(pow(RectangleDiagonalLength, 2) - pow(RectangleWidth,2));
//	
//	cout << "The Rectangle's Area = " << RectangleArea << endl;;
//
//
//	return 0;
//}




/* #18
   Write a program to calculate the Circle area and print it on the screen. Given:

   - The radius (r)

   Formula:    Area = π * r^2
   Hint:       Use the ceiling function (round up) for the area.

*/
//int main()
//{
//	float CircleRadius, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter the Circle Radius: \n";
//	cin >> CircleRadius;
//	cout << endl;
//
//	CircleArea = ceil(PI * pow(CircleRadius, 2));
//	cout << "The Circle Area (rounded up) is: " << CircleArea << endl;
//
//
//	return 0;
// }



/* #19: 
   Write a program to calculate the Circle area and print it on the screen. Given:

   - The Diameter

   Formula:    Area = (π * D^2)/4
   Hint:       Use the ceiling function (round up) for the area.

*/

//int main()
//{
//	float CircleDiameter, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter the Circle's diameter: \n";
//	cin >> CircleDiameter;
//	cout << endl;
//
//	CircleArea = ceil(PI * pow(CircleDiameter, 2) / 4);
//
//	cout << "The circle area is (rounded up): " << CircleArea << endl;
//
//	return 0;
//}



/* #20
   Write a program to calculate the Circle area, inscribed in a square, and print out to the screen. Given:

-The square side length 

Formula : Area = π * ( A^2) / 4
Hint : Use the ceiling function(round up) for the area.

*/

//int main()
//{
//	float SquareSideLength, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter the Square Side Length: \n";
//	cin >> SquareSideLength;
//	cout << endl;
//
//	CircleArea = ceil(PI* pow(SquareSideLength,2)/4);
//	cout << "The inscribed circle area is (rounded up): " << CircleArea << endl;
//
//	return 0;
//}


/* #21
   Write a program to calculate the Circle area along the circumference and print it on the screen. Given:

-The Circle circumference

Formula : Area = (l^2) /(4 * PI)
Hint : Use the floor function(round down) for the area.

*/

//int main()
//{
//	float CircleCircumference, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter the Circle Circumference: \n";
//	cin >> CircleCircumference;
//    cout << endl;
//
//	CircleArea = floor(pow(CircleCircumference,2)/(4 * PI));
//	cout << "The Circle Area (rounded down) = " << CircleArea << endl;
//	return 0;
//}


/* #22 **** recode the formula
   Write a program to calculate the Circle area, inscribed in an isosceles Triangle, and print it on the screen. Given:

-The side length of the triangle a
-The base length of the triangle b

Formula : Area = π * ((b^2)/4) * ((2*a) -b)/((2*a) + b))
Hint : Use the floor function(round down) for the area.

*/

//int main()
//{
//	float TriangleSideLength, TriangleBaseLength, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter the Triangle Side Length: \n";
//	cin >> TriangleSideLength;
//
//
//	cout << "Enter the Triangle Base Length: \n";
//	cin >> TriangleBaseLength;
//	cout << endl;
//
//	CircleArea =floor(PI * (pow(TriangleBaseLength, 2) / 4) * 
//		((2 * TriangleSideLength) - TriangleBaseLength) / 
//		((2 * TriangleSideLength) + TriangleBaseLength));
//	cout << "The Circle Area (rounded down) = " << CircleArea << endl;
//	return 0;
//}
//------------------------------------------------------------------------------------------


/* #23
   Write a program to calculate the Circle area, containing a right-angled triangle. Given:

- The Triangle Hypotenuse c (Longest side).
- The Triangle Adjacent Side b. 
- The Triangle Opposite Side a. 

Formula : Area = π * pow( Opposite * Adjacent * Hypotenuse / (4 * sqrt( s * (s - Opposite ) * (s  - Adjacent) * ( s - Hypotenuse))) ,2)
          Where the Semi Parameter (s) = (Hypotenuse +  Adjacent + Opposite) / 2

Hint :    Round the final answer.
 

*/

//int main()
//{
//	float TriangleHypotenuse, TriangleAdjacent, TriangleOpposite, SemiParameter, CircleArea;
//	const float PI = 3.141592653589793;
//
//	cout << "Enter The Triangle Hypotenuse Length: \n";
//	cin >> TriangleHypotenuse;
//
//	cout << "Enter The Triangle Adjacent Length: \n";
//	cin >> TriangleAdjacent;
//
//	cout << "Enter The Triangle Opposite Length: \n";
//	cin >> TriangleOpposite;
//	cout << endl;
//
//	SemiParameter = (TriangleHypotenuse + TriangleAdjacent + TriangleOpposite) / 2;
//	CircleArea = PI * pow(TriangleOpposite * TriangleAdjacent * TriangleHypotenuse / 
//		         (4 * sqrt(SemiParameter * (SemiParameter - TriangleOpposite) * 
//			     (SemiParameter - TriangleAdjacent) * (SemiParameter - TriangleHypotenuse))), 2);  
//	// the above equation, after typing it out I finallyy wrapped it in a round() function.
//
//	cout << "The circle area containing the Triangle is [Rounded Answer]: " << round(CircleArea) << endl;
//
//
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------

// #31  
/*
 Write a program to ask the user to enter:

 - Number

 and then print the Number^2,  Number^3,  Number^4
 Hint:  Round the FINAL ANSWER.
 
*/

//int main()
//{
//	float number;
//
//	cout << "Enter a number: \n";
//	cin >> number;
//	cout << endl;
//
//	cout << number << "^2 =" << round(pow(number,2)) << " [rounded]" << endl;
//	cout << number << "^3= " << round(pow(number, 3)) << " [rounded]" << endl;
//
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------

// #32 
/*
 Write a program to ask the user to enter:

 - Number
 - M

 and then print the Number^M
 Hint:  Round the FINAL ANSWER.

*/

//int main()
//{
//	float number, m, result;
//
//	cout << "Enter a number: \n";
//	cin >> number;
//	
//	cout << "Enter another number (Will be the power of the first entered one): \n";
//	cin >> m;
//	cout << endl;
//
//	result = pow(number, m);
//
//	cout << number << " ^ " << m << " = " << round(result) << " [rounded]" << endl;
//
//	return 0;
//}
//-----------------------------------------------------------------------------

// #42 
/* Write a program to calculate the task duration in seconds and print it out.
   Given the duration of the task in the number of:
 
 - Days
 - Hours
 - Minutes
 - Seconds

 Hint:  Round the final answer.
*/

//int main()
//{
//	float days, hours, minutes, TotalDurationInSeconds;
//	unsigned short seconds;
//
//	cout << "Enter the number of days: \n";
//	cin >> days;
//
//	cout << "Enter the number of hours: \n";
//	cin >> hours;
//
//	cout << "Enter the number of minutes: \n";
//	cin >> minutes;
//
//	cout << "Enter the numbers of seconds: \n";
//	cin >> seconds;
//
//	const float DaysToSeconds = days * 24 * 60 * 60;  // float type, as days could be in decimal, so the result in such case will be in decimal
//	const float HoursToSeconds = hours * 60 * 60;   // float type, as hours could be in decimal, so the result in such case will be in decimal.
//	const float MinutesToSeconds = minutes * 60;   // float type, as minutes could be in decimal, so the result in such case will be in decimal.
//
//	TotalDurationInSeconds = DaysToSeconds + HoursToSeconds + MinutesToSeconds + seconds; // float type as the result could be in decimal.
//
//	cout << "The Total Task Duration in Seconds [rounded] = " << round(TotalDurationInSeconds) << endl;
//	return 0;
//}

// #43 
/* Write a program that input:.
  
 - The number of seconds

 and changes it to    days:hours:minutes:seconds   
  
 Hint:  Print out this format to the screen & Round the final answer.
*/

int main()
{   
	unsigned int TotalNumberOfSeconds;
	unsigned short  days, hours, minutes, seconds;

	cout << "Enter the total number of seconds: \n";
	cin >> TotalNumberOfSeconds;
	cout << endl;

	const unsigned SecondsInDay = 24 * 60 * 60;  // = 86,400  that is why type can not be   const unsigned short
	const unsigned short SecondsInHour = 60 * 60;
    const unsigned short SecondsInMinute = 60;

	days = TotalNumberOfSeconds / SecondsInDay;      // remember that this is an integer division.
	unsigned int secondsLeft= TotalNumberOfSeconds % SecondsInDay;  // assigning it a unsigned short is potentially fatal.

	hours = secondsLeft / SecondsInHour;
	secondsLeft= secondsLeft % SecondsInHour;

	minutes = secondsLeft / SecondsInMinute;
	seconds = secondsLeft % SecondsInMinute;

	cout << "This equates to " << "[days:hours:minutes:seconds]: " << "[" << days << " : " << hours << " : " << minutes << " : " << seconds << "]" <<endl;

	return 0;
}