/*
HYBRID INHERITANCE
it is  a mixture of two or more inheritance



DIAMOND OR DIAMOND OF DEATH PROBLEM :: =

class A
{
public:
void f1()  {...}
}
class B1:public A
{
public :
void f2()
{..}
}

class B2:public A
{
public :
void f3()
{..}
}

class C: public b1,public b2
{
public :
void f4()
{..}
}

{
c obj
obj.f4();
obj.f3();
obj.f2();
obj.f1();


NOTE :=
obj.f4() se c class ka f4() hui chale ye compiler se decide karega... pehle function call pe early binding karega firr caller object ko dekhega
early binding ke time agar class c mein f4() nhi mila tab wo parent classes mein jayega jabtak f4() nhi mil jata
parent class nhi h toh nhi jayega
uske baad agr mil gya toh arguement match kiya toh bind ho jayega nhi toh error de dega

NOTE :=
maan lo compiler yha pe f1() dhund rha h agr wo usse b1 mein nhi milka toh wo uske parent class mein  jayega naaki B2 hai

ALSO :=
maan lo compiler yha pe f3() dhund rha h agr wo usse b1 mein nhi milka toh wo uske parent class mein  jayega naaki B2 hai
firr agr usse a class mien bhi nhi mila toh A ki parent classes mein jayega agr hui toh....nhi hai toh raaste ka end ho gya h....
ab ek step  piche aa jayenge aur check karenge ki kB1 ki koi aur parent class toh nhi ....saare parent classes ko explore karne ke baad ek step aur piche aa jayega
ab  C ki koi aur parent class toh nhi ....saare parent classes ko explore karega aur B2 mein jayega....naam bhar bhi match kar gya toh wo parent class mein nhi jayega
B 2 mein f3 () milne ke baad arguement check karega...agr arguement match nhi kiya toh ek step piche aake c ke aur parent class ko check karega
Agr do jagah f3() naam ke function mil gye aur arguement bhi match kar gya toh ambiguity error aa jayegi

SIMILARLY :=
f2() millne kae baad piche aa ke B2() mein bhi jayenge

FOR F1() :=
B1() mein f1 na milne ke baad sidhe A class mein  jayega F1() milne par piche aa ke pehle B2() mein check karaga wha na milne pe firr A class mein jayega firr usse F1() milega
aise 2 baar f1() mil chuka h toh error aaayega kyunki compiler ko nhi pata h ki donno f1 ek hi h

// virtual likhne se A class ke members do baar count nhi honge


ISS DIAMOND PROBLEM MIEN AAKHIR MEIN JO CLASS PROBLEM KAR RHA H WO CLASS A h
SO ::=
DIS_INHERITANCE BASE CLASS KARENGE
jaise b1 mein nhi mila rtoh wapas c mein aake b2 mein jayenge wha bhi nhi mila toh wapas aake c se sidhe A class mein jayenge



*/

#include <iostream>
using namespace std;
class A
{
    public :
    void f1()
    {
        cout <<"A-f1";
     
    }
      void f3(int x) { cout<<"A-F3(int)";}              // ambigiuos ho jayega
       
       
};
class B1: virtual public A       // virtual likhne se A class ke members do baar count nhi honge
{
public :
void f2()
{
     cout <<"B-f2";

}
  //   void f3(int x) { cout<<"A-F3(int)";}              // ambigiuos ho jayega aur function overloading nhhi h kyunki dono f3 ka scope alag h
  
};

class B2:public A
{
public :
void f3()
{
     cout <<"B2-f3";
}
};

class C: public B1,public B2
{
public :
void f4()
{
     cout <<"C-f4";
}
};

int main()
{
    C obj;
    obj.f1();
  //  obj.f3();            // isse error dega
 // obj.f3(4);      // isse error aayega
  obj.B1::f3(4);             // no error
    cout<<endl;
    return 0;
}