#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     
        
        string brand;
        int year;
    
    public:
        
        static int count;           //static member (one shared variable for the entire Car class, not a separate variable for every object.)

        static void showCount()     //static member function
        {
            cout << count << endl;
        }
        /*
        Note -
            A static member function cannot directly access non-static members such as brand or year,
            because it doesn't belong to any particular object.
            But it can access static members such as count.
        */
        
        Car(string b, int y) : brand(b), year(y)    //constructor initializer list
        {
            count++;
        }

        void display()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
};
int Car::count = 0;     //defines the static variable and initializes it to zero.

int main()
{
    Car c1("Toyota", 2022);
    Car c2("Honda", 2024);
    Car c3("Ferrari", 2026);

    c1.display();
    c2.display();
    c3.display();

    cout << "No. of cars created: ";
    Car::showCount();
    
    return 0;
}