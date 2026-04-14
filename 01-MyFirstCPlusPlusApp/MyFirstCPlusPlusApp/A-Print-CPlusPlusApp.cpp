

/*
                             =========================================================
                             IMPORTANT – About Multiple main() Functions (All Files)
                             =========================================================

                             Several tutorial files in this repository contain
                             multiple main() functions for educational purposes.

                             This allows different examples to be demonstrated
                             within the same file for learning clarity.

                             ⚠️ C++ allows only ONE main() function per source file.
                             If you wish to compile a file:

                             → Comment out all main() functions except one.

                             This structure is intentional and designed strictly
                             for instructional use.
                             =========================================================
*/

#include <iostream>

int main() 
{
std::cout << "Ahmad El-Aina!\n";
return 0;
}



/*  #include <iostream> explanation: Importing the iostream library that is a part of the C++ Standard Library.
    cout = console output(Print).
    cout is an object that exists under the umbrella of std (Standard Library) that exists under
	the iostream library that was downloaded along with the compiler when the c++ VS Studio was installed.


    std::cout << "...";  explanation:
    (std::cout) = to the monitor.
    <<          = write
	"..."      = the following message.
	;          = end this line.
  
 */ 

 
 int main() 
 {
     std::cout << "Ahmad El-Aina!";
     return 0;
 }
 



int main() 
{
    std::cout << "Ahmad El-Aina";
    std::cout << "This is my first C++ program";
    return 0;
}



int main() 
{
    std::cout << "Ahmad El-Aina\n";
    std::cout << "This is my first C++ program";
    return 0;
}



int main() 
{
    std::cout << "Ahmad El-Aina";
    std::cout << "This is my first C++ program\n";
    return 0;
}




int main() 
{
    std::cout << "Ahmad El-Aina\n\n";
    std::cout << "This is my first C++ program";
    return 0;
}


// There is also std::endl (It is the same as \n but with small differences that we will discuss later ):

int main() 
{
    std::cout << "Ahmad El-Aina" << std::endl;
    std::cout << "This is my first C++ program";
    return 0;
}



int main() 
{
    std::cout << "Ahmad El-Aina" << std::endl;
    std::cout << "This is my first C++ program" << std::endl;
    return 0;
}



int main() 
{
	std::cout << "Ahmad El-Aina" << std::endl << std::endl;
    std::cout << "This is my first C++ program";
    return 0;
}


// Now, one could print more than one message using one std::cout command.


int main() 
{
    std::cout << "M1" << "M2" << "M3";
    return 0;
}



int main() 
{
    std::cout << "M1" << " M2" << " M3";
    return 0;
}



int main() 
{
    std::cout << "M1 " << "M2 " << "M3";
    std::cout << "M1 " << "M2 " << "M3";
    return 0;
}



int main() 
{
    std::cout << "M1 " << "M2 " << "M3 ";
    std::cout << "M1 " << "M2 " << "M3";
    return 0;
}



int main() 
{
    std::cout << "M1" << " M2" << " M3\n";
    return 0;
}



int main() .
{
    std::cout << "M1 " << "M2 " << "M3\n";
    std::cout << "M1 " << "M2 " << "M3";
    return 0;
}



int main() 
{
    std::cout << "M1 " << "M2 " << "M3\n";
    std::cout << "M1 " << "M2 " << "M3\n";
    return 0;
}



int main() 
{
    std::cout << "M1" << 10 + 5 << "M3\n";
    std::cout << "M1 " << "M2 " << "M3\n";
    return 0;
}



int main() 
{
    std::cout << "M1 " << 10 + 5 << " M3\n";
    std::cout << "M1 " << "M2 " << "M3\n";
    return 0;
}



int main() 
{
    std::cout << "Ahmad El-Aina\n" << "This is my first C++ program";
    return 0;
}



int main() 
{
    std::cout << "Ahmad El-Aina\n\n" << "This is my first C++ program";
    return 0;
}


int main() 
{
    std::cout << "M1: \n" << 10 + 5 << " M3\n";
    std::cout << "M1 " << "M2 " << "M3\n";
    return 0;
}