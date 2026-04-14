
// How to implement arrays using for-loops.
#include <iostream>
using namespace std;


 
 /*
  Crucial prerequisite note 🧠:

  In standard C++, an array is a fixed-length data structure.
  This means the number of elements it holds (its length) must be specified 
  at the MOMENT of declaration and must be known at compile time.

  Example — creating a fixed-length array:

  string names[5]; ✅

  Or using a compile-time constant:

  const int NumberOfElements = 5;
  string names[NumberOfElements]; ✅

  Howerver, it is NOT allowed to declare an array without specifying its size:

  string names[];          // ❌ invalid: size is missing.

  Nor is it allowed to use a runtime value (such as user input):

  int NumberOfElements;
  cin >> NumberOfElement
  string names[NumberOfElements]; // ❌ invalid in standard C++

  In standard C++, an array cannot be declared first
  and then have its length determined later by user input or any runtime value.

  this behavior CAN be achieved using dynamic containers such as vectors.
  However, vectors are NOT covered at this level and will be introduced
  in the next course (C++ Level 2), where they are specifically designed
  for handling runtime-sized collections.
 ------------------------------------------------------------------------------------
                               So, how to do it ?
  How to store values in the array, whose count is decided by reading the user input ?

  Answer: At our current level, there is only one way of going about it:

  simply declare an array variable with a high number of elements:

  int array[100]; // Explicitly instructing the user to enter 1 through 100

  and also declare a variable representing the number of elements:

  int NumberOfElements;

  so that, for example, you have:  */
  
  int array [100], NumberOfElements = 0; // NumberOfElements is the number that the user will enter representing the number of elements that will be stored in the array.
  
   //initializing the variable 'NumberOfElements' and the array variable 'number':
  ReadDataOfArray(NumberOfElements, number);

	//whose implementation is:
	void ReadArrayData(int arr1[100], int& NumberOfElements) // arrays are AUTOMATICALLY passed by ref. Including & symbol will cause an exception.
      {
         cout << "How many numbers do you want to enter ? (from 1 to 100): \n";
         cin >> NumberOfElements;

         for (int i = 0; i < NumberOfElements; i++) //  ex: if user enters NumberOfElements of 5:   i=0 , i=1, i=2, i=3, i=4 (the body will execute 5 times).
         {
           cout << "Please enter Number " << i + 1 << ": " << endl;
           cin >> arr1[i];
         }
         cout << endl;
      }
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 



/* Decide the number of elements the array will have ?: 3 (user should be able to enter any number from 1 to 100).
   
   Enter the first element:  11
   Enter the second element: 33
   Enter the third element:  25
   
   *************************************
   The first element you entered is: 11
   The second element you entered is: 33
   The third element you entered is: 25


*/

// Solution: 
// This is NOT a final solution as it's suitable at the level we're currently at.It will be solved properly in the upcoming lessons.
// The above pre-requisite note is crucial to begin solving this problem at our current level.

void ReadDataOfArray(int& NumberOfElements, float number[100])
{
	cout << "Enter the number of elements the array is going to have ?: \n";
	cin >> NumberOfElements;
	cout << endl;

	for (int i = 0; i < NumberOfElements; i++)
	{
		cout << "Enter element " << i + 1 << " :" << endl;
		cin >> number[i];
	}

}

void PrintDataOfArray(const int& NumberOfElements, float number[100]) // by reference for both parameters
{
	for (int i = 0; i < NumberOfElements; i++)
	{
		cout << "Element number " << i + 1 << " entered is: " << number[i] << endl;
	}
	
}

int main()
{
	float number[100]; // reserves 100 memory spaces for the array that, at this moment, are empty.
	int NumberOfElements = 0;

	//initializing the variable 'NumberOfElements' and the array variable 'number'
	ReadDataOfArray(NumberOfElements, number); 

	// The variable ''NumberOfElemens' & the array variable 'number' are now initialized.
	cout << "*************************************\n";
	PrintDataOfArray(NumberOfElements, number);

	return 0;
}




// create the following example program:

/* How many numbers do you want to enter ? (from 1 to 100):
   5

   Please enter Number 1:
   100
   Please enter Number 2:
   99
   Please enter Number 3:
   55
   Please enter Number 4:
   77
   Please enter Number 5:
   88                       // then immediately the info below is printed:

   Number 1 entered is : 100
   Number 2 entered is : 99
   Number 3 entered is : 55
   Number 4 entered is : 77
   Number 5 entered is : 88

   *********************************
   Sum = 419
   Average = 83.8


*/


