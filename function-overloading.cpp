#include <iostream>
using namespace std;

double area(double r)
{
    return (3.14159 * r * r);
}

double area(double l, double w)
{
    return (l * w);
}

int main()
{
    double circle_area = area(12);
    double rect_area = area(10,5);

    cout<<"Circle Area = "<< circle_area<<endl;
    cout<<"Rectangle Area = "<< rect_area<<endl;

    return 0;
}