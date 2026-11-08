#include <iostream>
#include <memory>
using namespace std;

int main()
{
    unique_ptr<int> ptr1 = make_unique<int>(25);    //create smart pointer.  ptr1 owns the integer 25

    cout << "ptr1 value: " << *ptr1 << endl;    //dereference value at ptr1

    unique_ptr<int> ptr2 = move(ptr1);      //transfer ownership.  now ptr2 owns the integer 25

    if (ptr1 == nullptr)        
    {
        cout << "ptr1 now owns nothing" << endl;
    }

    cout << "ptr2 value: " << *ptr2 << endl;    //dereference value at ptr2

    return 0;
}