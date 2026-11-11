#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> numbers = {15, 30, 45, 60, 75, 90};

    // Calculate the sum of all elements using accumulate()
    double sum = accumulate(numbers.begin(), numbers.end(), 0.0);

    // Calculate the average of all elements
    int n = numbers.size();     // total no. of elements in the vector
    double avg = sum/n;

    // print both results
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
    
    return 0;
}