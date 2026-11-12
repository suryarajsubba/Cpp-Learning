#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {12, 24, 36, 48, 60};

    // Are all numbers even?
    bool even = all_of(numbers.begin(), numbers.end(), [](int n){return n%2==0;});
    if (even)
    {
        cout << "All numbers even? " << "Yes" << endl;
    }
    else
    {
        cout << "All numbers even? " << "No" << endl;
    }

    // Is there any number greater than 50?
    bool greater_than_50 = any_of(numbers.begin(), numbers.end(), [](int n){return n>50;});
    if (greater_than_50)
    {
        cout << "Any number greater than 50? " << "Yes" << endl;
    }
    else
    {
        cout << "Any number greater than 50? " << "No" << endl;
    }

    // Are there no negative numbers?
    bool no_negative = none_of(numbers.begin(), numbers.end(), [](int n){return n<0;});
    if (no_negative)
    {
        cout << "No negative numbers? " << "Yes" << endl;
    }
    else 
    {
        cout << "No negative numbers? " << "No" << endl;
    }
    
    return 0;
}