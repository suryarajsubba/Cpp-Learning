#include<iostream>
using namespace std;

int main()
{
    int n;  //number of integers
    int sum = 0; //sum of all integers

    cout<<"How many integers do you want to store? ";
    cin>>n;

    int *arr = new int[n];

    //int *arr - Declares a pointer to an integer.
    //new int[n] - Dynamically allocates memory for n integers.
    //arr - Stores the address of the first element.

    //user input
    for (int i=0; i<n; i++)
    {
        cout << "Enter integer: ";
        cin >> arr[i];    //we can access the elements just like an ordinary array
        sum += arr[i];
    }
    
    //print all the integers
    for (int i=0; i<n; i++)
    {
        cout << arr[i] << endl;
    }
    //print sum
    cout << "Sum: " << sum << endl;
    
    //find largest element
    int largest = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
    }
    cout << "Largest: " << largest << endl;
    
    //find smallest element
    int smallest = arr[0];
    for (int i=0; i<n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "Smallest: " << smallest << endl;

    delete[] arr;
    arr = nullptr;

    return 0;
}