#include <iostream>
using namespace std;

int main()
{
    int n;
    bool is_prime = true;

    cout<<"Enter a number: ";
    cin>>n;

    if (n<2)
    {
        is_prime = false;
    }
    else
    {
        for (int i=2; i<n; i++)
        {
            if (n%i==0)
            {
                is_prime = false;
                break;
            }
        }
    }

    if (is_prime)
    {
        cout<<n<<" is a prime number."<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number."<<endl;
    }

    return 0;
}