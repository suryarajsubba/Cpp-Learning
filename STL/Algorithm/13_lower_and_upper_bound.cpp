#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// custom function to print a vector
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
    vector<int> numbers = {5, 10, 10, 10, 20, 25, 25, 30, 40};

    // print the vector
    cout << "Vector: ";
    print_vector(numbers);

    // ask the user to enter a number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // use lower_bound() to find the first element greater than or equal to the number
    auto lb = lower_bound(numbers.begin(), numbers.end(), n);

    // use upper_bound() to find the first element strictly greater than the number
    auto ub = upper_bound(numbers.begin(), numbers.end(), n);


    // print both values and their indices

    cout << "Lower bound value: " << *lb << endl;
    cout << "Lower bound index: " << lb - numbers.begin() << endl;

    cout << "Upper bound value: " << *ub << endl;
    cout << "Upper bound index: " << ub - numbers.begin() << endl;


    // calculate how many times the entered number occurs using the difference between the two iterators
    int occurrences = ub - lb;      // upper bound - lower bound
    
    cout << "Occurrences: " << occurrences << endl;

    return 0;
}