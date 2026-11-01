#include <iostream>
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
    string word;
    
    cout<<"Enter any word or number: ";
    cin>>word;

    
    /* string original = word;

    reverse(word, word.length());   //now word has been reversed
    cout<<"Reversed: "<<word<<endl;

    if (original==word)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    } */

    //another way to solve without having to reverse:
    bool is_palindrome = true;

    int last_index = word.length() - 1; 

    for (int i=0; i < word.length(); i++, last_index--)
    {
        if (word[i]!=word[last_index])
        {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}