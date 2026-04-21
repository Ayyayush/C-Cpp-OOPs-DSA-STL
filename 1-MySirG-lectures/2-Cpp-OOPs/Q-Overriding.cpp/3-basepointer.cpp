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
A *p;
A x1;
p= &x1;


B x2;
p= &x2;         // pointer parent class type ka h par child class ke object ka bhi address contain kr skta  h
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
    void f2()
    {
        cout<<"f2 of B"<<endl;
    }
};

int main()
{
    A *p;
    B o2;
    p=&o2;  
    o2.f1();      // ye pehle b mein f1 ko dhundgea waha nhi milega tab jayega parent class mein
    // reason :: A  due to early binding
    // pointer o2 ko point kr rha h toh pointer ke through bhi access kr skte h 
    p->f1();
    p->f2();            // ye error dega kyunki pointer child class ke members ko access nhi kr skta 

    o2.f2() ;       // B due to early binding
    cout<<endl;
    return 0;
}





