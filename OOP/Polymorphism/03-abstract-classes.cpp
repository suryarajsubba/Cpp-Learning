#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw() = 0;        //pure virtual function
};

class Circle : public Shape
{
    public:
        void draw() override
        {
            cout<<"Drawing a circle"<<endl;
        }
};

class Rectangle : public Shape
{
    public:
        void draw() override
        {
            cout<<"Drawing a rectangle"<<endl;
        }
};

int main()
{
    Circle c1;
    Rectangle r1;

    c1.draw();
    r1.draw();

    return 0;
}