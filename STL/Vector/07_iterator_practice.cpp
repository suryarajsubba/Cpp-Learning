#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {5,10,15,20,25};
    
    // The auto keyword automatically detects the type of a variable based on the value you assign to it.
    // num.begin() returns an iterator pointing to index 0
    // end() does NOT point to the last element. It points to the position just after the last element.

    // print all elements
    for (auto it = num.begin(); it != num.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // print first three elements
    for (auto it = num.begin(); it != num.begin() + 3; it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    // point to the last element
    auto it = num.end() - 1;      
    cout << *it << endl;    

    return 0;
}