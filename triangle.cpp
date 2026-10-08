#include <iostream>
using namespace std;

int main()
{
    int num[5][5];

    // user input
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter a number at index[" << i << "][" << j << "]: ";
            cin >> num[i][j];
        }
    }  
    
    // printing the array
    cout<<endl<<"ARRAY:"<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << num[i][j] << " ";
        }
        cout << "\n";
    }
    cout<<"\n";

    //lower triangle
    int l_sum = 0;      //sum of lower triangle
    cout<<"LOWER TRIANGLE:"<<endl;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<=i; j++)
        {
            cout<<num[i][j]<<" ";
            l_sum += num[i][j];
        }
        cout<<"\n";
    }
    cout<<"Sum of lower triangle = "<<l_sum<<endl;
    cout<<"\n";

    //upper triangle
    int u_sum = 0;      //sum of upper triangle
    cout<<"UPPER TRIANGLE:"<<endl;
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if (j>=i)
            {
                cout<<num[i][j]<<" ";
                u_sum += num[i][j];
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    cout<<"Sum of upper triangle = "<<u_sum<<endl;

    return 0;
}