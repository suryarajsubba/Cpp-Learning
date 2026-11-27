#include <iostream>

int main()
{
    int n;  // no. of rows

    std::cout << "Enter number of rows: ";
    std::cin >> n;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i+j >= n-1)
            {
                std::cout << "*";
            }
            else 
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}