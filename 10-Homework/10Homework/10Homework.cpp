//  #7, 9, 10, 14, 15, 17, 19, 20, 21, 22, 31, 35, 39, 40, 42, 43, 47, 48

#include <iostream>
using namespace std;

/* #7
   Write a program that asks the user to enter:
   - Number

   Then print the "Half of <number> is <???>



*/ 
//int main()
//{
//    float number;
//    cout << "Enter a number: \n";
//    cin >> number;
//    cout << endl;
//
//    cout << "Half of " << number << " is " << number / 2 << endl;
//    return 0;
//}
////----------------------------------------------------------------------------------------------------------


/* #9
  Write a program to ask the user to enter:

  -Number1, Number2, Number3

  Then print the Sum of the entered numbers
*/
//int main()
//{
//	float Number1, Number2, Number3, Sum;
//	
//	cout << "Enter the first number: \n";
//	cin >> Number1;
//	cout << endl;
//
//	cout << "Enter the second number: \n";
//	cin >> Number2;
//	cout << endl;
//
//	cout << "Enter the third number: \n";
//	cin >> Number3;
//	cout << endl << endl;
//
//	Sum = Number1 + Number2 + Number3;
//
//	cout << "The sum of " << Number1 << " and " << Number2 << " and " << Number3 << " is: " << Sum << endl;
//	return 0;
//}
////----------------------------------------------------------------------------------------------------------

/* #10
   Write a program to ask the user to enter:

    -Mark1, Mark2, Mark3

    Then print the average of the entered marks
*/

//int main()
//{
//    float Mark1, Mark2, Mark3;
//
//    cout << "Enter the first mark: \n";
//    cin >> Mark1;
//    cout << endl;
//
//    cout << "Enter the second mark: \n";
//    cin >> Mark2;
//    cout << endl;
//
//    cout << "Enter the third mark: \n";
//    cin >> Mark3;
//    cout << endl << endl;
//
//    float Average = (Mark1 + Mark2 + Mark3) / 3 ;
//
//    cout << "The average of " << Mark1 << " and " << Mark2 << " and " << Mark3 << " = " << Average << endl;
//    return 0;
//}
////----------------------------------------------------------------------------------------------------------

/* #14
   Write a program that asks the user to enter:
   
    - Number1
    - Number2

    Then print the two numbers, followed by swapping the two numbers and printing them out to the screen.
*/

//int main()
//{
//    float Number1, Number2;
//
//    cout << "Enter the first number: \n";
//    cin >> Number1;
//
//    cout << "Enter the second number: \n";
//    cin >> Number2;
//    cout << endl,
//
//    cout << "The first entered number is: " << Number1 << " and the second entered number is: " << Number2 << endl << endl;
//
//    float temp;
//    temp = Number1;
//    Number1 = Number2;
//    Number2 = temp;
//
//    cout << "The values of the first and second entered numbers have been swapped: \n";
//    cout << "The first number is now: " << Number1 << endl;
//    cout << "The second number is now: " << Number2 << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #15
   Write a program that calculates some rectangle area and print it on the screen

*/
//int main()
//{
//    float Length, Width, Area;
//
//    cout << "Enter the length of the rectangle: \n";
//    cin >> Length;
//
//    cout << "Enter the width of the rectangle: \n";
//    cin >> Width;
//    cout << endl;
//    
//    Area = Length * Width;
//    cout << "The area of this rectangle = " << Area << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #17
   Write a program that calculates some triangle area and print it on the screen
   The formula is:  Area = 1/2 a.h
*/

//int main()
//{
//    float TriangleBase, TriangleHeight, CircleArea;
//
//    cout << "Enter the value for the Triangle's base: \n";
//    cin >> TriangleBase;
//
//    cout << "Enter the value for the Triangle's height: \n";
//    cin >> TriangleHeight;
//    cout << endl;
//
//    CircleArea = (1.0 / 2.0) * TriangleBase * TriangleHeight;  //Careful; in C ++ the / ALWAYS performs an int division IF bth operands are integers such as 5/2 =2, 9/2 =4 etc.
//                                                            // meaning: all decimals are removed. so 0.5 becomes 0
//    cout << "This Triangle's area = " << CircleArea << endl;
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------


