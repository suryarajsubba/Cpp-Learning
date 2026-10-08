#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"1. Pizza\n2. Burger\n3. Pasta\n4. Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch (choice)
    {
        case 1:
            cout<<"You want Pizza? That would be Rs.110!\n";
            break;

        case 2:
            cout<<"You want Burger? That would be Rs.80!\n";
            break;

        case 3:
            cout<<"You want Pasta? That would be Rs.100!\n";
            break;

        case 4:
            cout<<"Goodbye Sir! Have a wonderful day ahead!\n";
            break;

        default:
            cout<<"Sir, I don't think that is option. LOL!\n";
    }

    return 0;
}