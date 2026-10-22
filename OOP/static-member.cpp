#include <iostream>
#include <string>
using namespace std;

class Car
{
    private:     
        
        string brand;
        int year;
    
    public:
        
        static int count;
        
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
int Car::count = 0;

int main()
{
    Car c1("Toyota", 2022);
    Car c2("Honda", 2024);
    Car c3("Ferrari", 2026);

    c1.display();
    c2.display();
    c3.display();

    cout << "Cars created: " << Car::count << endl;
    
    return 0;
}