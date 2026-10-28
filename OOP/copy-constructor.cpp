#include <iostream>
#include <string>
using namespace std;

class Student
{
    public:
        string name;
        int age;

        Student(string nm, int a) : name(nm), age(a)
        {
        }
};

int main()
{
    Student s1("Surya", 19);

    Student s2 = s1;    //copy construction

    Student s3("Rahul", 20);
    s3 = s1;            //copy assignment

    s1.name = "Aman";
    
    cout << s1.name << endl;
    cout << s2.name << endl;
    cout << s3.name << endl;

    return 0;
}