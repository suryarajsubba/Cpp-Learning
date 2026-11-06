#include <iostream>
using namespace std;

class Student
{
    public:
        // data member
        int *marks;

        // constructor
        Student(int m)
        {
            marks = new int(m);
        }

        // custom copy constructor
        Student(const Student &other)
        {
            marks = new int(*other.marks);
        }

        // destructor
        ~Student()
        {
            delete marks;
        }
};

int main()
{
    Student s1(90);
    
    Student s2(s1);     // deep copy. s1 and s2 have their own separate memory

    *(s1.marks) = 95;   //changed marks of s1 to 95

    cout << "Student 1 marks: " << *(s1.marks) << endl;
    cout << "Student 2 marks: " << *(s2.marks) << endl;

    return 0;
}