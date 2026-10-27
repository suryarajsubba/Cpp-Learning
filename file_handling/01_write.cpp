#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("intro.txt");     //write mode
    
    file << "Hello! I am Surya!"<<endl;
    file << "I am learning file handling in C++" << endl;

    file.close();

    cout << "File created successfully!" << endl;

    return 0;
}