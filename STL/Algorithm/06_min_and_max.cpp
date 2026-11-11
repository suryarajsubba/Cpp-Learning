#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {45, 12, 89, 34, 7, 56, 91, 23};

    // Find the largest element.
    auto it1 = max_element(numbers.begin(), numbers.end());

    // Find the smallest element.
    auto it2 = min_element(numbers.begin(), numbers.end());

    // Print both values.
    cout << "Largest element: " << *it1 << endl;
    cout << "Index: " << it1 - numbers.begin() << endl;
    
    cout << endl << "Smallest element: " << *it2 << endl;
    cout << "Index: " << it2 - numbers.begin() << endl;

    return 0;
}