#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {15, 30, 45, 60, 75, 90, 30};

    int n;      // number that we want to search
    cout << "Enter the number to be searched: ";
    cin >> n;

    // search the number
    auto it = find(numbers.begin(), numbers.end(), n);  // 'it' is the iterator that points to searched number 

    if (it != numbers.end())
    {
        cout << "Element found!" << endl;
        int index = it - numbers.begin();   // When you subtract two compatible random-access iterators belonging to the same vector, C++ gives you the number of elements between them, not the difference between their values.
        cout << "The element " << n << " is at index " << index << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}