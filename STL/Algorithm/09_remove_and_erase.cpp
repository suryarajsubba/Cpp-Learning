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
    vector<int> numbers = {5, 10, 15, 10, 20, 10, 25, 30};

    // print original vector
    cout << "Original: ";
    print_vector(numbers);

    // Remove all occurrences of 10 using remove() and erase()
    numbers.erase(remove(numbers.begin(), numbers.end(), 10), numbers.end());

    // print modified vector
    cout << "Modified: ";
    print_vector(numbers);

    // print its new size
    cout << "New size: " << numbers.size() << endl;

    return 0;
}