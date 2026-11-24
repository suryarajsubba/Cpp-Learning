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
    /* Task 1 — Generate multiples of 5 */

    // Create a vector of size 10.
    std::vector<int> num1(10);

    // Use generate() to fill it with multiples of 5, starting from 5.
    int a = 1;
    std::generate(num1.begin(), num1.end(), [&a](){return 5*a++;});

    // print the result
    std::cout << "Multiples of 5: ";
    print_vector(num1);


    /* Task 2 — Generate squares */

    // Create a vector of size 10.
    std::vector<int> squares(10);

    // Use generate() to produce squares of numbers from 1 to 10.
    int b = 1;
    std::generate(squares.begin(),squares.end(), [&b](){
        int result = b*b;       // safer approach
        b++;
        return result;
    });

    // print the result
    std::cout << "Squares: ";
    print_vector(squares);


    /* Task 3 — Use generate_n() to generate only the first 6 elements */

    // Create a vector of size 10.
    std::vector<int> num2(10);

    // Generate multiples of 3, starting from 3.
    // Use generate_n() to generate only the first 6 elements.
    int c = 1;
    std::generate_n(num2.begin(), 6, [&c](){return 3*c++;});

    // print the result
    std::cout << "Multiples of 3: ";
    print_vector(num2);

    return 0;
}