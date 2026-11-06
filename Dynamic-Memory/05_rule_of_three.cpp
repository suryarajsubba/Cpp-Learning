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

        // custom deep-copy constructor
        Student(const Student &other)
        {
            marks = new int(*other.marks);
        }

        // custom deep-copy assignment operator
        Student& operator=(const Student &other)
        {
            // check self-assignment
            if (this==&other)
            {
                return *this;
            }

            // release old memory
            delete marks;

            // allocate new memory and copy the value
            marks = new int(*other.marks);

            // return the destination object
            return *this;

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
    Student s2(80);

    s2 = s1;

    *s1.marks = 95;

    /* Here's what happens:
        1. s1 allocates memory containing 90.
        2. s2 allocates memory containing 80.
        3. s2 = s1 releases s2's old memory.
        4. A new allocation is created for s2, containing 90.
        5. s1 changes to 95.
        6. s2 remains 90. */

    cout << *s1.marks << endl;
    cout << *s2.marks << endl;

    return 0;
}