/* #19
   Write a program that calculates a circle area through diameter and print it on the screen.
   The formula is:  Area = pi.D^2 / 4
*/
//int main()
//{
//    float CircleDiameter, CircleArea;
//    const float PI = 3.14159;
//
//    cout << "Enter the circle's diameter: \n";
//    cin >> CircleDiameter;
//    cout << endl;
//
//    CircleArea = (PI * CircleDiameter * CircleDiameter) / 4.0; //so even if PI* D² results in integer value, then the final outcome of division will be treated as float since pi is explicitly initialized as a decimal value.
//    cout << "The circle's area = " << CircleArea << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #20
   Write a program that calculates the area of a circle inscribed in a square, and display the result on the screen.
     The formula is: Area = π·A²/4, where A is the length of the square’s side.
*/

//int main()
//{
//    float SquareSide, CircleArea;
//    const float PI = 3.14159;
//
//    cout << "Enter the length of the square's side: \n";
//    cin >> SquareSide;
//    cout << endl;
//
//    CircleArea = PI * SquareSide * SquareSide / 4;
//    cout << "Area of the circle inscribed by the square = " << CircleArea << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #21
   Write a program that calculates a circle's area along the circumference.
    The formula is:  Area = l^2 / 4π, where i is the circumference of the cirlce
*/
//
//int main()
//{
//    float CircleCircumference, CircleArea;
//    const float PI = 3.14159;
//
//    cout << "Enter the value for the circle's circumference: \n";
//    cin >> CircleCircumference;
//    cout << endl;
//
//    CircleArea = CircleCircumference * CircleCircumference / (4 * PI);
//    cout << "The area of this circle = " << CircleArea << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------
/* #22
   Write a program that calculates the area of a circle inscribed in an Isosceles Triangle, and display the result on the screen.
     The formula is: Area = π * ((b^2)/4) * ((2*a)-b) / ((2*a) + b) where a is the length of the 2 two equal sides. b is the base length

*/


//int main()  
//{
//    float TriangleSideLength, TriangleBaseLength, CircleArea;
//    const float PI = 3.14159;
//    
//    cout << "Enter the Triangle's side length: \n";
//    cin >> TriangleSideLength;
//    cout << "Enter the triangle's base length: \n";
//    cin >> TriangleBaseLength;
//    cout << endl;
//
//    CircleArea = PI * ((TriangleBaseLength * TriangleBaseLength) / 4) * ((2 * TriangleSideLength) - TriangleBaseLength) / ((2 * TriangleSideLength) + TriangleBaseLength);
//    cout << "Area of the inscribed circle = " << CircleArea << endl;
//       
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #31
   Write a program that asks the user to enter:

   - A Number.

   Then print  Number^2 
               Number^3
               Number^4
*/
//int main()
//{
//    float Number;
//
//    cout << "Enter a number: \n";
//    cin >> Number;
//    cout << endl;
//
//    cout << Number * Number << endl;
//    cout << Number * Number * Number << endl;
//    cout << Number * Number * Number * Number << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #35
   Write a program that asks the user to enter:

   - The number of Pennies 
   - The number of Nickels   ( 1 Nickel = 5 Pennies)
   - The number of Dimes     ( 1 Dime = 10 Pennies)
   - The number of Quarters  ( 1 Quarter = 25 Pennies)
   - The number of Dollars   ( 1 Dollar = 100 Pennies)

   Then, calculate the total in both Pennies & Dollars.
