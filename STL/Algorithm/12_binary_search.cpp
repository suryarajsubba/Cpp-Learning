#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(const vector<int> &vec)
{
    for (int n : vec)
    {
        cout << n << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> numbers = {45, 12, 78, 23, 56, 89, 34, 67};

    // print the original vector
    cout << "Original: ";
    print_vector(numbers);

    // sort in ascending order
    sort(numbers.begin(), numbers.end());
    
    // print the sorted vector
    cout << "Sorted: ";
    print_vector(numbers);

    // ask the user to enter a number to search for
    int n;      // the number to be searched
    cout << "Enter a number to search: ";
    cin >> n;

    // use binary_search() to check whether the number exists
    bool found = binary_search(numbers.begin(), numbers.end(), n);

    // print an appropriate message
    if (found)
    {
        cout << n << " was found!" << endl;
    }
    else
    {
        cout << n << " was not found!" << endl;
    }

    return 0;
}