// 69-Homework- Nested For Loops.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
using namespace std;
// Write programs to do the following:
//
// Tip:
// As noticed below, these problems are initially listed sequentially
// without their respective solutions.
//
// Therefore, predict each solution one after the other.
// Finally, check their respective solutions.


/*
  AA
  AB
  AC
  AD
  .
  .
  .
  ZZ

*/


/*
    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *


*/



/*   
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8
    1 2 3 4 5 6 7
    1 2 3 4 5 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1


*/



/*
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
  1 2 3 4 5 6
  1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8
  1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8 9 10


*/


/*
  A
  A B
  A B C
  A B C D
  A B C D E
  A B C D E F


*/
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


    /***************************************************************************************************************************************************/
    /******************************************************* Solutions *********************************************************************************/

/* 
  AA
  AB
  AC
  AD
  .
  .
  .
  ZZ

*/

//// reference:  https://www.asciitable.com/
//// My prefered solution:
//int main()
//{
//    for (char i = 65; i < 91; i++)
//    {
//        cout << "Letter " << i << ":" << endl;
//
//        for (char j = 65; j < 91; j++)
//        {
//            cout << i << j << endl;
//        }
//        cout << "----------------------\n";
//    }
//
//    return 0;
//}
// 
// 
// 
//// or (Mo3alem 7al):
//int main()
//{
//    for (int i = 65; i < 91; i++)
//    {
//        cout << "Letter " << char(i) << ":" << endl;
//
//        for (int j = 65; j < 91; j++)
//        {
//            cout << char(i) << char(j) << endl;
//        }
//        cout << "----------------------\n";
//    }
//
//    return 0;
//}


 // Another solution:
 //int main()
 // { 
 //for (char i = 'A'; i <= 'Z'; i++)
 //  {
 //    cout << "Letter " << i << ":" << endl;

 //    for (char j = 'A'; j <= 'Z'; j++)
 //     {
 //        cout << i << j << endl;
 //     }
 //    cout << "----------------------\n";
 //  }

 // }
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *


*/


//int main()
//{
//    for (int i = 10; i >= 1; i--)
//    {
//        for (int j = 1; j <= i; j++)  // always mentally trace for at least the first two iterations
//        {
//            cout << "*";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
    1 2 3 4 5 6 7 8 9 10
    1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8
    1 2 3 4 5 6 7
    1 2 3 4 5 6
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1


*/

//int main()
//{
//    for (int i = 10; i >= 1; i--)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << " "; // do not forget the spacing between numbers
//           
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


/*
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5
  1 2 3 4 5 6
  1 2 3 4 5 6 7
  1 2 3 4 5 6 7 8
  1 2 3 4 5 6 7 8 9
  1 2 3 4 5 6 7 8 9 10


*/


//int main()
//{
//    for (int i = 1; i <= 10; i++)
//    {
//        for (int j = 1; j <= i; j++)
//        {
//            cout << j << " "; // do not forget the spacing between numbers
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
///////////////////////////////////////////////////////////////////////////////////////

/*
  A
  A B
  A B C
  A B C D
  A B C D E
  A B C D E F


*/

//// My own solution: 
//int main()
//{
//    for (char i = 65; i <= 70; i++)
//    {
//        for (char j = 65; j <= i; j++)
//        {
//            cout << j << " "; // do not forget the spacing between letters.
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

//// OR: 7al al mo3alem
//int main()
//{
//    for (int i = 65; i <= 70; i++)
//    {
//        for (int j = 65; j <= i; j++)
//        {
//            cout << char(j) << " "; // do not forget the spacing between letters.
//        }
//        cout << endl;
//    }
//
//
//    return 0;
//}

int main()
{
    for (char i = 'A'; i <= 'E'; i++)     // exersize: Replace E with Z and draw your conclusion.
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " "; // do not forget the spacing between letters.
        }
        cout << endl;
    }


    return 0;
}