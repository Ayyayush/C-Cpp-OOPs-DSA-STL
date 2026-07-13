BASE POINTER :=
pointer of a class can point to an object of any of the descendant class 


class A 
{
// A class ka pointer b class yya c class ya d class ya kisi bhi child class ka address rakh skta h ....par iska ulta nhi hota
};
class B : public A 
{

};

// pointer jis class type ka h uss class ke object ka address contain  karega 
eg :=
A *obj1;
A x1;
obj1= &x1;


B x2;
obj1= &x2;         // pointer parent class type ka h par child class ke object ka bhi address contain kr skta  h
// upar dono class ke pointer ek type ke nhi h par a class wala pointer b class wale object ka ddress tbhi rakh payega agr a parent class ho



Note::'
child class ka pointer parent class ke object ko point nhi kr skta 
bas parent class ka pointer child class ke object ko point kr skta h 
Inheritance mein jo class upar hoti h wo generalized hoti h jo niche hoti h wo specialized hoti h 
toh generalized ka pointer specialized ke object ko point ker skta h '

'BASE CLASS POINTER CAN POINT TO ANY AN OBJECT OF ANY DESCENDANT CLASS BUT CAN ACCESS ONLY BASE CLASS MEMEBERS WHY ? '
ans := EARLY BINDING is the reason as pointer child classs ke members ko point toh kr skta h
 par arrow operator se sirf members of base classs ko access kr skta h
kyunki arrow operator lagne ke baad early binding se compiler point krne wale ko dekhta h
 ...aur pointer ka jo type hota h ussi classs mein jaake members ko dekhta h


 eg::
 #include<iostream>
using namespace std;

class A
{
public:

    void f1()
    {
        cout<<"f1 of A"<<endl;
    }
};

class B : public A
{
public:

    void f2()
    {
        cout<<"f2 of B"<<endl;
    }
};

int main()
{
    A *obj1;          // Base class pointer
    B obj2;           // Derived class object

    obj1 = &obj2;     // ! Allowed  A Base Class pointer can point to a Derived Class object.

    obj2.f1();
    // Compiler first searches class B for f1().
    // B does not have f1(), so it moves to the Base Class A.
    // A::f1() is found and executed.
    // Reason: Early Binding

    obj1->f1();
    // Pointer is pointing to obj2 (Derived object),
    // but the POINTER TYPE is A.
    // During Early Binding, compiler checks the POINTER TYPE,
    // not the actual object.
    // Therefore it searches only inside class A.
    // Hence A::f1() is called.

    // ! obj1->f2();     ERROR
    // Although obj1 points to an object of class B,
    // its TYPE is still A*.
    // Compiler searches only class A for f2().
    // Since class A has no f2(), compilation fails.
    // Base Class pointer can point to a Derived object,
    // but it can access only Base Class members.

    obj2.f2();
    // Compiler first searches class B.
    // f2() is present in B, so it is executed.
    // Compiler never goes to class A.
    // Reason: Early Binding

    return 0;
}