*/
//int main()
//{
//   unsigned short Cents, Nickles, Dimes, Quarters, Dollars, TotalInPennies; // remember: unsigned short = unsigned short int
//   float TotalInDollars;
//
//   cout << "Enter the number of Cents: \n";
//   cin >> Cents;
//
//   cout << "Enter the number of Nickes: \n";
//   cin >> Nickles;
//
//   cout << "Enter the number of Dimes: \n";
//   cin >> Dimes;
//
//   cout << "Enter the number of Quarters: \n";
//   cin >> Quarters;
//
//   cout << "Enter the number of Dollars: \n";
//   cin >> Dollars;
//   cout << endl;
//
//   TotalInPennies = Cents + (Nickles * 5) + (Dimes * 10) + (Quarters * 25) + (Dollars * 100);
//   cout << "The total in Pennies = " << TotalInPennies << endl;
//
//   TotalInDollars = TotalInPennies / 100.0;
//   cout << "The total in Dollars = " << TotalInDollars << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #39
   Write a program that reads a TotalBill and CashPaid. Calculate the change to be payed back to the customer
   
*/
//int main()
//{
//    float TotalBill, CashPaid, ChangeToPayBack;
//
//    cout << "What is the Total Bill amount ?: \n";
//    cin >> TotalBill;
//
//    cout << "What is the Cash Paid amount ?: \n";
//    cin >> CashPaid;
//    cout << "\n";
//
//    ChangeToPayBack = CashPaid - TotalBill;
//    
//    if (ChangeToPayBack >= 0)
//    {
//        cout << "Change to payback to customer: " << ChangeToPayBack << " $" << endl;
//    }
//   
//    else
//    {
//        cout << "The customer must pay additional " << -ChangeToPayBack << " $" << endl; // multiply by - so the number becomes positive.
//    }
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #40
   A restaurant charges 10 % Service Fee & 16 % Sales Tax.

   Write a program that reads the TotalBill and then adds the Service Fee & the Sales Tax. 
   Then, print out the total amount onto the screen.

*/
//int main()
//{
//    float ServiceFee = 0.1, SalesTax = 0.16;
//    float TotalBillWithoutFees, FinalBillWithFees;
//
//    cout << "Enter the amount for the Total Bill: \n";
//    cin >> TotalBillWithoutFees;
//    cout << endl;
//
//    //FinalBillWithFees = TotalBillWithoutFees + (TotalBillWithoutFees * (ServiceFee + SalesTax)); // how we got to the next line (just math)
//    FinalBillWithFees  = TotalBillWithoutFees * (1 + ((ServiceFee + SalesTax)));
//    cout << "The final total bill = " << FinalBillWithFees << endl;
//    cout << "Where Service Fee = " << ServiceFee * 100 << "% & Sales Tax = " << SalesTax * 100 << "%" << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/* #42 
   User is to enter the number of days, hours, minutes, and seconds.

   These inputs represent the duration of some single task.
   Print out this task duration in seconds.
*/
////-----------------------------------------------------------------------------------------------------------------------------------
//int main()
//{
//    float Days, Hours, Minutes, TotalDuration;
//    unsigned short Seconds;
//
//    const float SecondsInADay = 24 * 60 * 60; 
//    const unsigned short SecondsInHour = 60 * 60, SecondsInMinute = 60;
//   
//    cout << "Enter the number of Days: \n";
//    cin >> Days;
//
//    cout << "Enter the number of Hours: \n";
//    cin >> Hours;
//
//    cout << "Enter the number of Minutes: \n";
//    cin >> Minutes;
//    
//    cout << "Enter the number of Seconds: \n";
//    cin >> Seconds;
//    cout << endl;
//
//    TotalDuration = (Days * SecondsInADay) + (Hours * SecondsInHour) + (Minutes * SecondsInMinute) + Seconds;
//    
//   
//    cout << "The total duration (In Seconds) for this task = " << TotalDuration << endl;
//
//    return 0;
//}
////-----------------------------------------------------------------------------------------------------------------------------------

