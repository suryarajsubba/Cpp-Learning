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

        //constructor
        Vehicle(string b, int y)
        {
            brand = b;
            year = y;
        }

        //destructor
        ~Vehicle()
        {
            cout << "Vehicle destructor called" << endl;
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

        //destructor
        ~Bike()
        {
            cout << "Bike destructor called" << endl;
        }
};

int main()
{
    Bike b1("Pulsar", 2026, 150);

    b1.display();
    cout << "Engine capacity: " << b1.engineCC << endl;

    return 0;
}