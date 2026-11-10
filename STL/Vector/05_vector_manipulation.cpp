#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers = {10,20,30,40,50};
    
    // print first element
    cout << numbers.front() << endl;

    // print last element 
    cout << numbers.back() << endl;

    // insert 25 at index 2
    numbers.insert(numbers.begin() + 2, 25);    // now numbers = {10,20,25,30,40,50}

    // insert 5 at the beginnning
    numbers.insert(numbers.begin(), 5);     // now numbers = {5,10,20,25,30,40,50}

    // remove the element at index 3 using erase()
    numbers.erase(numbers.begin() + 3);     // now numbers = {5,10,20,30,40,50}

    // remove a range of elements from index 2 to index 4
    numbers.erase(numbers.begin() + 2, numbers.begin() + 5);    // last element is not included // now numbers = {5,10,50} 

    // remove the last element using pop_back()
    numbers.pop_back();     // now numbers = {5,10}

    // insert 20 at end
    numbers.push_back(20);  // now numbers = {5,10,20}

    // print vector elements
    for (int i=0; i < numbers.size(); i++)
    {
        cout << numbers.at(i) << " ";
    }
    cout << "\n";

    return 0;
}