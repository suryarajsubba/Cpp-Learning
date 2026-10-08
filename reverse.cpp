/* Reverse an array
Input 6 integers.
Print them in reverse order.
Example: 10 20 30 40 50 60 → 60 50 40 30 20 10 */

#include <iostream>
using namespace std;

void printArray(int num[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<"\n";
}

void swap(int num[], int a, int b)
{
    int temp;
    temp = num[a];
    num[a] = num[b];
    num[b] = temp;
}

void reverseArray(int num[], int size)
{
    int last_index = size - 1;

    for (int i=0; i<size/2; i++)
    {
        swap(num, i, last_index-i);
    }
}

int main()
{
    int num[6];
    for (int i=0; i<6; i++)
    {
        cout<<"Enter an integer at index ["<<i<<"]: ";
        cin>>num[i];
    }

    cout<<"ORIGINAL:"<<endl;
    printArray(num, 6);
    
    reverseArray(num, 6);

    cout<<endl<<"REVERSED: "<<endl;
    printArray(num, 6);

    return 0;
}