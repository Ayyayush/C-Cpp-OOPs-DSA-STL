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