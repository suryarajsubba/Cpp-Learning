#include <iostream>
using namespace std;
int main()
{
    for (int i=2; i<=100; i++)
    {  
        int is_prime = 1;
        
        for (int j=2; j<i; j++)
        {
            if (i%j==0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}