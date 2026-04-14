/*
 * As mentioned previously, there is a BIG difference between A++ and ++A, or B++ and --B, etc.
 * This difference is elaborated upon in this file.
 *
 *
 * Pre-requisite:
 * An expression such as C = A++, C = ++A, C = A--, or C = --A
 * introduces a new concept: It involves two different variables (C & A),
 * each storing a distinct value AT A SPECIFIC POINT IN TIME.
 * This distinction is essential to understand.
 *
 * Let's explore this concept in detail:
 *
 * Given: A = 10
 *
 *    C = A++     means: Since the ++ operator comes after variable A,
 *                       the variable C will store the value of A
 *                       BEFORE A is incremented by 1.
 *                       So, C = 10, and thereafter (AFTER THAT EVENT HAPPENS),
 *                       A = 11 (A = A + 1).
 *
 *    Whereas,
 *
 *    C = ++A     means: Since the ++ operator comes before variable A (it takes priority),
 *                       A will be incremented by 1 first,
 *                       and the result (the new value of A) is stored in A.
 *                       Thereafter (AFTER THAT EVENT HAPPENS),
 *                       C will store the value of A, which is now 11.
 *
 *
 * | **Operator** | **Example** | **Result** |
 * | ------------- | ------------ | ---------- |
 * | A++           | C = A++      | C stores 10, and A stores 11 (A = A + 1) | 
 * | ++A           | C = ++A      | A stores 11 (A = A + 1), and C stores 11 |
 * | A--           | C = A--      | C stores 10, and A stores 9 (A = A - 1)  |
 * | --A           | C = --A      | A stores 9 (A = A - 1), and C stores 9   |
 *
 */

#include <iostream>
using namespace std;

int main()
{
    int A = 10;
    int B = A++; // Variable B will store the old value of A, THEN variable A will store the incremented-by-1 value of A.

    cout << "After B = A++ :" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << endl;

    B = ++A; // Now the compiler is working with the current (updated) values.
    // Variable A will be incremented by 1 first,
    // THEN variable B will store this new value of A.

    cout << "After B = ++A :" << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
}