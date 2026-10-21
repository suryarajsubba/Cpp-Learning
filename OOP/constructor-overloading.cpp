#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     //private means members can only be accessed directly from inside the class's member functions and other permitted class contexts.
        
        string brand;
        int year;
    
    public:     //public means the members listed after it can be accessed from outside the class.
        
        Car(string b, int y) : brand(b), year(y)    //constructor initializer list
        {
        }

        Car(string b) : brand(b), year(2020)
        {
        }

        Car() : brand("Unknown"), year(2000)
        {
        }
        
        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }

        void setYear(int y)     //setter
        {
            if (y > 0)
            {
                year = y;
            }
        }

        int getYear()           //getter
        {
            return year;
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