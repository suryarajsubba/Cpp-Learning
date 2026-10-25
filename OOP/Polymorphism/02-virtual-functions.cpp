#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual void draw()
        {
            cout<<"Drawing a shape"<<endl;
        }
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
    Shape *ptr;     //base class pointer

    Circle c1;
    Rectangle r1;

    ptr = &c1;
    ptr->draw();

    ptr = &r1;
    ptr->draw();

    return 0;
}