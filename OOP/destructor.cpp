#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     
        
        string brand;
        int year;
    
    public: 
        
        Car(string b, int y) : brand(b), year(y)    //constructor initializer list
        {
        }

        Car(string b) : brand(b), year(2020)
        {
        }

        Car() : brand("Unknown"), year(2000)
        {
        }

        ~Car()
        {
            cout << "Destroying: " << brand << endl;
        }
        
        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};

int main()
{
    Car c1("Toyota", 2022);
    Car c2("Honda");
    Car c3;

    c1.display();
    c2.display();
    c3.display();
    
    
    return 0;
}