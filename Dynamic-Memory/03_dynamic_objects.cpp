#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        // data members
        string name;
        int age;

    public:
        // constructor
        Student(string nm, int a) : name(nm), age(a)    
        {}

        // destructor
        ~Student()      
        {
            cout<<"Student object destroyed!"<<endl;
        }

        // display student details
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main()
{
    Student *s1 = new Student("Surya", 19);
    s1->display();

    delete s1;      // calls the destructor and releases the allocated memory
    s1 = nullptr;   // prevents the pointer from retaining the old address

    return 0;
}