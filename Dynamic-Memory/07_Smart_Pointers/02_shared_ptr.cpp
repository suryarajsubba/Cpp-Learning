#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int> (50);

    shared_ptr<int> ptr2 = ptr1;

    cout << "ptr1 value: " << *ptr1 << endl;
    cout << "ptr2 value: " << *ptr2 << endl;

    return 0;
}