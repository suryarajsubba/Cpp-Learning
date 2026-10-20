#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:     //public means the members listed after it can be accessed from outside the class.
        
        string brand;   //data member
        int year;       //data member

        Car(string b, int y)    //constructor - It is a special member function that runs automatically when an object is created.
        {
            brand = b;
            year = y;
        }

        void display()  //member function
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main()
{
    Car c1("Toyota", 2022);     //c1 is object
    Car c2("Honda", 2024);      //c2 is object


    // c1.brand = "Toyota";    //The dot (.) operator accesses a member of an object.
    // c1.year = 2022;


    c1.display();           //c1.display() calls the object's member function.
    c2.display();           //c2.display() calls the object's member function.

    return 0;
}