#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    // original vector
    vector<int> numbers = {12, 5, 45, 8, 67, 23, 90, 3, 56};
    cout << "Original: ";
    for_each(numbers.begin(), numbers.end(), [](int n){cout << n << " ";});
    cout << "\n";

    /* Task 1 — Copy everything
    - Create an empty vector called copied.
    - Use copy() and back_inserter() to copy all elements.
    - Print the copied vector. */

    vector<int> copied;
    copy(numbers.begin(), numbers.end(), back_inserter(copied));
    cout << "Copied: ";
    for_each(copied.begin(), copied.end(), [](int n){cout << n << " ";});
    cout << "\n";


    /* Task 2 — Copy only even numbers
    - Create an empty vector called evenNumbers.
    - Use copy_if() to copy only even numbers.
    - Print the result. */

    vector<int> evenNumbers;
    copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), [](int n){return n%2 == 0;});
    cout << "Even numbers: ";
    for_each(evenNumbers.begin(), evenNumbers.end(), [](int n){cout << n << " ";});
    cout << "\n";


    /* Task 3 — Copy numbers greater than 30
    - Create an empty vector called greaterThan30.
    - Use copy_if() to copy only numbers greater than 30.
    - Print the result. */

    vector<int> greaterThan30;
    copy_if(numbers.begin(), numbers.end(), back_inserter(greaterThan30), [](int n){return n>30;});
    cout << "Greater than 30: ";
    for_each(greaterThan30.begin(), greaterThan30.end(), [](int n){cout << n << " ";});
    cout << "\n";

    return 0;
}