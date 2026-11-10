#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {10,20,30};

    cout << endl << "Size: " << num.size() << endl;     // 3
    cout << "Capacity: " << num.capacity() << endl;     // 3

    num.reserve(10);    // requests capacity for at least 10 elements

    cout << endl << "Size: " << num.size() << endl;     // 3
    cout << "Capacity: " << num.capacity() << endl;     // 10
    
    num.resize(5);      // changes the vector's size to 5

    cout << endl << "Size: " << num.size() << endl;     // 5
    cout << "Capacity: " << num.capacity() << endl;     // 10

    // print all the elements
    cout << endl << "Vector elements: ";
    for (int i=0; i < num.size(); i++)
    {
        cout << num.at(i) << " ";
    }
    cout << "\n";

    // remove all elements
    num.clear();

    cout << endl << "Size: " << num.size() << endl;     // 0
    cout << "Capacity: " << num.capacity() << endl;     // 10

    if (num.empty())
    {
        cout << "vector is empty" << endl;
    }

    return 0;
}