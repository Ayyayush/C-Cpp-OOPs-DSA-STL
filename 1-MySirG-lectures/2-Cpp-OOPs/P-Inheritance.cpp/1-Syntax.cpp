#include <bits/stdc++.h>
#include <cstring>         // strcpy ke liye required
using namespace std;

// Base class
class Person
{
private:
    int age;
    char name[20];

protected:
    void setAge(int a)     // protected: child class access kar sakti hai
    {
        age = a;
    }

    void setName(char n[]) // protected: child class access kar sakti hai
    {
        strcpy(name, n);   // name copy karne ke liye
    }

public:
    int getAge()           // public getter for age
    {
        return age;
    }

    char* getName()        // public getter for name
    {
        return name;
    }
};

// Derived class
class Employee : public Person
{
private:
    float salary;

public:
    void setEmployee(int a, char n[], float s)
    {
        // age directly access nahi kar sakte because it is private in base class
        setAge(a);         // base class ka protected method call kar rahe
        setName(n);        // name set kar rahe using base class method
        salary = s;        // salary set kar rahe
    }

    float getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee e1;                                        // object of derived class

    e1.setEmployee(25, (char*)"Rahul", 55000.5);        // employee details set kar rahe
                                                        // typecast kiya (char*) for string literal

    cout << "Name: " << e1.getName() << endl;           // name print
    cout << "Age: " << e1.getAge() << endl;             // age print
    cout << "Salary: " << e1.getSalary() << endl;       // salary print

    return 0;
}
