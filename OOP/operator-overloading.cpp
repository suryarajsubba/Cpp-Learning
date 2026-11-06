// Operator overloading means giving a new meaning to an existing operator when it is used with objects of a class.

#include <iostream>
using namespace std;

class Number
{
    public:
        // data member
        int value;

        // operator overloading
        Number operator+(Number obj)
        {
            Number temp;
            temp.value = value + obj.value;
            return temp;
        }
        /* We are basically teaching C++ a new rule:
            "When someone uses + between two Number objects, add their value members." */
};

int main()
{
    Number n1;
    Number n2;
    Number n3;

    n1.value = 10;
    n2.value = 20;

    n3 = n1 + n2;   // It internally understands it as: n3 = n1.operator+(n2);

    cout << n3.value << endl;

    return 0;
}