// 70-Homework II Nested For Loops.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
using namespace std;

/*
 Write a program to do the following:

 1 2 3 4 5 6 7 8 9 10
 2 3 4 5 6 7 8 9 10
 3 4 5 6 7 8 9 10
 4 5 6 7 8 9 10
 5 6 7 8 9 10
 6 7 8 9 10
 7 8 9 10
 8 9 10
 9 10
 10

*/

/* Solution:  To do: Finish this section.
   
   The content of each row is progressively shrinking.
   Therefore, the inner for-loop is i dependent.



*/


int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)   // on the first outer-loop  i = 10, this inner for-loop iterates 10 times; creating the content of the first row.
		{                              // always mentally trace for at least the first two iterations

			cout << j << " ";
		}
		
		cout << "\n";
	}

	return 0;
}


