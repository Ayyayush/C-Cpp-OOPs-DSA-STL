#include <iostream>
using namespace std;
class complex
{
    private:
     int a;   // property names
     int b;
     int c;


    public :
// IMPLICIT DESTRUCTOR MEIN NO BODY NO ARGUEMENT HOTA H
   ~complex()
    {
    
        cout<<"Hello"<<endl;
         // jitne object hai utni baar call ho rha h
          // ye member function chalne ke baad chalta h 
    }
     
    void setData(int x,int y)  // member functions 
   
    {
       
       a=x;
       b=y;
    }

void showData()
 {
    cout<<"Real "<<a<<" "<<"Imaginary "<<b<<endl;

 }
 };



  int main() 
  {
    complex c1,c2;
    c1.setData(3,4) ;
   c1.showData();
   c2.setData(5,6);
  
    return 0;
  }
