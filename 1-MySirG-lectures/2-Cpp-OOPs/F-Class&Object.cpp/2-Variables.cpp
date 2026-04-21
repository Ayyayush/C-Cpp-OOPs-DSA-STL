 
on basis of scope in c and c++' 
global
local

c++ mein ek aur variable hota h' 
MEMBER VARIABLES
ye 2 type ka hota h 
*Instance member variable
*Static member variable

Static varaible se pehle hamesha static keyword likhenge
Instance ke andar bane variable ko instance meber variable bolenge  


MEMBERS'
MEMBER VARIABLE :: 1> STATIC   2> INSTANCE
MEMBER FUNCTION :: 1> STATIC   2> INSTANCE


 INSTANCE MEMBER FUNCTION'
They are defined without static keyword
Instance member function usko bolenge jo instance ke liye work kar rhe h
Ye object specific kaam krte h
ye current object ke kisi member ko access kr skte h
they can only be called for object of same class
class ke andar member function banane ya define pe by default wo inline hota h


Defining INSTANCE MEMBER FUNCTION OUTSIDE CLASS BODY   
need :: bade bade functions ko class ke andar bnana shi nhi
Steps:=
define the function in the class
access the function outside the class using membership label operator 
eg:-
   

class complex
{
      void showdata();
}

void
complex ::showdata();
{
}
