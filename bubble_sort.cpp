/* Write a C++ program that:

Takes 7 integers as input.
Sorts the array in ascending order.
Do not use any built-in sorting function.
Use Bubble Sort.

Example:

Input:  50 20 80 10 40 70 30
Output: 10 20 30 40 50 70 80 */

#include <iostream>
using namespace std;

void swap(int num[], int a, int b)
{
    int temp;
    temp = num[a];
    num[a] = num[b];
    num[b] = temp;
}

void printArray(int num[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<"\n";
}

void sort(int num[], int size)
{
    for (int i=0; i<size; i++)
    {
        for (int j=0; j<size-1-i; j++)
        {
            if (num[j]>num[j+1])
            {
                swap(num, j, j+1);
            }
        }
    }
}

int main()
{
    int num[7];

    //taking user input
    cout<<"Enter 7 integers: "<<endl;
    for (int i=0; i<7; i++)
    {
        cin>>num[i];
    }

    //original array
    cout<<"ORIGINAL: "<<endl;
    printArray(num, 7);
    
    //sorting
    sort(num, 7);
    cout<<endl<<"SORTED: "<<endl;
    printArray(num,7);

    return 0;
}