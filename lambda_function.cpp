#include <iostream>
using namespace std;

int main()
{
    auto sum = [](int a, int b){return a+b;};

    cout << sum(10,20) << endl;     // 30

    
    auto square = [](int n){return n*n;};

    cout << square(5) << endl;      // 25


    int num = 50;

    auto display = [num](){cout << num << endl;};

    display();      // 50

    auto change = [&num](){return num * 2;};

    cout << change() << endl;       // 100

    return 0;
}