/*  #43
    Write a program that inputs:

    - Number of Seconds.

     and changes it to Days, Hours, Minutes, and Seconds.
     Example:

     Input    193,535
     Output   2:5:28:55  
     Output   2:5:28:55  ( Tip = 2 days, 5 hours, 28 minutes, 55 seconds.)
 

*/
//int main()
//{
//     const unsigned int SecondsInADay = (24 * 60 * 60);
//     const unsigned short SecondsInAnHour = (60 * 60), 
//                         SecondsPerMinute = 60;  // Could've add it to the above line but this is better for readability.
//   
//    
//     unsigned short NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
//     unsigned int TotalNumberOfSecondsEnteredByUser; // Not unsigned short which has a max of  65,536. Here user could easily enter 198678 and so forth.
//
//     cout << "Enter the total number of Seconds to be converted into the format [Days:Hours:Minutes:Seconds]: \n";
//     cin >> TotalNumberOfSecondsEnteredByUser;
//     cout << endl;
//
//     NumberOfDays = TotalNumberOfSecondsEnteredByUser / SecondsInADay;
//     unsigned int RemainingSeconds = TotalNumberOfSecondsEnteredByUser % SecondsInADay;
//     
//     NumberOfHours = RemainingSeconds / SecondsInAnHour;
//     RemainingSeconds = RemainingSeconds % SecondsInAnHour;
//
//     NumberOfMinutes = RemainingSeconds / SecondsPerMinute;
//     NumberOfSeconds = RemainingSeconds % SecondsPerMinute;
//
//     cout << "[ " <<  NumberOfDays << " : " << NumberOfHours << " : " << NumberOfMinutes << " : " << NumberOfSeconds << " ]" << endl;
//
//
//    return 0;
//}
////--------------------------------------------------------------------------------------------------------------------------------------

/*  #47
   Write a program that asks the user to enter:

   - LoanAmount
   - MonthlyPayment
   
   and calculate the number of months needed to settle this loan.

*/

//int main()
//{
//    float LoanAmount, MonthlyPayment, NumberOfMonthsToPayLoan;
//    
//    cout << "Enter the Loan Amount: \n";
//    cin >> LoanAmount;
//
//    cout << "Enter the Monthly Payment: \n";
//    cin >> MonthlyPayment;
//    cout << endl;
//
//    if (MonthlyPayment == 0)
//    {
//        cout << "Monthly payment can NOT be 0 \n";
//        return 1;  // Abruptly exits the program.
//    }
//
//    NumberOfMonthsToPayLoan = LoanAmount / MonthlyPayment;  // Why C++ compiler not throwing an exception (where program ceases the execution) when MonthlyPayment = 0 ??
//                                                            // (When the above it statement is removed).
//                                                            // assume that both numbers do not have a decimal & that the result contains a decimal.
//                                                           // I thought the compiler will remove the decimal since / is an integer operator, but it does not !!
//    cout << "The number of months needed to pay off the loan is: " << NumberOfMonthsToPayLoan << endl;
//   
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------------------------

/*  #48
   Write a program that asks the user to enter:

   - LoanAmount
   - MonthsToSettleLoan
   

   and calculate the monthly installment amount.

*/
//-----------------------------------------------------------------------------------------------------------------------------------------------------

//int main()
//{
//    float LoanAmount, MonthsToSettleLoan, MonthlyPayment;
//
//    cout << "Enter the Loan Amount: \n";
//    cin >> LoanAmount;
//
//    cout << "Enter the Months needed to pay off the loan: \n";
//    cin >> MonthsToSettleLoan;
//    cout << endl;
//
//    if (MonthsToSettleLoan == 0)
//    {
//        cout << "Months to pay off the loan can NOT be 0";
//        return 1;
//    }
//
//    MonthlyPayment = LoanAmount / MonthsToSettleLoan;
//    cout << "Monthly payment = $ " << MonthlyPayment << endl;
//
//    return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------------------------