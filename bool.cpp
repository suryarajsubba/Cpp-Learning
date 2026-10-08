#include <iostream>
using namespace std;
int main()
{
    bool is_raining=false;

    cout<<is_raining<<endl;
    cout<<!is_raining<<endl;

    if(is_raining)
    {
        cout<<"You cannot go outside!\n";
    }
    else
    {
        cout<<"You can go outside!\n";
    }

    return 0;
}