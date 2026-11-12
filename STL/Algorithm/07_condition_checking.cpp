#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {12, 24, 36, 48, 60};

    // Are all numbers even?
    bool even = all_of(numbers.begin(), numbers.end(), [](int n){return n%2==0;});
    cout << "All numbers even? " << (even ? "Yes" : "No") << endl;

    // Is there any number greater than 50?
    bool greater_than_50 = any_of(numbers.begin(), numbers.end(), [](int n){return n>50;});
    cout << "Any number greater than 50? " << (greater_than_50 ? "Yes" : "No") << endl;

    // Are there no negative numbers?
    bool no_negative = none_of(numbers.begin(), numbers.end(), [](int n){return n<0;});
    cout << "No negative numbers? " << (no_negative ? "Yes" : "No") << endl;
    
    return 0;
}