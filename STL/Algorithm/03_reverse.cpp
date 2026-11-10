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
    vector<int> numbers = {12, 45, 23, 67, 89, 34, 56};

    // print original vector
    cout << "Original: ";
    print_vector(numbers);

    // reverse the vector
    reverse(numbers.begin(), numbers.end());

    // print the reversed vector
    cout << "Reversed: ";
    print_vector(numbers);

    // reverse only the first four elements
    reverse(numbers.begin(), numbers.begin() + 4);

    // print the final vector
    cout << "Final: ";
    print_vector(numbers);

    return 0;
}