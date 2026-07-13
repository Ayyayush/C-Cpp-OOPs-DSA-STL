 PROBLEMS IN OVERRIDNG :=
 Funtion overriding ensure appropriate call of function with respect to the caller object
 BUT , when function is called with the help of the base class pointer which points
  to the object of the derived class base class version of function is invoked instead of the derived class version

 This problem in overriding arises due to early binding.

 eg car *p = new sportscar ;
 // yaha pointer point krne wala h aur uska type h car toh compiler car class mein jaa ke dekhega
 ab jaise hum p->shiftgear ko call karenge  toh aise wle mein dikkat hogi
 

class car
{
public :
 void shiftgear()
 {....}
 }


class sportscar : public car
{
yaha pe hum changegear naam se function bana skte h par hum aisa nhi krte h 
kyunki hum class car ke shiftgear ko moidfy krna chahte h par kr nhi skte.
so hum same naam ka function yha bana ke yha modify krte h
 kyunki sportscar ka obj call karega toh early binding ki wajeh se yhi chalega pehle

public :
void shiftgear()
{...}
}


AS IN EARLY BINDING 
decision of looking function definition is based on the type of the pointer which is used to call an overriden method

SOOOOO WE SEE 
real world mein sportscar ka hi gear change hoga par oops world mein ye problem ho rhi h 


SOLUTION OF THIS PROBLEM :=
Use late binding of overriden methods
late binding  ke liye padhna padhta h virtual function
VIRTUAL likh dene se hum compiler ko bta rhe h ki iski early binding mat karo late binding karo 
late binding ko dyanamic binding bhi bolte h

NOTE :=
Jab hum compiler ko kehte h virtual keyword laga ke iski early binding mat karo toh compiler to run time ke waqt hota hi nhi h isliye ye usko pura program khtm hone ke baad compiler krta h naaki run time ke  time
ALSO :
Parent class mein virtual function ko override krte h agar child class mein toh wo automatically virtual hi rahega .....wha virtual nhi likhna h 
aisa sirf overriding mein hota h hiding mein nhi hota h



#include <iostream>
using namespace std;
class A
{
    public :
     virtual void f1()                //class ke andar bana ke function jiske pehle virtual keyword likhh diya ho toh wo virtual function hota h
    {
        cout <<"A-f1";
     
    }
      
       
};
class B: virtual public A       // virtual likhne se A class ke members do baar count nhi honge
{
public :
void f1()
{
     cout <<"B-f1";

}
 
  
};

int main()
{
    A*p=new B;
    p->f1();
    cout<<endl;
    return 0;
}






#include<iostream>
using namespace std;

class A
{
public:

    // Virtual Function
    // Tells the compiler:
    // "Do not perform Early Binding for this function.
    // Decide at Runtime based on the actual object."
    virtual void f1()
    {
        cout<<"f1 of A"<<endl;
    }
};

class B : public A
{
public:

    // Function Overriding
    // Same name + Same prototype as Base Class
    // Since A::f1() is virtual,
    // B::f1() automatically becomes virtual.
    // No need to write 'virtual' again.
    void f1()
    {
        cout<<"f1 of B"<<endl;
    }

    void f2()
    {
        cout<<"f2 of B"<<endl;
    }
};

int main()
{
    A *obj1;          // Base Class Pointer
    B obj2;           // Derived Class Object

    obj1=&obj2;       // ! Allowed Base Class pointer can point to a Derived Class object.

    obj2.f1();
    // Compiler first searches class B.
    // f1() is found in B.
    // Hence B::f1() is executed.

    obj1->f1();
    // Pointer TYPE = A*
    // Actual OBJECT = B
    // ! Since f1() is virtual,compiler does NOT perform Early Binding.
    // It postpones the decision until Runtime.
    // At Runtime, program checks the actual object.
    // Actual object belongs to class B.
    // Therefore B::f1() is executed.
    // This is Dynamic (Late) Binding.
    // Hence Runtime Polymorphism is achieved.

    // ! obj1->f2();   ERROR
    // Dynamic Binding works only for
    // overridden virtual functions.
    // f2() is not present in class A.
    // Compiler searches only class A
    // because pointer type is A*.
    // Hence compilation error.

    obj2.f2();
    // Compiler searches class B. f2() is found in B.
    // Hence B::f2() is executed.

    return 0;
}