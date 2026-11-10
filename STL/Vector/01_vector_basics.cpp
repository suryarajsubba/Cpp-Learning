#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10,20,30};

    // print vector elements
    for (int i=0; i<numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";   // we could also use numbers[i]
    }
    cout << "\n";

    // print size
    cout << "Size: " << numbers.size() << endl;

    // add elements 
    numbers.push_back(40);
    numbers.push_back(50);

    // print modified vector elements
    for (int i=0; i<numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";   // we could also use numbers[i]
    }
    cout << "\n";
    cout << "Size: " << numbers.size() << endl;

    return 0;
}
