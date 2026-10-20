#include <iostream>
#include <string>

using namespace std;

class Car
{
    public:     //public means the members listed after it can be accessed from outside the class.
        
        string brand;   //data member
        int year;       //data member

        void display()  //member function
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main()
{
    Car c1;     //c1 is object

    c1.brand = "Toyota";    //The dot (.) operator accesses a member of an object.
    c1.year = 2022;

    c1.display();           //c1.display() calls the object's member function.

    return 0;
}