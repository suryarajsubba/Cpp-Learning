#include <iostream>
using namespace std;

int main()
{
    int a = 10;     //ordinary integer variable
    
    int *ptr = new int(50);     //dynamically allocate memory for an integer and store its address in ptr

    cout << a << endl;  //print the value of a
    cout << *ptr << endl;   //derefernce ptr to access and print its value

    delete ptr;     //release the dynamically allocated memory
    ptr = nullptr;  //set ptr to nullptr to avoid a dangling pointer

    return 0;
}