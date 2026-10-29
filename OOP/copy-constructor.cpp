#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:

        //data members
        string name;
        int age;

        //constructor
        Student(string nm, int a) : name(nm), age(a)
        {
        }

        //user-defined copy constructor
        Student(const Student &other) : name(other.name), age(other.age)
        {
            cout << "Copy constructor called!" << endl;
        }
};

int main()
{
    Student s1("Rahul", 20);
    Student s2 = s1;    //copy construction
    cout<<s2.name<<endl;

    Student s3("Surya", 19);
    Student s4(s3);     //copy constructor
    cout<<s4.name<<endl;

    return 0;
}