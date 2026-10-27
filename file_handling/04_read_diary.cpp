#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("diary.txt");     //read mode
    
    string line;
    int count = 0;

    while (getline(file, line))
    {
        cout << line << endl;
        count++;
    }

    cout << "Number of lines: " << count << endl;

    file.close();

    return 0;
}