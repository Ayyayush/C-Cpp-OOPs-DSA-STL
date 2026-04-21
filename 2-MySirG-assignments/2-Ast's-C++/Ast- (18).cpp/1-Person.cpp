#include <bits/stdc++.h>
using namespace std;

class person
{
private:
    // Name ko string banaya gaya hai, ab dynamically size specify karna nahi padega
    string name;
    string newname;
    int age;

public:
    // Constructor ko public banaya gaya
    person(string name, string newname, int age)
    {
        this->name = name;
        this->newname = newname;
        this->age = age;
    }

    // Setters aur getters public mein kiye gaye, taaki access ho sake
    void setters(string name, string newname, int age)
    {
        this->name = name;
        this->newname = newname;
        this->age = age;
    }

    void getters()
    {
        cout << "name is: " << name << endl;
        cout << "newname is: " << newname << endl;
        cout << "age is: " << age << endl;
    }
};

class employee : public person
{
private:
    int salary;

public:
    // Employee ka constructor jo person ko inherit karega
    employee(string name, string newname, int age, int salary) : person(name, newname, age)
    {
        this->salary = salary;
    }

    // Salary set karne ka function
    void setemployee(int s)
    {
        this->salary = s;
    }

    // Salary dikhane ka function
    void getemployee()
    {
        cout << "salary is: " << salary << endl;
    }
};

int main()
{
    // Object banaya gaya 'employee' ka aur parameters pass kiye gaye constructor mein
    employee e("John", "Johnny", 30, 50000);

    // Getters ko call kiya gaya
    e.getters();

    // Salary ko print kiya gaya
    e.getemployee();

    return 0;
}
