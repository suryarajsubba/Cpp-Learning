#include<iostream>
using namespace std;

void swap(string &word, int i, int j)
{
    char temp;
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
}

void reverse(string &word, int size)
{
    int last_index = size - 1;

    for (int i=0; i<size/2; i++)
    {
        swap(word, i, last_index - i);    
    }
}

int main()
{
    string name;
    
    //user input
    cout<<"Enter a name: ";
    cin>>name;

    reverse(name, name.length());
    cout<<name<<endl;

    return 0;
}