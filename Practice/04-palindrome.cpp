#include <iostream>
using namespace std;

int main()
{
    string word;
    
    cout<<"Enter any word or number: ";
    cin>>word;

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