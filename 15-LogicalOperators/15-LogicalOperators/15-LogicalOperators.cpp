
/*
    Given:
        bool A = 1;   // same as typing  bool A = true;
        bool B = 0;  // same as  typing bool B = false;

    // Either way, what will be stored and displayed is 1 or 0 for A and B.

| **Logical Operator** | **Description**                              | **Example** (A & B values are given above)   | **Stored/Displayed RESULT**  |
| -------------------- | -------------------------------------------- | -------------------------------------------- | ---------------------------- |
| &&                   | Called Logical AND Operator.                 | (A && B) → (true && false) = false           | 0                            |
|                      | Both CONDITIONS must be true,                | (A && true) → true && true = true            | 1                            |
|                      | so that the RESULT (boolean) is true.        |                                              |                              |
|                      |                                              |                                              |                              |
| ||                   | Called Logical OR Operator.                  | (A || B) → (true || false) = true            | 1                            |
|                      | One of the CONDITIONS must be true           | (false || false) = false                     | 0                            |
|                      | so that the RESULT (boolean) is true.        |                                              |                              |
|                      |                                              |                                              |                              |
| !                    | Called Logical NOT Operator.                 | !(A && B) → !(true && false) = !false = true | 1                            |
|                      | It reverses the RESULT (boolean) state.      | !(A || B) → !(true || false) = !true = false | 0                            |
-----------------------------------------------------------------------------------------------------------------------------------------------------

Tip:
    Always resolve both sides of the operator to true/false so the final result (boolean type) becomes:
        - true  → stored as 1 in memory 
        - false → stored as 0 in memory
*/


#include <iostream>
using namespace std;

//int main()
//{
//    bool A = 1, B = 0;
//
//    cout << (A && B) << endl;  //0
//    cout << (A || B) << endl;  //1
//    cout << !A << endl;        //0
//    cout << !B << endl;        //1
//    cout << !(A && B) << endl; //1
//    cout << !(A || B) << endl; //0
//    
//    cout << ((A && B) || (A || !B)) << endl; //1   Note: the whole statement has to be wrapped in (). Otherwise, an a compiler error is thrown.
//    cout << (!(A && B) && (A || !B)) << endl << endl; //1 Note: the whole statement has to be wrapped in (). Otherwise, an a compiler error is thrown.
//    
//    return 0;
//}

// But for readability, we modify the above program to:
//int main()
//{
//    int A = 1, B = 0;
//
//    cout << "(" << A << " && " << B << " ) = " << (A && B) << endl;  // (1 && 0) = 0
//    cout << "(" << A << " || " << B << ") = " << (A || B) << endl;   // (1 || 0) = 1
//    cout << "!" << B << " = " << !B << endl;                         // !0 = 1
//    cout << "!(" << A << " && " << B << ") = " << !(A && B) << endl; // !(1 && 0) =1
//    cout << "!(" << A << " || " << B << " ) = " << !(A || B) << endl << endl; // !(1 || 0 ) =0
//    
//   // and if I want to store the RESULT of (A && B) & then printing it out on the screen:
//    bool Result = (A && B);
//    cout << "Printing some result: " << Result << endl << endl;
// 
//    return 0;
//}
 ////---------------------------------------------------------------------------------------------------
 
//// another example:
//int main()
//{
//    bool result = (true && 0);
//
//    cout << result << endl << endl;  //0
//    return 0;
//}

/*  Exercise-  Without coding, solve the following expression:

          NOT(5 > 6 OR 7 = 7) AND NOT(1 OR false)
         → NOT(false OR true) AND NOT(true OR false)
         → NOT(true) AND NOT(true)
         → false AND false
  Result → false  → stored as 0 in memory and printed out as 0 using cout.
*/


/*  Exercise- HardCode the following expression (No user input) and print out the result

          NOT(5 > 6 OR 7 = 7) AND NOT(1 OR false)
 */
     
//int main()
//{
//    bool result = !(5 > 6 || 7 == 7) && !(1 || false);
//    cout << result << endl;
//
// return 0;
// // The main takeaway:
//   // 7 = 7 will NOT compile because '=' is the assignment operator.
//   // '==' is the equality (comparison) operator (used to compare values) 
//   // and it returns true or false.
//
//   // The assignment operator = is what we use to initialize or update variables,
//   // (Not compare values) and 
//   // using it here as 7 = 7 does not make sense
//}
 ////---------------------------------------------------------------------------------------------------
 
/*
 * Homework: Hardcode ONLY the following expressions (No user input)
 * Each line prints the result (1 = true, 0 = false)
 */

#include <iostream>
using namespace std;

/* Homework: HardCode ONLY the following expressions (No user input) and print out the result */

