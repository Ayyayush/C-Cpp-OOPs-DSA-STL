#include <iostream>
using namespace std;
class complex
{
    private:
     int a;   // property names
     int b;
     int c;


    public :

    //DESTRUCTOR 
    //YE CALL KAB HOTA H ? JAB OBJECT KHTM HONE WALA HOTANH USSE JUST PEHLE
    // OBJECT KI ZINDAGI MEIN SABSE PEHLE CONSTRUCTOR CALL HOTA H SABSE AAKHIR MEIN DESTRUCTOR
    // OBJECT KI MEMORY RELEASE HONE SE kJUST PEHLE HI CALL HOTA H
    // YE OBJECT KE KHTM HONE KA REASON NHI HOTA H.....IT DOESN'T DESTROY THE OBJECT 
    // ye unn kaamo ke liye h Jo object ke chalte ho nhi pate par uske khtm hone se pehle ho hi jaane chahiye
    // CONSTRUCTOR AUR DESTRUCTOR BINA CALL KIYE BHI CHALENGE HI CHALENGE
    // KBHI KBHI OBJECT KO JO MEMORY MILI HOTI H WO RELASE KRNI PADTI JO USKE MARNE KE BAAD TO HO HI NHI SAKTA ISLIYE DESTRUCOR KA USE HOTA H
    // ISKI IMPORTANCE MEMORY LEAK SE SAMAJH AATI H
    // AGAR HUMNE DESTRUCTOR NHI BANAYA TOH COMPILER IMPLICIT DESTRUCTOR BANA DETA H
    // POINTER USE HONE PE MEMORY LEAK KA KHATRA BAN SKTA H THEREFORE ::-
    // HUM MEMORY RELEASE FUNCTION BANA KE BHI KR SKTE H PAR USSE HO SKATA H JAB USE HO USSE PEHLE HI MOEMORY RELEASE KR DE WO
    // YA HO SKTA H DOUBLE FREE KR DE
    // ISLIYE DESTRUCTOR BECOMES THE IDEAL CHOICE ESPECIALLY INCASE OF POINTERS
    // DATA STRUCTURE MEIN DESTRUCOTR KA BHOT USE PADTA H

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
