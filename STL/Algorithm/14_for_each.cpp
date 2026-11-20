#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {5, 10, 15, 20, 25};

    // print all elements using for_each()
    cout << "Original: ";
    for_each(numbers.begin(), numbers.end(), [](int n){cout << n << " ";});
    cout << "\n";

    // print the square of every element using for_each()
    cout << "Squares: ";
    for_each(numbers.begin(), numbers.end(), [](int n){ cout << n*n << " ";});
    cout << "\n";

    // multiply every original element by 2 using for_each() and a reference
    for_each(numbers.begin(), numbers.end(), [](int& n){n = n * 2;});

    // print the modified vector using for_each()
    cout << "After doubling: ";
    for_each(numbers.begin(), numbers.end(), [](int n){cout << n << " ";});
    cout << "\n";

    return 0;
}