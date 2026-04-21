#include <iostream>
using namespace std;
class Complex
{
     // ye saare instance member h
    private : // ye by default bhi private hi hota h
    int a;
    int b;

    public :
     // instance member function
    void setData(int x,int y)
    {
      cout<<"Storing the values of the member functions"<<endl;
      a=x;
      b=y;
    }
    void showData()
    {
     cout<<"The values of the member functions are "<<a<<" "<<b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
       cout<< temp.a<<endl;

    }

     Complex subtract(Complex c)
    {
         Complex temp;
       temp.a=a-c.a;
        temp.b=b-c.b; 
      cout<< temp.a<<endl;

    }

    Complex multiply(Complex c)
    {
         Complex temp;
       temp.a=a*c.a;
        temp.b=b*c.b; 
      
        cout<< temp.a<<endl;
    }
   
};
int main()
{
    Complex c1,c;// creation of objects
   
    c1.setData(78,978);
    c1.showData();
    c1.add(c1);
   
    c1.subtract(c1);
   
   c1.multiply(c1);
   
    return 0;
}