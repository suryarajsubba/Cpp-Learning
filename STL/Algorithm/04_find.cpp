#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers = {15, 30, 45, 60, 30, 75, 45, 90, 30};

    int n; // number that we want to search
    cout << "Enter the number to be searched: ";
    cin >> n;

    // find the indexes of all the occurrences
    bool found = false;
    auto it = numbers.begin();
    while (it != numbers.end())
    {
        it = find(it, numbers.end(), n);

        if (it != numbers.end()) // check whether a match was actually found before printing its index.
        {
            found = true;
            cout << "Found at index: " << it - numbers.begin() << endl;
            it++;
        }
    }
    if (!found)
    {
        cout << "Number not found" << endl;
    }

    return 0;
}