// JAB OBJECT MEIN USSI CLASS KA EK OBJECT PAAS KRTE H TOH USKO BOLTE HAI COPY CONSTRUCTOR
// Compiler apni taraf se ek defaukt copy constructor bhi banata h 
// COMPILER APNI TARAF SE MAXIMUM 2 CONSTRUCTOR BANATA H 
 #include <iostream>
using namespace std;
class complex
{
    // by default private
    // usually member variables ko private hi rakhenge
    private:
     int a;   // property names
     int b;


    public :
      
       complex()
       {}


//  COPY CONSTRUCTOR
// copy constructor is invoked for newly created object which is initialised with object of same class
   //  complex(complex C)
   // NOTE
    // YHA PE C BHI OBJECT H ISS LIYE ISKE LIYE BHI COPY CONSTRUCTOR CALL HO JAYEGA ISS LIYE KUCH AUR KRNA PADEGA KYUKNI YE INFINITE TIMES CHALEGA TOH ERROR 
    // ISS LIYE OBJECT MAT BANAO USKA REFERENCE DE DO
     complex( complex &C)` 
   {
     //a=c1.a;     aise nhi likh skte kyunki c1 main function mein bana h
      // a variable c4 ka h
      a=C.a;
    b=C.b; 

   }
    

     complex(int x,int y)
    {
       a=0;
       b=0;
        cout<<"Hello"<<endl;
    }
     

    void setData(int x,int y) 
     {
       a=x;
       b=y;
    }



void showData()
 {
    cout<<"Real"<<a<<" "<<"Imaginary"<<b;

 }
 };


  int main()
  {
    complex c1(8,9),c2(4),c3(1,7);  // constructor ko arguemnts aise hi dete  h
    complex c4=c1;  //  YE HAI COPY Constructor\
    // YHA c1 as an arguement paas hota h
   
    c1.setData(3,4) ; 
   
      c2.setData(5,6);
      
    c1.showData();
    c2.showData();
    c3.showData();
  
    return 0;
  }
