/* size() tells you how many elements actually exist.
capacity() tells you how many elements can fit in the currently allocated storage before reallocation is needed.

Also, when vector reallocates, its elements may be moved to a different memory location. 
This can invalidate pointers, references, and iterators referring to its elements. */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers;

    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    numbers.push_back(10);

    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    cout << numbers.size() << endl;
    cout << numbers.capacity() << endl;

    return 0;
}