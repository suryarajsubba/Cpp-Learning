#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        void start()
        {
            cout<<"Vehicle is starting"<<endl;
        }
};

class Car : public Vehicle
{
    public:
        void start()
        {
            cout<<"Car engine started"<<endl;
        }
};

int main()
{
    Vehicle v1;
    Car c1;

    v1.start();
    c1.start();

    return 0;
}