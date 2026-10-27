#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("diary.txt", ios::app);      //append mode

    string line;
    cout << "Enter your diary entry: ";
    getline(cin, line);

    file << line << endl;

    file.close();

    cout << "Diary entry saved successfully!" << endl;

    return 0;
}