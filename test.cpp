#include <iostream>
using namespace std;

class Employee
{

private:
    string name;
    float salary;

public:
    Employee(string name, float salary)
    {

        this->name = name;
        this->salary = salary;
    }

    // getters

    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }

    // setters

    void setName(string name)
    {
        this->name = name;
    }
    void setSalary(float salary)
    {
        this->salary = salary;
    }

    // display

    void display()
    {
        cout << "name is : " << name << endl;
        cout << "salary is : " << salary << endl;
    }
};

int main()
{

    Employee emp("yash", 100000);
    emp.display(); 
    emp.setName("jhatu");
    cout << emp.getName();
}