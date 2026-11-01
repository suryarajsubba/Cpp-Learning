#include<iostream>
using namespace std;
int main()
{
    for (int i=11; i<=20; i++)
    {
        for (int j=1; j<11; j++)
        {
            cout<<i<<" x "<<j<<" = "<<i*j<<endl;
        }
        printf("\n");
    }

    return 0;
}