//void ReadArrayData(int arr1[100], int& NumberOfElements) // arrays are AUTOMATICALLY passed by ref. Including & symbol will cause an exception.
//{
//    cout << "How many numbers do you want to enter ? (from 1 to 100): \n";
//    cin >> NumberOfElements;
//
//    for (int i = 0; i < NumberOfElements; i++) //  ex: if user enters NumberOfElements of 5:   i=0 , i=1, i=2, i=3, i=4 (the body will execute 5 times).
//    {
//        cout << "Please enter Number " << i + 1 << ": " << endl;
//        cin >> arr1[i];
//    }
//    cout << endl;
//}
//
//
//
//void PrintArrayData(const int arr1[100], const int &NumberOfElements) // passing both by const reference. Including & symbol for the array will result in throwing an exception.
//{
//    for (int i = 0; i < NumberOfElements; i++)
//    {
//        cout << "Number " << i + 1 << " entered is: " << arr1[i] << endl;
//    }
//}
//
//
//
//int CalculateArrayElementsSum(int arr1[100], int NumberOfElements) // passing by value.
//{   
//    int sum = 0;
//    for (int i = 0; i < NumberOfElements; i++)
//    {
//        sum += arr1[i]; //  same as   sum = sum + arr1[i]
//    }
//
//    return sum;
//}
//
//
//
//float CalculateAverageOfArrayElements(int arr1[100], int NumberOfElements) // passing by value.
//{
//    int sum = 0;
//    for (int i = 0; i < NumberOfElements; i++)
//    {
//        sum += arr1[i];
//    }
//    return sum / (float)NumberOfElements;
//}
//
//
//int main()
//{
//    int arr1[100], NumberOfElements = 0;
//    // reserves 100 spaces in memory that are, at this moment, empty (Plus, in programming it's not required to fill up all these spaces in memory for an array).
//    // NumberOfElements is the number that the USER will enter representing the number of elements that will be stored in the array via reading user input.
//
//    // Initializing the array variable via reading user input:
//
//    // ** This procedure's job is to ask the user for the number of elements that will be stored in the array & then storing them in the array (in programming we're not required to fill out ALL the reserved spaces in memory (in this specific examples they are 100 reseved so far empty spaces in memory for the array)
//    ReadArrayData(arr1, NumberOfElements);  // typing  arr1[100] ❌ refers to the 101 element which DNE & is out of bound ❌
//                                  // since arr1 is an array- it is passed as an argument, in this calling function, along with its memory address, 
//                                  // thats why arrays are ALWAYS passed by reference in the implementing function with no need to type the & symbol.
//
//    // The array variable 'arr1[100]' and 'NumberOfElements' variable are now initialized.
//
//    PrintArrayData(arr1, NumberOfElements);
//
//    cout << "*********************************\n";
//
//    int SumOfArrayElements = CalculateArrayElementsSum(arr1, NumberOfElements);
//    float AverageOfArrayElements = CalculateAverageOfArrayElements(arr1, NumberOfElements); // doing it the long way for learning purposes.
//
//    // CalculateAverageOfArrayElements(SumOfArrayElements)  would be the most optimized real-time choice.
//    // with the function implementation being as follows:
//    /* 
//      float  AverageOfArrayElements(int ResultOfAddingArrayElements, int NumberOfElements)
//      {
//          return  ResultOfAddingArrayElements / (float)NumberOfElements;
//      }
//    */
//    cout << "Sum of all elements in the array is: " << SumOfArrayElements << endl;
//    cout << "The average of all elements in the array is: " << AverageOfArrayElements << endl;
//
//    return 0;
//}
/////////////////////////////////////////////////////////////////////////////

 /* --------------------------------------------------------------------------------
  📌 Separate Side note 1:
  A const variable must be initialized at the time of declaration:

  const int NumberOfElements; // ❌ invalid
  const int NumberOfElements = 5; // ✔️ valid

 -------------------------------------------------------------------------------------

  📌 Separate Side note 2:
  declaring a 'y' integer without initializing it as in:

  int y;
  someProcedureOrFunction(y);

  is ❌ wrong and dangerous:

      y is declared but NOT initialized
      It contains garbage (indeterminate) value
      That garbage value is passed into someProcedureOrFunction

  👉 Using y before it is assigned a value = Undefined Behavior
   ---------------------------------------------------------------------------------------
 *//////////////////////////////////////////////////////////////////////////////////////// 
// additional notes:
// 
//   declaring a 'NumberOfElements' integer without initializing it as in:
//
//   int arr1[100], NumberOfElements;
//   ReadArrayData(arr1, NumberOfElements);
//
//   is ❌ wrong and dangerous:
//
//      NumberOfElements is declared but NOT initialized
//      It contains garbage (indeterminate) value
//      That garbage value is passed into ReadArrayData
//
//  👉 Using NumberOfElements before it is assigned a value = Undefined Behavior
//
//
//*/













































