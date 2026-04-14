
#include <iostream>
#include <string>
using namespace std;

/* Structures: 
   A structure is a data type. Just how int, char, float, double, bool, string, void, and wchar_t are data types.
     The only difference is that it is a user-defined data type (A user creates it and then uses it in the program)
     that one could name as they wish, as opposed to the built-in data types.
        
       
 C ++ Structures:

 A Structure is a created data type, under which SEVERAL RELATED VARIABLES are lumped together.
 and each represent a member of the structure ( = a member of the created data type).
        
        Example:
        - Car info such as its model, year, make, brand, color. These are variables that are related to 
        each other. Therefore, instead of declaring them in main(),
        I declare them as member variables inside a structure.

        I LUMP THESE RELATED VARIABLES TOGETHER under a structure.

        - A person's address consists of street number, street name, postal code, apartment number, 
          city, provice, & country. 
          So since these variables are related amongst each other, I will not declare them in main(),
          Instead, I declare them as member variables inside a structure.

          Where I create a datatype (structure) and call it 'StAdress' (or name it anything else)
          and lump under it, the variables of:
          street number, street name, postal code, apartment number, city, provice, & country
 --------------------------------------------------------------------------------------------------------------------
*/ 


 //user defines the datatype 'Car'
struct Car
{
    string Brand;
    string Model;
    int Year;
};

int main()
{
    Car MyCar1;  
     // 'Car' is a user-defined data type, and 'MyCar1' is a variable (name it anything suitable) of that type.
       // Now, the variable 'MyCar1' contains all the member variables defined in 'Car' data type.
      // (Brand, Model, and Year).
     // Initialization is done by accessing each member individually using the dot operator.

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;

    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << "\n";
        
    return 0;
}
/*
 * The concept of a Structure (creating one's own data type) makes programming easier and more organized.
 * A typical program can contain hundreds of variables. Without grouping related variables together
 * into a single logical unit using Structures, managing and maintaining such programs would become difficult.
 */
//------------------------------------------------------------------------------------------------------------------------



// One could also define another variable of type Car: 

 //user defines the datatype 'Car'
struct Car
{
    string Brand;
    string Model;
    int Year;
};


int main()
{
    Car MyCar1, MyCar2; // *** Now, we have 2 separate records of type Car: 1 record under MyCar1  &  another record under MyCar2 (As many record as needed could be added)
                        // In the future, we will instead, create an array:   car MyCar[2] // an array containing 2 car records.
    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;

    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;

    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << "\n";
    cout << MyCar1.Brand << " " << MyCar2.Model << " " << MyCar2.Year << "\n";

    return 0;
}
//---------------------------------------------------------------------------------------------



// In the above program, we initilized directly,
// However, we could also initilize via user input as shown below:

 //user defines the datatype 'Car'
struct Car
{
    string Brand;
    string Model;
    int Year;
};


int main()
{
    Car MyCar1, MyCar2; // *** Now, we have 2 records: 1 record under MyCar1  &  another record under MyCar2 ( As many record as needed could be added)
                        // In the future, this should be done utilizing an array as mentioned in the previous example.
    cout << "Enter The Car Brand: \n";
    cin >> MyCar1.Brand;

    cout << "Enter The Car Model: \n";
    cin >> MyCar1.Model;

    cout << "Enter The Car Year: \n";
    cin >> MyCar1.Year;
    cout << endl;


    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;

    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << "\n";
    cout << MyCar1.Brand << " " << MyCar2.Model << " " << MyCar2.Year << "\n";

    return 0;
}
//---------------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------------

 //Again - A structure such as 'Car' is a data type just as int or string or etc. is.
      //   This entails that, in:
 
     struct Car
     {
      string Brand;
      string Model;
      int Year;
     };
 
 /*
  I can a 4th variable of structure (user-defined) data type.
  Let's see how this can be done:
 
  so a car has an owner just as it has a brand, model, and year:
 */
 
    struct stOwner
    {
    string FullName;
    string Phone;
    };
 
 
   struct Car
   {
    string Brand;
    string Model;
    int Year;
    stOwner Owner; //Now, the variable 'Owner' contains all the member variables defined in 'stOwner' data type.
   };
 
 
  int main()
  {
   Car MyCar1; // Now, variable 'MyCar1' contains all member variables defined in 'car' data type.
 
    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.FullName = "Ahmad El-Aina";
    MyCar1.Owner.Phone = "5148083936";
  }
 //: Lets copy this above code below:

  
