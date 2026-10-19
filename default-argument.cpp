#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout<< "Hello, " << name << endl;
}

int calculate(int a, int b = 10)
{
    return a * b;
}

int main()
{
    greet("Surya");

    cout << calculate(3) << endl;
    cout << calculate(3,5) << endl;

    return 0;
}