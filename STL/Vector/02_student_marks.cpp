#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;

    int n;  // number of marks
    cout << "How many marks? ";
    cin >> n;

    for (int i=0; i < n; i++)
    {
        int m;  // temporary variable to store marks one at a time
        cout << "Enter marks: ";
        cin >> m;

        marks.push_back(m);
    }

    // display all the marks
    cout << "Student marks: ";
    for (int i=0; i < marks.size(); i++)
    {
        cout << marks.at(i) << " ";
    }
    cout << "\n";

    // display total number of elements
    cout << "Total students: " << marks.size() << endl;

    // find largest mark
    int largest = marks.at(0);
    for (int i=0; i < marks.size(); i++)
    {
        if (marks.at(i) > largest)
        {
            largest = marks.at(i);
        }
    }
    cout << "Highest mark: " << largest << endl;

    return 0;
}