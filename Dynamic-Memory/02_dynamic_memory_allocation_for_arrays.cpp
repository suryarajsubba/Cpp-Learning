#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[5];

    //int *arr - Declares a pointer to an integer.
    //new int[5] - Dynamically allocates memory for 5 integers.
    //arr - Stores the address of the first element.

    //we can access the elements just like an ordinary array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    
    for (int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;
    }

    delete[] arr;
    arr = nullptr;

    return 0;
}