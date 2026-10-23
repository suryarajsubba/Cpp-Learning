/*Imagine this hierarchy:
- Person has a name.
- Student inherits from Person.
- Employee also inherits from Person.
- TeachingAssistant inherits from both Student and Employee.

Your task is to write the four classes and create a TeachingAssistant object.

Give Person a constructor that initializes name. 
Give Student and Employee constructors that call Person's constructor. 
Then give TeachingAssistant a constructor that initializes both its inherited branches.

Goal: Try to display the person's name.*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
    public:
        string name;    //data member

        Person(string nm) : name(nm)        //constructor
        {

        }
};

class Student : virtual public Person
{
    public:
        int studentID;  //data member

        Student(string nm, int id) : Person(nm), studentID(id)   //constructor
        {

        }
};

class Employee : virtual public Person
{
    public:
        int salary;     //data member

        Employee(string nm, int slry) : Person(nm), salary(slry)    //constuctor
        {

        }
};

class TeachingAssistant : public Student , public Employee      //teaching assistant means a person who is a student and also an employee i.e he also works a teacher
{
    public:
        /*The most-derived class initializes the virtual base class.
        The most-derived class simply means the class at the bottom of the inheritance chain that you're actually creating an object of. 
        Here, that class is TeachingAssistant.*/
        
        TeachingAssistant(string nm, int id, int slry) : Person(nm), Student(nm, id), Employee(nm, slry)     //constuctor
        {

        }
};

int main()
{
    TeachingAssistant TA("Surya", 202, 30000);
    cout << "Teaching Assistant's name: " << TA.name << endl;
    cout << "Teaching Assistant's student ID: " << TA.studentID << endl;
    cout << "Teaching Assistant's salary: " << TA.salary << endl;

    return 0;
}