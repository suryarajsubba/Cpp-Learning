#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num = {5,10,15,20,25};
    
    vector<int> :: iterator it = num.begin();   // num.begin() returns an iterator pointing to index 0
    cout << *it << endl;    // 5

    it++;   // points toward index 1
    cout << *it << endl;    // 10

    it+=2; // points toward index 3
    cout << *it << endl;    // 20

    return 0;
}