

#include <iostream>
using namespace std;

/* Before delving into this homework, Here are 2 key notes:
 
                             /* Note #1:
  For a boolean variable, initializing it DIRECTLY with 1 / true or 0 / false
  will store the value in memory as either:
  - 1 for true
  - 0 for false

  When printing a boolean variable using cout, the output will be 1 or 0 by default.

  ⚠️ Important input note:
  Initializing a bool via READING USER INPUT using:
    cin >> boolVariable;
  expects the user to enter:
    1 (for true) or 0 (for false)

  Entering the words "true" or "false" is dangerous and unreliable.
  Depending on the compiler and stream settings, such input MAY fail silently,
  leaving the boolean variable unchanged or set to false.

  This can cause logical conditions such as:
      if (PersonalInfo.age > 21 && PersonalInfo.HasDriverLicense)
  to fail unexpectedly, even if the user typed "true".

  ✅ Best practice:
  Always instruct the user to enter:
      1 for true
      0 for false
  when reading boolean values via cin.
*/
//**********************************************************************************************
/* 
                             Note #2:
               Review  By Value Vs By Reference notes in file #36
*/
//********************************************************************************************************************************



/* Homework: #4, #8, #11, #24, #49

*/

/*
 #4: 
 Write a program that asks the user to enter their:

 - Age.
 - and if he/ she has a Driver License.

 Then print "Hired" if their age is greater than 21 and if they have a driver license.
 Otherwise, print rejected.


*/



//struct stApplicantInfo
//{
//    unsigned short age;
//    bool HasDriverLicense;
//};
//
//void ReadApplicantInfo(stApplicantInfo&PersonalInfo)
//{
//    cout << "Enter your age: \n";
//    cin >> PersonalInfo.age;
//    cout << endl;
//
//    cout << "Do you have a Driver License (1 = Yes, 0 = No): \n";
//    cin >> PersonalInfo.HasDriverLicense;
//    cout << endl;
//}
//
//bool IsHired(const stApplicantInfo &ApplicantInfo)
//{
//    return (ApplicantInfo.age > 21 && ApplicantInfo.HasDriverLicense);
//}
//
//void PrintHiringDecision(const bool &HiringDecision) // فَرِّق تَسُد
//{
//    if (HiringDecision)
//    {
//        cout << "Hired !" << endl;
//    }
//    else
//    {
//        cout << "Rejected !" << endl;;
//    }
//}
//
//
//
//int main()
//{
//    stApplicantInfo ApplicantInfo;
//
//    //Initializing the variable via user input
//    ReadApplicantInfo(ApplicantInfo);
//
//    bool IsHiredDecision= IsHired(ApplicantInfo);
//    PrintHiringDecision(IsHiredDecision);
//   
//
//    return 0;
//}
////**************************************************************************************************************************
/*
 #8:
 Write a program that asks the user to enter:

 - A mark

 Then print "Pass" if  mark >= 50,
 Otherwise, print "Fail".


*/


//void ReadMark(float& mark)
//{
//    cout << "Enter a mark: \n";
//    cin >> mark;
//    cout << endl;
//}
//
//bool IsMarkPassing(const float& mark)
//{
//    return (mark >= 50);
//}
//
//void PrintMark(const bool &IsMark)
//{
//    if (IsMark)
//    {
//        cout << "Passed !" << endl;
//    }
//    else
//    {
//        cout << "Failed !" << endl;
//    }
//}
//
//int main()
//{
//    float mark;
//
//    // Initialization via user input
//    ReadMark(mark);
//
//    bool IsPassing = IsMarkPassing(mark);
//    PrintMark(IsPassing);
//
//
//    return 0;
//}
//******************************************************************************************************************************

/*
 #11:
 Write a program that asks the user to enter:

 - Mark1, Mark2, Mark3

 Then print the Average of the entered marks, and print "PASS" if the average >= 50.
 Otherwise, print "FAIL".

 Example Inputs:
 90
 80
 70 

 Outputs ->
 80 
 PASS

*/



//struct stMarks
//{
//    float Mark1;
//    float Mark2;
//    float Mark3;
//};
//
//void ReadMarks(stMarks &marks)
//{
//    cout << "Enter Mark1: \n";
//    cin >> marks.Mark1;
//    cout << endl;
//
//    cout << "Enter Mark2: \n";
//    cin >> marks.Mark2;
//    cout << endl;
//
//    cout << "Enter Mark3: \n";
//    cin >> marks.Mark3;
//    cout << endl;
//}
//
//bool IsPassingAverage(const float &MarksAverage)
//{
//    return (MarksAverage >= 50)
//    
//}
//
//float CalculateAverage(stMarks marks) // passing by value.
//{
//    return (marks.Mark1 + marks.Mark2 + marks.Mark3) / 3;
//}
//
//void PrintAverageResult(const bool &IsPass)
//{
//    if (IsPass)
//    {
//        cout << "Passing Average." << endl;
//    }
//    else
//    {
//        cout << "Failing Average." << endl;
//    }
//}
//
//int main()
//{
//    stMarks marks;
//
//    // Initializing via user input:
//    ReadMarks(marks);
//
//    // variable 'marks' is now initialized.
//    float MarksAverage = CalculateAverage(marks);
//
//    cout << MarksAverage << endl;
//
//    bool IsPass = IsPassingAverage(MarksAverage);
//
//    PrintAverageResult(IsPass);
//
//
//    return 0;
//}




/* #24
  Write a program that asks the user to enter;

  -Age

  If age is between 18 and 45 (inclusive range), print "Valid Age". Otherwise, print "Invalid Age".

*/


void ReadAge(unsigned short& age) // passing by ref.
{
    cout << "Enter age: \n";
    cin >> age;
    cout << endl;
}

bool IsAgeValid(const unsigned short& age)
{
    return (age >= 18 && age <= 45);
}

void PrintAgeInfo(const bool& IsValid)
{
    if (IsValid)
    {
        cout << "Valid age" << endl;
    }
    else
    {
        cout << "Some invalid age" << endl;
    }
}

int main()
{
    unsigned short age;

    //Initializing via user input
    ReadAge(age);

    //variable 'age' is now fully initialized.
    bool IsValid = IsAgeValid(age);
    
    PrintAgeInfo(IsValid);

    return 0;
}




















/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* #49
  Write a program that reads the ATM PIN code from the user,
  then check if the PIN Code = 1234 and then show the balance to the user.

  Otherwise, print "Wrong PIN".
  
  Assume the user balance is 7500

  Example:
  
  Input: 1234
  Output: Your balance is 7500

  or

  Input: 5151
  Output: Wrong PIN

*/