//
struct stOwner
     {
    string FullName;
    string Phone;
    
};

struct Car
 {
    string Brand;
    string Model;
    int Year;
    stOwner Owner; //Now, the variable 'Owner' contains all the member variables defined in 'stOwner' data type.
    
};


int main()
 {
    Car MyCar1; // Now, variable 'MyCar1' contains all member variables defined in 'car' data type.
    
    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.FullName = "Ahmad El-Aina";
    MyCar1.Owner.Phone = "5148083936";

    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
    cout << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone << endl;
    

    return 0;   
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// Now, I could even add another Address Structure (Before you keep on reading, think of why and where):
// 
//  Answer: Yes- for lumping the street number, name, postal code, apartment number, city, province, & country 
//          variables all together under 'Adress' data type
//          in order to add a variable of 'Adress' data type inside the 'stOwner' structure:
 

struct stAdress
{
    string Street1;
    string POBOX;
   
};

struct stOwner
     {
    string FullName;
    string Phone;
    // let me add an adress variable:
    stAdress Adress; //Now, the variable 'Adress' contains all the member variables defined in 'stAdress' data type.
    
};

struct Car
 {
    string Brand;
    string Model;
    int Year;
    stOwner Owner; //Now, the variable 'Owner' contains all the member variables defined in 'stOwner' data type.
    
};


int main()
 {
    Car MyCar1; // Now, variable 'MyCar1' contains all member variables defined in 'car' data type.
    
    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.FullName = "Ahmad El-Aina";
    MyCar1.Owner.Phone = "5148083936";
    MyCar1.Owner.Adress.POBOX = "#2765";      // If you program like that, programming becomes easier and you become faster
                                              // Because you organize the data in your program.
    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
    cout << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone << endl;
    cout << MyCar1.Owner.Adress.POBOX << endl;
    

    return 0;   
}



#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Inner struct: represents an address
    struct Address            // This entire code block is the blue print for creating a user-defined data type, 'Address'.
    {                         
        string street;
        string city;
        string country;
        int postalCode;
    };

    // Outer struct: represents a person
    struct Person
    {
        string name;
        int age;
        float height;
        Address homeAddress;  // nested struct
    };

    // Create two persons      // In the future, this should be done utilizing an array as mentioned in the previous example.
    Person person1, person2;   // person1 is a variable that has access to the group of related variables lumped together 
                               // under the 'Person' data type.
                               
    // Assign values for person1
    person1.name = "Alice Johnson";
    person1.age = 28;
    person1.height = 165.5;
    person1.homeAddress.street = "123 Maple Avenue";
    person1.homeAddress.city = "Montreal";
    person1.homeAddress.country = "Canada";
    person1.homeAddress.postalCode = 90210;

    // Assign values for person2
    person2.name = "Michael Lee";
    person2.age = 32;
    person2.height = 180.2;
    person2.homeAddress.street = "78 King Street";
    person2.homeAddress.city = "Toronto";
    person2.homeAddress.country = "Canada";
    person2.homeAddress.postalCode = 20245;

    // Display information for person1
    cout << "Person 1 Info:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " cm" << endl;

    cout << "\nAddress Details:" << endl;
    cout << "Street: " << person1.homeAddress.street << endl;
    cout << "City: " << person1.homeAddress.city << endl;
    cout << "Country: " << person1.homeAddress.country << endl;
    cout << "Postal Code: " << person1.homeAddress.postalCode << endl;

    cout << "\n-------------------------------\n";

    // Display information for person2
    cout << "Person 2 Info:" << endl;
    cout << "Name: " << person2.name << endl;
    cout << "Age: " << person2.age << endl;
    cout << "Height: " << person2.height << " cm" << endl;

    cout << "\nAddress Details:" << endl;
    cout << "Street: " << person2.homeAddress.street << endl;
    cout << "City: " << person2.homeAddress.city << endl;
    cout << "Country: " << person2.homeAddress.country << endl;
    cout << "Postal Code: " << person2.homeAddress.postalCode << endl;

    return 0;
}


