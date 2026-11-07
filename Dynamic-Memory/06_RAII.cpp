#include <iostream>
using namespace std;

class Number{
    private:
        int *value;

    public:
        // constructor
        Number(int n){
            value = new int(n);
        }

        // destructor
        ~Number()
        {
            delete value;
            cout << "Destructor called!" << endl;
        }

        //display the integer
        void display()
        {
            cout << *value << endl;
        }
};

int main()
{
    cout << "Program started" << endl;

    {
        Number n1(10);
        n1.display();
    }   // n1 goes out of scope here

    cout << "Outside the scope" << endl;

    return 0;
}