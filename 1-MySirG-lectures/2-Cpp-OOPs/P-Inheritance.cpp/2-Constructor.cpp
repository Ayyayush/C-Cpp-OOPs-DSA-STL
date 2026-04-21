/*
CONSTRUCTOR - DESTRCUTOR
constructor destructor are not inherited

A:= a1,a2,A()......initializes only a1,a2
B:=b1,b2,B()......initializes only b1,b2

NOW
b obj := a1,a2,b1,b2 ........// how to initilaize all
ans :: A(),B().... dono ko chalna hoga
BUT
inherit nhi hote toh dono chalenge kaise ?
Using initiliazer list := as it is used to invoke base class constructor

HOW ::= 
 B class ka constrcutor B() a class ke A() ko call kar lega
NOTE :=
child class constrcutor implicitly or explicitly invokes comnstructor of base class




CASE 1:
when no explicit constructor is defined by the programmer in class A and class B
eg 
class A()
{
// public :.....ye compiler bana rha h
//A()...{}..no code kyunki compiler ne bnaya h
}

class B()
{
// public :.....ye compiler bana rha h
// B():A()
   {
   }


agar constructor b class mein bana rha h jo ki child class h 
toh pehle base class mein constructor banayega compiler
B obj : it calls construcot of b class
order of constructor calls B()... then A()
BUT := exectution order is A()...then B()
}


CASE 2 :
expllicitly constructor of class a is made
when no explicit constructor is defined by the programmer in  class B
eg 
class A()
{
 public :
/A()...{}
}

class B()
{
// public :.....ye compiler bana rha h
// B():A()

agar constructor b class mein bana rha h jo ki child class h
 toh pehle base class ke constructor ko call karega compiler
B obj : it calls construcot of b class
order of constructor calls B()... then A()
BUT := exectution order is A()...then B()



CASE 3:   .....very important
when explicit parametrized constructor in class A is provided by the programmer and no explicit constructor is provided in class B
NOTE :=
there is no constructor in class A which takes zero arguement

class A()
{
 public :
A(int a)
{
}
}

class B()
{
public :
B():A()

// B obj ...... bina b mein construcotr banaye casll krne ki wajah se
}
Yadi parent class mein koi bhi non parametrized constructer nhi h toh yeh compulsory h ki
 child class mein programmer constructor banaye...sath hi present class  ke constructor ko call karne ka kaam bhi kare



CASE 4 :
when class A has an explicit paramterized constructor and no constructor with zero 
arguements class B has an explicit constructor but call to parent class constructor is not explicitly written
 
 
class A()
{
 public :
A(int a)...{}
}

class B()
{
 public :
 B()..........// :A()     this is done by the compiler
 {.. }
 }



 CASE 5 :
 class a has only parametrized constructor and no non parametrized constructor class b has explicit constructor which 
 calls parametrized constructor of parent class
 
class A()
{
 public :
/A()...{}
}

class B()
{
 public :
 B():A(5)
{....}



 CASE 6 :
 when parent class has multiplle constructor along with no arguement constructor then it 
 is programmer choice to provide explicit constructor in child class or not
 
class A()
{
 public :
A()...{}
A(int a)
{..}
}

class B()
{
 public :.....ye compiler bana rha h
 B():A()
 {..}
 B(int x,int y) :  A(x)
 {..}


*/