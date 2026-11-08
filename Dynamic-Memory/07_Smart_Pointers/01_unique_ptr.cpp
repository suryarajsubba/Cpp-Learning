#include <iostream>
#include <memory>
using namespace std;

void display(const unique_ptr<int> &ptr)
{
    cout << *ptr << endl;
}

int main()
{
    unique_ptr<int> ptr1 = make_unique<int>(25);    //create smart pointer.  ptr1 owns the integer 25

    cout << "ptr1 value: " << *ptr1 << endl;    //dereference value at ptr1

    unique_ptr<int> ptr2 = move(ptr1);      //transfer ownership.  now ptr2 owns the integer 25

    if (ptr1 == nullptr)        
    {
        cout << endl << "ptr1 now owns nothing" << endl;
    }

    cout << "ptr2 value: " << *ptr2 << endl;    //dereference value at ptr2

    // access through function using pass by reference
    unique_ptr<int> ptr3 = make_unique<int> (100);

    cout << endl << "ptr3 value: ";
    display(ptr3);
    
    cout << "ptr3 still owns: " << *ptr3 << endl;

    return 0;
}