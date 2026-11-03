#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int num = i;
        
        // Count the number of digits
        int total_digits = 0;
        while (num > 0)
        {
            total_digits++;
            num = num / 10;
        }

        num = i;

        // Calculate the sum
        int sum = 0;
        while (num > 0)
        {
            int last_digit = num % 10;
            int power = pow(last_digit, total_digits);

            // for (int j = 1; j <= total_digits; j++)      //if we don't use pow() function
            // {
            //     int power = power * last_digit;
            // }

            sum += power;
            num = num / 10;
        }

        if (sum == i)
        {
            cout << i << endl;
        }
    }

    return 0;
}