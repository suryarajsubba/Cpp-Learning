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

    /* Task 1 — Replace a specific value
    - Replace every 45 with 100.
    - Print the vector. */

    replace(numbers.begin(), numbers.end(), 45, 100);
    print_vector(numbers);

    /* Task 2 — Replace even numbers
    - Replace every even number with 0.
    - Print the vector */

    replace_if(numbers.begin(), numbers.end(), [](int n){return n%2 == 0;}, 0);
    print_vector(numbers);

    /* Task 3 — Replace numbers greater than 50
    - Replace every number greater than 50 with -1.
    - Print the vector. */

    replace_if(numbers.begin(), numbers.end(), [](int n){return n>50;}, -1);
    print_vector(numbers);

    return 0;
}