/* What is the difference between \n and std::endl in C++?
   There is a big difference !

   A pre-requisite for understanding:
   A buffer is a place in memory where your program first sends the data before proceeding to sending to its final destination on the screen (or file).
   When you use std::cout, the text doesn’t always go straight to the screen — it first goes to the buffer.
    


   When a program writes output to the console (or any output stream), that output is not immediately sent to the screen.
   Even though the visible result of using \n or std::endl is the same—a newline on the screen—std::endl 
   forces the buffer to flush completely and immediately after printing, whereas \n alone does not guarantee 
   this. The flush occurs regardless of where std::endl is used—on the first line, the second line, the 99th 
   line, or the last line—since the buffer is always completely cleared as soon as the accompanying text has finished printing. 
   By contrast, \n relies on the system’s natural buffering behavior.You could have multiple cout lines with \n included in each,
   where the buffer has to finish accumulating all that cout data before starting to output it from the buffer and onto the screen,
   and the buffer may not flush until it is full or until the program ends.
   
   This distinction can serve as a diagnostic clue
   when investigating slow program performance: excessive use of std::endl can degrade speed by forcing frequent 
   flushes, while relying solely on \n may make the program slower and even more slower with time as the buffer grows fuller and even more fuller with data
   as time goes by while the program is still executing.
   The buffer is only emptied naturally 
   at certain points. Thus, whether \n or std::endl makes a program faster or slower depends entirely on the specific 
   scenario at hand.

*/

#include <iostream>
using namespace std;

int main()
{
   cout << "Hello World!\n";
   cout << "Learning C++!" <<endl ;
   return 0;
}
/* 
 *  For example: 
 *  If I have 20 count statements with only \n at the end of each line, then that is still ok performance wise.
 *  Whereas if I have 1000 count statement with only \n at the end of each line, then the program will be slowER as time GOES BY
 *  as the buffer grows fuller and fuller with data.
 * 
 * However, if I have 20 count statements with only std::endl at the end of each line, then the program will be slowER as compared to only using \n
 * becasue each std::endl forces the buffer to flush completely and immediately after printing its associated line.
 * In other words, using std::endl 20 times causes 20 flushes.
 *  one flush immediately after each line is printed.
 * 
 * So which to use is highly dependent on the specific scenario at hand.
 * So for, lets say, a 1000 count statements, only using \n OR only using std::endl will both result in slow performance.
 *  In the former case, the program will be slowER as time goes by as the buffer grows fuller and fuller with data.
 *      to the point where the buffer is completly full before printing starts to occur.
 *  In the latter case, the program will be slowER because of the 1000 flushes caused by the 1000 std::endl statements (one flush immediately 
    after each line is printed...and this is done a thousand times! ).

	So the solution is simple: For, for example, the first 50 count lines, only use \n at the end of each line. And on the 51st line use std::endl.
							   then continue using \n for the next 50 lines, and on the 102nd line use std::endl 
							   and so on and so forth.
*/

