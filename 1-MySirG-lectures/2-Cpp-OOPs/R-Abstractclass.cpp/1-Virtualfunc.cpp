
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
Jab hum compiler ko kehte h virtual keyword laga ke iski early binding mat kar
 toh compiler to run time ke waqt hota hi nhi h isliye ye usko pura program khtm 
 hone ke baad compiler krta h naaki run time ke  time
ALSO :
Parent class mein virtual function ko override krte h agar child class mein
 toh wo automatically virtual hi rahega .....wha virtual nhi likhna h 
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


NOTE :-==
it is not necessary to override a virtual function

class A
{
    public :
     virtual void f1()                //class ke andar bana ke function jiske pehle virtual keyword likhh diya ho toh wo virtual function hota h
    {
     
     
    }
      
     virtual void f2()               
    {
      
     
    }
       
       
};
class B: virtual public A     
{
public :
void f1()
{
    

}
 
  
};


