#include <iostream>
#include <algorithm>
#include <vector>
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
    vector<int> numbers = {5, 10, 15, 20, 25};
    vector<int> squared(numbers.size());
    
    // square every element
    transform(numbers.begin(), numbers.end(), squared.begin(), [](int n){return n*n;});

    // print original vector
    cout << "Original: ";
    print_vector(numbers);

    // print squared vector
    cout << "Squared: ";
    print_vector(squared);

    return 0;
}