#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int> (50);
    cout << "reference count: " << ptr1.use_count() << endl;   // 1

    shared_ptr<int> ptr2 = ptr1;
    cout << "reference count: " << ptr2.use_count() << endl;   // 2

    shared_ptr<int> ptr3 = ptr2;
    cout << "reference count: " << ptr3.use_count() << endl;   // 3

    *ptr2 = 100;

    cout << "ptr1 value: " << *ptr1 << endl;
    cout << "ptr2 value: " << *ptr2 << endl;
    cout << "ptr3 value: " << *ptr3 << endl;

    // releasing shared ownership
    ptr2.reset();   // ptr2 is now a nullptr. It no longer owns the integer 50
    cout << "reference count: " << ptr1.use_count() << endl;   // 2

    return 0;
}