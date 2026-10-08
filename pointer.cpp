#include <iostream>
using namespace std;

int main()
{
    int num = 50;
    int *p = &num;      //p is the pointer which is pointing towards the address of num

    cout<<"num = "<<num<<endl;
    cout<<"address of num = "<<&num<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"value at address p = "<<*p<<endl;

    return 0;
}