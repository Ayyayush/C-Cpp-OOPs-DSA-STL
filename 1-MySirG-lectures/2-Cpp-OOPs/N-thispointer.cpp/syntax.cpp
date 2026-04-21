#include <iostream>
using namespace std;
class complex

     int a;   
     int b;
    public :
     
   /*
    void setData(int x,int y)  
   {    a=x;
       b=y;
    }

    // YHA PE AGAR SAME HO JAYEN JAISE X AUR Y KI JAGAH A UR B HI TOH CONFUSION HOGI

    */
        // USES\
        1> removing name conflict between instance and local variable
    void setData(int a,int b)  
   {   
       this->a=a;
       this->=b;
   }

complex sumgreater(complex c)
{
    if ((a+b)<(c.a+c.b))
    return c;
    else 
    return *this;
}


void showData();



add(complex C)
{
   complex temp;
   
 temp.a=a+C.a; // c2 ka a access kr rhe h
  tem.b=b+C.b; // c2 ke b ko access kr rha h
  return temp;
};


 void  /* membership label*/complex ::showData() // member functions 
  {
    cout<<"Real"<<a<<" "<<"Imaginary"<<b;
  }
void f1()


  int main() // ye non member function h
  {
    complex c1,c2,c3;
    c1.setData(3,4) ;
   
      c2.setData(5,6);
      
    c3=c1+c2;
   
   c1. add(c2);    c3=c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    c4=c1.sumgreater(c2);
    c4.showData();
  
    returnn 0
  }
