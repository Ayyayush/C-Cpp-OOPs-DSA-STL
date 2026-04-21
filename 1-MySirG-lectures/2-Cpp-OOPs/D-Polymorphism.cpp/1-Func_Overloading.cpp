/*
Multiple functions ke ek hi naam hote h 
One function name is overloaded with multiple definitions
C language mein function ke names unique hote h
FUNCTION OVERLOPADING IS ALSO KNOWN AS FUNCTION POLYMORPHISM



BINDING
Complie time :: Early Binding
Run time     ::  Late binding


EARLY BINDING
compiler function call ko appropriate defintion ke sath MAP/BIND krta h this is early binding


FUNCTION SIGNATURE
this includes 
Function name
Fqubnction signature

IN C++ funnction call is done by 3 step rule
* Exact match
* Type promotion
* Type Conversion

TYPE PROMOTION
isme function arg ka exact match na milne pe datatype change ho skte  h  jaise 
only these two :-=
char - int 
float - double


TYPE CONVERSION
Data type primitive datatype mein convert honge
NOTE := primitbe dataype hi primitive datatype mein hi convert hoga iss baat ka dhyaan rakho
yani jo bhi datatype ho wo bhi agar primitve type ka hi ho aur  match na hone pe kisi primitive type mein convert hoke match krne ki koshish karega


AMBIGUITY ERROR
error ek bhi match na kare ya 1 se jyada match kar jaye toh error hoti h 
Type conversion mein hota h ambiguity error
agar perimitive wala primitive mein convert kiya par arguement mein 1 se jyada primitive the toh confusion hogi ki kisko call kare
eg := 
void f1(float)
void f2(double)
char x='A;
fi(x);
yha pe char convert hoga par arguemnt mein dono hi primitve h toh ambiguity h 



COUT AND CIN
ye uss class mein define h jiska object cin sur cout h
Par ye har type ke data ko kaise print kar pa rhe aur le rhe h ?
ans:= Arguement jis type ka h binding krte time compiler usko bind karega(mtlb alag funciton bana ke uske arguement ke according ) jo polymorphism ka hi implementation h 


*/

#include <iostream>
using namespace std;
float area(int r)
{
    float a;
   a=3.14*r*r;
   return a;
}
 int area(int l ,int b )
 {
    return l*b;
 }

int main()
{
    int r;
    cout<<"Enter radius of a cicrle "<<endl;
    cin>>r;
    cout<<"Area of circle is "<<area(r)<<endl;
    int l,b;
    cout<<"Enter the length and breadth of rectiangle "<<endl;
    cin>>l>>b;
    cout<<"The area of the rectiangle is "<<area(l,b)<<endl;
    cout<<endl;
    return 0;

}