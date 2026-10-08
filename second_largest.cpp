/* Write a C++ program that:

Takes 7 integers as input.
Finds the second-largest element.
Does not use any built-in sorting function.

Example:
Input:  10 50 30 80 20 70 40
Output: Second largest = 70

Challenge: Try solving it without sorting the array. */

#include <iostream>
using namespace std;

int main()
{
    int num[] = {-10,-20,-30,-40,-50,-60,-70};

    int largest = num[0];
    for (int i = 0; i < 7; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "LARGEST: " << largest << endl;

    int second_largest;
    bool found = false;
    for (int i = 0; i < 7; i++)
    {
        if (num[i]<largest)
        {
            if (!found || num[i] > second_largest)
            {
                second_largest = num[i];
                found = true;
            }
        }
    }
    if (found)
    {
        cout << "SECOND LARGEST: " << second_largest;
    }
    else
    {
        cout << "No second largest element exists!";
    }

    return 0;
}