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

class ElectricCar : public Car
{
    public:

        //member
        int batteryCapacity;

        //member function
        void displayBatteryCapacity()
        {
            cout << "Battery Capacity: " << batteryCapacity << endl;
        }

        //constructor
        ElectricCar(string a, int b, int c) : Car(a,b), batteryCapacity(c)
        {

        }


};


int main()
{
    ElectricCar ec1("Tesla", 2, 40);
    ec1.displayBrand();
    ec1.displayDoors();
    ec1.displayBatteryCapacity();

    return 0;
}