#include <iostream>
using namespace std;

/* #1 Homework:
 * HardCode ONLY the following expressions (No user input)
 * and print out the result.
 */

//int main()
//{
//    // 12 > = 12
//    bool result = (12 >= 12);
//    cout << result << endl; // 1
//
//    // 12 > 7
//    result = (12 > 7);
//    cout << result << endl; // 1
//
//    // 8 < 6
//    result = (8 < 6);
//    cout << result << endl; // 0
//
//    // 8 = 8
//    result = (8 == 8);
//    cout << result << endl; // 1
//
//    // 12 <=12
//    result = (12 <= 12);
//    cout << result << endl; // 1
//
//    // 7 = 5
//    result = (7 == 5);
//    cout << result << endl; // 0
//
//    // NOT (12 >=12)
//    result = !(12 >= 12);
//    cout << result << endl; // 0
//
//    // Not (12 < 7)
//    result = !(12 < 7);
//    cout << result << endl; // 1
//
//    // Not (8 < 6)
//    result = !(8 < 6);
//    cout << result << endl; // 1
//
//    // NOT (8 =8)
//    result = !(8 == 8);
//    cout << result << endl; // 0
//
//    // NOT(12 <=12)
//    result = !(12 <= 12);
//    cout << result << endl; // 0
//
//    // Not (7 = 5)
//    result = !(7 == 5);
//    cout << result << endl; // 1
//
//    // 1 AND 1
//    result = (1 && 1);
//    cout << result << endl; // 1
//
//    // 0 or 1
//    result = (0 || 1);
//    cout << result << endl; // 1
//
//    // 0 or 0
//    result = (0 || 0);
//    cout << result << endl; // 0
//
//    // Not 0
//    result = !0;
//    cout << result << endl; // 1
//
//    // NOT(1 OR 0)
//    result = !(1 || 0);
//    cout << result << endl; // 0
//
//    // ( 7 =  7 ) and (7 > 5)
//    result = (7 == 7) && (7 > 5);
//    cout << result << endl; // 1
//
//    // ( 7 =  7 ) and (7 < 5)
//    result = (7 == 7) && (7 < 5);
//    cout << result << endl; // 0
//
//    // ( 7 =  7 ) Or (7 < 5)
//    result = (7 == 7) || (7 < 5);
//    cout << result << endl; // 1
//
//    // ( 7 <  7 ) Or (7 > 5)
//    result = (7 < 7) || (7 > 5);
//    cout << result << endl; // 1
//
//    // Not ( 7 =  7 ) and (7 > 5)
//    result = !(7 == 7) && (7 > 5);
//    cout << result << endl; // 0
//
//    // ( 7 =  7 ) and Not (7 < 5)
//    result = (7 == 7) && !(7 < 5);
//    cout << result << endl; // 1
//
//    return 0;
//}

//****************************************************************************************************
/* #2 Homework:
 * HardCode ONLY the following expressions (No user input)
 * and print out the result.
 */


// ( 5 > 6 and 7= 7) OR (1 Or 0)
//int main()
//{
//    bool result = ((5 > 6 && 7 == 7) || (1 || 0)); // The whole expression is to be placed withing a (). Otherwise, the code will not compile.
//    cout << result << endl << endl;  // 1
//
//    return 0;
// }
 

// NOT(5 > 6 and 7=7) OR (1 Or 0)
//int main()
//{
//    bool result = (!(5 > 6 && 7 == 7) || (1 || 0)); //1 The whole expression is to be placed withing a (). Otherwise, the code will not compile.
//    cout << result << endl << endl;  // 1
//
//    return 0;
//}

// NOT(5 > 6  and 7==7) OR NOT (1 OR 0)
//int main()
//{
//    bool result = (!(5 > 6 && 7 == 7) || !(1 || 0)); //1
//    cout << result << endl << endl;
//    return 0;
//}

// NOT(5 > 6 OR 7 =7) AND NOT (1 OR 0)
//int main()
//{
//    bool result = (!(5 > 6 || 7 == 7) && !(1 || 0)); //0
//    cout << result << endl << endl;
//    return 0;
//}


//// ((5 >6 AND 7<=8) OR (8>1 and 4 <=3)) AND true
//int main()
//{
//    bool result = (((5 > 6 && 7 <= 8) || (8 > 1 and 4 <= 3)) && true);  //0
//    cout << result << endl << endl;
//    return 0;
//}
//
//// ((5 >6 AND NOT(7<=8)) AND (8>1 OR 4 <=3)) OR true
//int main()
//{
//    bool result = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3) || true;
//    cout << result << endl << endl;
//    return 0;
//}
