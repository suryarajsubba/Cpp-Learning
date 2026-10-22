#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        string brand;
        int year;

        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }

        Vehicle(string b, int y)
        {
            brand = b;
            year = y;
        }
};

class Bike : public Vehicle     //class Bike inherits features of class Vehicle
{
    public:
        int engineCC;

        /*
            //constructor pattern
            DerivedClass(parameters) : BaseClass(baseArguments), derivedMember(value)
            {
            }
        */

        //constructor
        Bike(string b, int y, int n) : Vehicle(b,y), engineCC(n)    //constructor initializer list
        {
        }
};

int main()
{
    Bike b1("Pulsar", 2026, 150);

    b1.display();
    cout << "Engine capacity: " << b1.engineCC << endl;

    return 0;
}