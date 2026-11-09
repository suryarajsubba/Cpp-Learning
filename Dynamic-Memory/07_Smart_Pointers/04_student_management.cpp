#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Student
{
    private:
        // data members
        string name;
        unique_ptr<int> marks;

    public:
        // constructor
        Student(string nm, int m) : name(nm), marks(make_unique<int> (m)) {}

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Marks: " << *marks << endl;
        }
};

int main()
{   
    Student s1("Surya", 95);
    s1.display();

    return 0;
}