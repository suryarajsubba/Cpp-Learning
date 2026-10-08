#include <iostream>
using namespace std;

int main()
{
    int original;
    
    cout<<"Enter a number: ";
    cin>>original;

    int n = original;
    int reverse = 0;

    cout<<"ORIGINAL = "<<original<<endl;

    //reversing the number
    while (n!=0)
    {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n = n/10;
    }
    cout<<"REVERSE = "<<reverse<<endl;

    if (original==reverse)
    {
        cout<<"PALINDROME"<<endl;
    }
    else
    {
        cout<<"NOT PALINDROME"<<endl;
    }
    
    return 0;
}