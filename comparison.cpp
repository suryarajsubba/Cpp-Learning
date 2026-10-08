#include <iostream>
using namespace std;
int main()
{
    // cout<<(10>5)<<endl;
    // cout<<(10<5)<<endl;
    // cout<<(10==10)<<endl;
    // cout<<(10!=10)<<endl;

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>=18)
    {
        cout<<"You can vote\n";
    }
    else
    {
        cout<<"You cannot vote\n";
    }
    
    // if (age>=18 && age<=60)
    // {
    //     cout<<"You are in the allowed age range\n";
    // }
    // else
    // {
    //     cout<<"You are not in the allowed age range\n";
    // }

    if (age<18 || age>60)
    {
        cout<<"You are not in the allowed age range\n";
    }
    else
    {
        cout<<"You are in the allowed age range\n";
    }

    return 0;
}