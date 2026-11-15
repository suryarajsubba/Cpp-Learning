#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_vector(const vector<int> &vec)
{
    for (int n : vec)
    {
        cout << n << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> numbers = {5, 2, 8, 2, 10, 5, 3, 8, 10, 15};
    
    // print original vector
    cout << "Original: ";
    print_vector(numbers);

    // print the original size
    cout << "Original size: " << numbers.size() << endl;

    // unique() only removes consecutive duplicates! Sort first, then use unique()
    
    // Sort the vector in ascending order
    sort(numbers.begin(), numbers.end());       
    
    // print the sorted vector
    cout << "Sorted: ";
    print_vector(numbers);

    // Remove all duplicate elements using unique() and erase()
    numbers.erase(unique(numbers.begin(), numbers.end()), numbers.end());

    // Print the final vector
    cout << "Unique: ";
    print_vector(numbers);

    // Print the final size
    cout << "Final size: " << numbers.size() << endl;

    return 0;
}