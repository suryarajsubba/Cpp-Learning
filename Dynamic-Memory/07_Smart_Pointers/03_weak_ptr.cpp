#include <iostream>
#include <memory>
using namespace std;

int main()
{
    shared_ptr<int> ptr1 = make_shared<int>(100);

    weak_ptr<int> weak = ptr1;

    cout << "reference count: " << ptr1.use_count() << endl;    // 1

    /* A weak_ptr cannot be dereferenced directly.
    So we use .lock() to obtain a temporary shared_ptr */
    {
        shared_ptr<int> temp = weak.lock();

        cout << "reference count: " << ptr1.use_count() << endl;    // 2
    }

    // When temp goes out of scope, its ownership is released, so count returns to 1
    cout << "reference count: " << ptr1.use_count() << endl;   // 1

    ptr1.reset();

    if (weak.expired())
    {
        cout << "Object destroyed!" << endl;
    }

    return 0;
}