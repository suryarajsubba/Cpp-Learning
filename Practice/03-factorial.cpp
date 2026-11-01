#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return (n * factorial(n-1));
    }
}

int main()
{
    int n;
    int result;
    
    cout<<"Enter a number: ";
    cin>>n;

    cout<<n<<"! = "<<factorial(n)<<endl;

    return 0;
}