#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("hello.txt", ios::app); //append mode

    file << "This line is appended." << endl;

    file.close();

    return 0;
}