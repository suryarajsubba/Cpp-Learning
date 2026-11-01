#include <iostream>
using namespace std;

int main()
{
    int num[3];
    cout<<"Enter 3 numbers"<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>num[i];
    }
    int largest = num[0];
    for(int i=0;i<3;i++)
    {
        if (num[i]>largest)
        {
            largest = num[i];
        }
    }
    cout<<"Largest = "<<largest<<endl;

    return 0;
}