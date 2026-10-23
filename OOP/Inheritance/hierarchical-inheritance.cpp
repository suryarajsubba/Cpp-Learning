#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:

        //member
        string brand;

        //constructor
        Vehicle(string a) : brand(a)
        {

        }

        //member function
        void displayBrand()
        {
            cout << "Brand: " << brand << endl;
        }
};

class Car : public Vehicle
{
    public:

        //member
        int doors;

        //constructor
        Car(string a, int b) : Vehicle(a), doors(b)
        {

        }

        //member function
        void displayDoors()
        {
            cout << "Number of doors: " << doors << endl;
        }
};

class Bike : public Vehicle
{
    public:

        //member
        int engineCC;

        //constructor
        Bike(string a, int c) : Vehicle(a), engineCC(c)
        {

        }

        //member function
        void displayEngineCapacity()
        {
            cout << "Engine capacity: " << engineCC << endl;
        }
};

int main()
{
    Car c1("Toyota", 4);
    Bike b1("Pulsar", 150);

    c1.displayBrand();
    c1.displayDoors();

    b1.displayBrand();
    b1.displayEngineCapacity();

    return 0;
}