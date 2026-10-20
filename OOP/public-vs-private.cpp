#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     //private means members can only be accessed directly from inside the class's member functions and other permitted class contexts.
        
        string brand;
        int year;
    
    public:     //public means the members listed after it can be accessed from outside the class.
        
        Car(string b, int y)
        {
            brand = b;
            year = y;
        }
        
        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;

        }

        /*
        Setter and Getter
        - Setter: changes a private variable.
        - Getter: returns the value of a private variable.
        */

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
    Car c2("Honda", 2024);
    // c1.year = 2030;  //this will generate an error as year is inside private, so it cannot be accessed outside the class.

    c1.display();
    c2.display();

    c1.setYear(2030);
    cout << "Updated year of c1: " << c1.getYear() << endl;

    c1.display();
    
    return 0;
}