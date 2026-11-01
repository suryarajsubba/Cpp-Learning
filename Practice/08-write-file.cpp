#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("hello.txt"); //write mode (create new file or will overwrite existing file)

    file << "Hello!" << endl;
    file << "I am Surya." << endl;

    file.close();

    return 0;
}