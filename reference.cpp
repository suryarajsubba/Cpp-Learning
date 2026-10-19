#include<iostream>
#include<string>
using namespace std;

int main()
{
    int num = 5;
    int &ref = num;

    ref = 50;

    cout<<"num = "<<num<<endl;
    cout<<"ref = "<<ref<<endl;

    
    return 0;
}