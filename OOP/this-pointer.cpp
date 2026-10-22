#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     
        
        string brand;
        int year;
    
    public: 
        
    /*
        Imagine your parameters and member variables have the same names. How can you tell C++ which brand you mean?
        Look at this constructor:

        Car(string brand, int year)
        {
            // How do we distinguish the parameters from the class's own members?
        }

        That's where 'this' pointer comes in.
    */

        Car(string brand, int year)
        {
            this->brand = brand;
            this->year = year;
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
    Car c2("Honda", 2024);

    c1.display();    
    c2.display();    
    
    return 0;
}