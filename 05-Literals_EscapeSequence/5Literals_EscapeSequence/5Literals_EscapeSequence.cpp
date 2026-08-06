
/* Literals are fixed (constant) VALUES such as 5, 3.5, 'b', "Mohammed", etc.
*  These examples are called literals because, for example, 5 can not be used to store 6 inside it
*  but instead, 5 is stored somewhere !. 
* "Mohammad" is stored somewhere and is not used to store anything inside it (How can you store data inside data ?!).
* 
* So literals, in general, are simply the values that you want tuse in your program.
* 
* Types of literals:
* 
* 1- Integer literals: 5, -3, 0, 4567 (These are whole numbers AS OPPOSED TO decimal point numbers that contain a 'dot')
*    A- Decimal Literals (base 10): 0, 5, -3, 4567, etc.
*    B- Octal Literals (base 8): 021, 077, 033 etc.
*    C- Hexadecimal Literals (base 16): 0x7f, 0x2a, 0x521 etc.
*    D- Binary (base 2) – prefix with 0b or 0B (since C++14): 0b1010, 0B1111, 0b100000
*    
*   // In C++ programming, Octal starts with 0, and Hexadecimal starts with 0x 
* 
* 2- Floating-Point literals: 13.5, 1.99, -8.07, -0.001, 2.0, 0.0
*    A- Double literals: 2.1 -0.27 1007.54  213.0  0.0  1.23e4
*    B- Float literals: 2.1f -0.27f 1007.54f  -213.0f  0.0f  1.23e4f
*    C- Long Double literals: 2.1L -0.27L 1007.54L  213.0L  0.0L 1.23e4L
* 
* 3- Character literals: 'A', 'b', 'z', '$', '#'
* 4- Escape Sequence literals: \n, it will be explained next. (They are character literals but with special meaning)



*/


/* Escape Sequences:
 * SOME of them are (that we MAY need):
 * They all start with a backslash (\).
 * 
 * | Escape Sequence | Meaning                        |
| -------------------| ------------------------------ |
|  \\                | Backslash                      |  prints a single backslash  \
|  \t                | Tab                            |  prints 4 empty spaces  
|  \n                | Newline                        |  moves the cursor to the next line
|  \"                | Double Quote                   |  prints a double quote  "
|  \'                | Single Quote                   |  prints a single quote  '
|  \a                | Audio Alert (Bell, Beep sound) |  makes a beep sound on the computer (if supported)



Below programs are examples on Escape Sequences.
*/

// 1- Escape Sequence: \\

#include <iostream>
using namespace std;

//int main()
//{
//	cout << "M1\M2 \n";    // Output: M1M2   the forward slash alone is considered an an undefined escape sequence.
//    cout << "M1\\M2 ";   // Output: M1\M2
//	return 0; 
//}

//int main()
//{
//	cout << "M1\M2\M3 \n";   // Output: M1M2M3   the forward slash alone is considered an an undefined escape sequence.
//	cout << "M1\\M2\\M3 ";    // Output: M1\M2\M3
//	return 0;
//}


// 2- Escape Sequence: \t
 
//int main()
//{
//	cout << "M1\tM2 \n";   // Output: M1    M2   (4 spaces between M1 and M2)
//	cout << "M3\tM4 ";    // Output:  M3    M4   (4 spaces between M3 and M4)
//	return 0; 
//}


//// 3- Escape Sequence: \"
//// Print out the following text exactly as it is including the double quotes:  My name is "Mohammed"
//
//int main()
//{
//	cout << "My name is \"Mohammad\"\n";  
//	return 0; 
//}

// 4- Escape Sequence: \'
// Print out the following text exactly as it is including the double quotes:  My name is 'Nader'

//int main()
//{
//	cout << "My name is \'Nader\'\n";   
//	return 0;
//}

// 5- Escape Sequence: \a

//int main()
//{
//	cout << "\a";   // Output: a beeping sound accompanied with an empty space
//	return 0;
//}



/*                           Homework below - print out the following EXACTLY as they appear:                    */

/* 
     Dear Sir\Madam,

     How are you?

     My name is "Nader", nice to meet you

*/
//int main()
//{
//    cout << "Dear Sir\\Madam,\n\n";
//    cout << "How are you?\n\n";
//    cout << "My name is \"Nader\", nice to meet you.\n";
//    return 0;
//}


/* 
*      Ali     Ahmad     Lina
       Fadi    Sara      Mona
*/
int main()
{
    cout << "Ali\tAhmad\tLina\n";
    cout << "Fadi\tSara\tMona\n";
    return 0;
}

/*Answer the following questions:
* 
* 1- What is a literal ?
* 2- Can you assign different values to a literal ?
* 3- What are literal types ?
* 4-Why do we need Escapse Sequence literals ?


*/