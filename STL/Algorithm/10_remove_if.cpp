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
    vector<int> numbers = {12, 5, 45, 8, 67, 23, 90, 3, 56};

    // print original vector
    cout << "Original: ";
    print_vector(numbers); 

    // print original size
    cout << "Original size: " << numbers.size() << endl;

    // remove all numbers greater than 30 using remove_if() and erase()
    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int n){return n>30;}), numbers.end());

    // print modified vector
    cout << "Modified: ";
    print_vector(numbers);

    // print the new size
    cout << "New size: " << numbers.size() << endl;

    return 0;
}