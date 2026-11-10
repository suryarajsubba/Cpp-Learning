#include <iostream>
using namespace std;

int main()
{
    int num[] = {10,20,30,40,50};

    // normal 'for' loop to print an array
    /* for (int i=0; i<5; i++)
    {
        cout << num[i] << " ";
    } 
    cout << "\n"; */
   
    // using a range based 'for' loop
    for (int n : num)       // n receives a copy of each element.
    {
        cout << n << " ";
    }
    cout << "\n";

    // If you want to modify the actual array elements, use a reference
    for (int &n : num)
    {
        n *= 2;
    }

    // print modified array
    for (int n : num)
    {
        cout << n << " ";
    }
    cout << "\n";

    return 0;
}