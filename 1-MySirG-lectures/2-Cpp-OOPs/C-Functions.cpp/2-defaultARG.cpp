// ye jaruri nhi ki saare arguements  ki default values ho
// declaration ke time we can set deafult values 
//default arguement ke baad non deafulkt arguement nhi ho skta h



#include <iostream>
using namespace std;
int add(int ,int ,int=0);//  declaration::  ispe z ki default value set kr di h
int add(int ,int =0 ,int); // error h bcz non default arguemnt nhi aa skta default arguement ke baad 
int add(int ,int =0,int=0); //it is correct 
int add(int =0 ,int =0 ,int=0); // ye 4 tarike se call ho skta h arg 0:1:2:3
int main()
{
    int a,b,c;
    cout<<"Enter two numbersv"<<endl;
    cin>>a>>b;
    cout<<"Sum is  "<<add(a,b)<<endl;//ispe z ki value 0 maan li jayegi kyunki default value set h
      cout<<"Sum is  "<<add(a,b,c); // z ki value di toh shi h warna default value paas ho jayegi
       cout<<"Sum is  "<<add(a,b,c,d ); // ispe error aayega kyunki 3 hi values declare ki h
    cout<<endl;
    return 0;

}
 int add(int x,int y,int z)
 {
    return x+y;
 }