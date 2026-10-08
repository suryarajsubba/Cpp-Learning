#include <iostream>
using namespace std;

int main()
{
    int num[4][4];

    // user input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter a number at index[" << i << "][" << j << "]: ";
            cin >> num[i][j];
        }
    }

    // printing the array
    cout<<"ARRAY:"<<endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << num[i][j] << " ";
        }
        cout << "\n";
    }
    cout<<"\n";

    // row sum
    for (int i = 0; i < 4; i++)
    {
        int r_sum = 0;

        for (int j = 0; j < 4; j++)
        {
            r_sum += num[i][j];
        }
        cout<<"Sum of row "<<i<<" = "<<r_sum<<endl;
    }
    cout<<'\n';

    //column sum
    for (int i=0; i<4; i++)
    {
        int c_sum = 0;

        for (int j=0; j<4; j++)
        {
            c_sum += num[j][i];
        }
        cout<<"Sum of column "<<i<<" = "<<c_sum<<endl;
    }
    cout<<'\n';

    //main diagonal
    int d1_sum = 0;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i==j)
            {
                d1_sum += num[i][j];
            }
        }
    }
    cout<<endl<<"Sum of main diagonal = "<<d1_sum<<endl;

    //secondary diagonal
    int d2_sum = 0;
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            if (i+j==3)
            {
                d2_sum += num[i][j];
            }
        }
    }
    cout<<"Sum of secondary diagonal = "<<d2_sum<<endl;

    return 0;
}