#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num[] = {20,50,40,10,30};
    
    // print array
    cout << "Original: ";
    for (int n : num)
    {
        cout << n << " ";
    }
    cout << "\n";
    
    sort(num, num+5);       // ascending order
    
    // print array
    cout << "Ascending Order: ";
    for (int n : num)
    {
        cout << n << " ";
    }
    cout << "\n";
    
    sort(num, num+5, greater<int>());       // descending order
    
    // print array
    cout << "Descending Order: ";
    for (int n : num)
    {
        cout << n << " ";
    }
    cout << "\n";

    return 0;
}