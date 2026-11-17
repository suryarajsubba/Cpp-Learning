#include <iostream>
#include "calculator.h"

using namespace std;

int main()
{
    int sum = add(10,20);
    cout << "Sum of 10 and 20: " << sum << endl;

    int diff = subtract(90,40);
    cout << "Difference between 90 and 40: " << diff << endl;

    return 0;
}