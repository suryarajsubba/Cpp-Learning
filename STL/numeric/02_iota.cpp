#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

// custom print function for vectors
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
    // Create a vector of size 15 and fill it with numbers starting from 1
    std::vector<int> numbers(15);
    std::iota(numbers.begin(), numbers.end(), 1);
    print_vector(numbers);

    // Create a vector of size 10.
    // Use iota() to generate numbers starting from 2, then transform them into even numbers using transform()
    std::vector<int> evenNumbers(10);
    std::iota(evenNumbers.begin(), evenNumbers.end(), 2);
    std::transform(evenNumbers.begin(), evenNumbers.end(), evenNumbers.begin(), [](int n){return n*2;});
    print_vector(evenNumbers);

    // Create a vector of size 10 and use iota() to generate numbers starting from 10
    // Then use transform() to turn them into negative numbers
    std::vector<int> negativeNumbers(10);
    std::iota(negativeNumbers.begin(), negativeNumbers.end(), 10);
    std::transform(negativeNumbers.begin(), negativeNumbers.end(), negativeNumbers.begin(), [](int n){return -n;});
    print_vector(negativeNumbers);

    return 0;
}