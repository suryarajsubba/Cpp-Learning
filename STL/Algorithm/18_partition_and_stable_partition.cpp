#include <iostream>
#include <vector>
#include <algorithm>

void print_vector(const std::vector<int> &vec)
{
    for (int n : vec)
    {
        std::cout << n << " ";
    }
    std::cout << "\n";
}

int main()
{
    const std::vector<int> original = {12, 5, 45, 8, 67, 23, 90, 3, 56};


    // Partition even and odd numbers (order not preserved)

    std::vector<int> v1 = original;     // copy of original vector
    std::partition(v1.begin(), v1.end(), [](int n){return n%2 == 0;});
    print_vector(v1);


    // Stable partition (order preserved)

    std::vector<int> v2 = original;     // copy of original vector
    auto it = std::stable_partition(v2.begin(), v2.end(), [](int n){return n%2 ==0;});
    print_vector(v2);


    // Use the iterator returned by stable_partition to print the elements before it as "Even numbers"
    // and the elements after it as "Odd numbers"

    std::cout << "Even numbers: ";
    for (auto i = v2.begin(); i != it; i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\n";
    
    std::cout << "Odd numbers: ";
    for (auto i = it; i != v2.end(); i++)
    {
        std::cout << *i << " ";
    }
    std::cout << "\n";

    return 0;
}