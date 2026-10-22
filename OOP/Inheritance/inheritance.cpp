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
};

class Bike : public Vehicle     //class Bike inherits features of class Vehicle
{
    public:
        int engineCC;
};

int main()
{
    Bike b1;
    
    //these members come from class Vehicle
    b1.brand = "Pulsar";
    b1.year = 2026;

    //this member belongs specifically to class Bike
    b1.engineCC = 150;

    b1.display();
    cout << "Engine capacity: " << b1.engineCC << endl;

    return 0;
}