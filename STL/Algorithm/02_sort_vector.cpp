#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {45, 12, 89, 23, 67, 5, 34};

    // print original vector
    cout << "Original: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n";

    // sort vector in ascending order
    sort(numbers.begin(), numbers.end());

    // print vector in ascending order
    cout << "Ascending Order: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n";
    
    // sort vector in descending order
    sort(numbers.begin(), numbers.end(), greater<int>());

    // print vector in descending order
    cout << "Descending Order: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n";

    // Sort only the first four elements in ascending order
    sort(numbers.begin(), numbers.begin() + 4);

    // print the vector
    cout << "Ascending Order of only first 4 elements: ";
    for (int n : numbers)
    {
        cout << n << " ";
    }
    cout << "\n";

    
    return 0;
}