/*
DESTRUCTOR :=
Destructor never inherits...so no need to call parent's destructor explicitly

class A()
{
 public :
~A()
{}
}

class B()
{
 public :
 ~B()
 {

 pehle b ka destructor apna code chaleayega firr A ke destrcutor ko call karega unlike constructors
 
 
 ~A()                   // call to destructor of parent class
 }
order of call is ~B()  then   ~A()
execution order ~B()   then  ~A()

*/



#include<iostream>
using namespace std;

class Parent
{
protected:
    int x;                     // Accessible inside derived class

public:
    // Base class constructor
    Parent()
    {
        cout<<"Parent Constructor Called"<<endl;
        x=10;
    }

    void showParent()
    {
        cout<<"Parent x = "<<x<<endl;
    }

    // Base class destructor
    ~Parent()
    {
        cout<<"Parent Destructor Called"<<endl;
    }
};

class Child : public Parent
{
    int y;

public:
    // Derived class constructor
    Child()
    {
        cout<<"Child Constructor Called"<<endl;
        y=20;
    }

    void showChild()
    {
        // Accessing inherited protected member
        cout<<"Parent x = "<<x<<endl;
        cout<<"Child y = "<<y<<endl;
    }

    // Derived class destructor
    ~Child()
    {
        cout<<"Child Destructor Called"<<endl;
    }
};

int main()
{
    Child obj;                 // Parent Constructor → Child Constructor

    obj.showParent();          // Inherited member function
    obj.showChild();

    // When main() ends:
    // Child Destructor executes first
    // Parent Destructor executes afterwards

    return 0;
}