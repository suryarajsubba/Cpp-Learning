#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {15, 30, 45, 60, 75, 90, 30, 45, 30};

    int n;      // number that is to be counted
    cout << "Enter a number: ";
    cin >> n;

    // count the total occurrences
    int total = count(numbers.begin(), numbers.end(), n);

    if (total != 0)     // if number found
    {
        // print the total occurrences
        cout << "Count: " << total << endl;
    }
    else        // if number not found
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}