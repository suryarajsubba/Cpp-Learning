#include<iostream>
#include<string>
using namespace std;

class Employee      //abstract class
{
    public:

        string name;        //data member

        Employee(string nm) : name(nm)      //constructor
        {

        }

        virtual double calculateSalary() = 0;       //pure virtual function
};

class FullTimeEmployee : public Employee
{
    public:

        double monthlySalary;       //data member

        //contructor
        FullTimeEmployee(string nm, double m_slry) : Employee(nm), monthlySalary(m_slry)
        {

        }

        double calculateSalary() override
        {
            return monthlySalary;
        }
};

class PartTimeEmployee : public Employee
{
    public:

        //data members
        double hoursWorked;
        double hourlyRate;

        //constructor
        PartTimeEmployee(string nm, double hrs_worked, double hrs_rate) : 
        Employee(nm), hoursWorked(hrs_worked), hourlyRate(hrs_rate) 
        {
        }

        double calculateSalary() override
        {
            return hoursWorked * hourlyRate;
        }
};

int main()
{
    FullTimeEmployee f1("Alex", 40000);
    PartTimeEmployee p1("Sam", 80, 200);

    Employee *ptr;      //base class pointer

    ptr = &f1;
    cout<<"Employee: "<<ptr->name<<endl;
    cout<<"Monthly Salary: "<<ptr->calculateSalary()<<endl;
    
    ptr = &p1;
    cout<<endl<<"Employee: "<<ptr->name<<endl;
    cout<<"Monthly Salary: "<<ptr->calculateSalary()<<endl;

    return 0;
}