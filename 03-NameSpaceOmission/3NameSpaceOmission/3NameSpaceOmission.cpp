

/* In the previous ecamples, we had something like this:

#include <iostream>

int main()
{
    std::cout << "Ahmad El-Aina" << std::endl;
    std::cout << "This is my first C++ program" << std::endl;

}

Now, the annoyance lies in the fact  that we keep on writing the "std::" namespace prefix in the program.
	 Therefore, let's get rid of it by including the following line at the top of the program after
     the #include <iostream>:


*/
#include <iostream>
using namespace std;

int main()
{
    cout << "Ahmad El-Aina" << endl;
    cout << "This is my first C++ program" << endl;

}

// separate tip: 
// Assume that youhave the following lines of code:
// 
//  std::cout << "Ahmad El-Aina" << std::endl;
//  std::cout << "This is my first C++ program" << std::endl;
// 
// Now, carefully follow the following steps:
// 1- Using the mouse, select the "std::" part in the first line.
// 2- keep the mouse pressed.
// 3- Click on "alt" key, and while keeping it pressed, move the mouse cursor down to the second line so that 
//    the second "std::" part is also selected.
// 4- Notice that both "std::" parts in both lines are now selected.
// 5- Now, simply press the backspace key. Notice that both "std::" parts are deleted at once.


// Now, what is a namespace?
// it is nothing but a virtual collection of things that are used for organizing code.
// In our case, the "std" namespace is a collection of all standard C++ things like cout, cin, endl, string, vector, etc.
// where these things become under this thing we decided to call "std".
// we will touch on that in more details later in the course.
