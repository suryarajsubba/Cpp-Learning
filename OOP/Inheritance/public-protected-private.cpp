#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    private:
        int registration_no;

    protected:
        int year;

    public:
        string brand;

        //constructor
        Vehicle(string b, int y, int n) : brand(b), year(y), registration_no(n)
        {
           
        }

        //getter
        int get_registration_no()
        {
            return registration_no;
        }
};

class Bike : protected Vehicle     //class Bike inherits features of class Vehicle
{
    public:
        //constructor
        Bike(string a, int b, int c) : Vehicle(a,b,c)
        {

        }

        //public function
        void displayBikeInfo()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
            cout << "Registration number: " << get_registration_no() << endl;
        }
};

int main()
{
    Bike b1("Pulsar", 2026, 1234);

    b1.displayBikeInfo();

    return 0;
}