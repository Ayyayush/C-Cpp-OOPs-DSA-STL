#include<iostream>
using namespace std;

class Test
{
private:
    int a,b;

public:

    // Constructor
    Test()
    {
        cout<<"Test Constructor"<<endl;
    }

    // Pure Virtual Function
    // No definition is provided.
    // '=0' is only a syntax.
    // It does NOT mean storing 0 anywhere.
    // Since Test contains a Pure Virtual Function,
    // it becomes an Abstract Class.
    virtual void f1()=0;

    // Normal Member Function
    void f2()
    {
        cout<<"f2 of Test"<<endl;
    }

    // Virtual Destructor
    // Ensures proper destruction when
    // deleting a Derived object using
    // a Base Class pointer.
    virtual ~Test()
    {
        cout<<"Test Destructor"<<endl;
    }
};

class DummyTest : public Test
{
public:

    // Constructor
    DummyTest()
    {
        cout<<"DummyTest Constructor"<<endl;
    }

    // Overriding the Pure Virtual Function.
    // After overriding, DummyTest becomes
    // a concrete class and its object
    // can now be created.
    void f1()
    {
        cout<<"Overridden f1()"<<endl;
    }

    // Destructor
    ~DummyTest()
    {
        cout<<"DummyTest Destructor"<<endl;
    }
};

int main()
{
    // ! Test obj;   this will give ERROR
    // Test is an Abstract Class.
    // An Abstract Class cannot have objects.

    Test *ptr=new DummyTest;
    // Allowed
    // Base Class pointer points
    // to Derived Class object.

    ptr->f1();
    // Runtime Polymorphism
    // f1() is virtual.
    // Runtime checks actual object.
    // Calls DummyTest::f1().

    ptr->f2();
    // Normal function.
    // Inherited from Test.

    delete ptr;
    // Since destructor is virtual,
    // Destructor order will be:
    // DummyTest Destructor
    // Test Destructor

    return 0;
}