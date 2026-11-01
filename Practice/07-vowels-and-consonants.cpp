#include <iostream>
using namespace std;

int main()
{
    string word;

    int v_count = 0;    //number of vowels
    int c_count = 0;    //number of consonants

    cout<<"Enter a word: ";
    cin>>word;

    for(int i=0; word[i]!='\0'; i++)
    {
        if (word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
        {
            v_count++;
        }
        else
        {
            c_count++;
        }
    }

    cout<<"Number of vowels: "<<v_count<<endl;
    cout<<"Number of consonants: "<<c_count<<endl;
    
    return 0;
}