/*
FORMAL ARGUEMNTS types :=
*Ordinary variables
*Pointer variables
*Reference Variables     .....// this is speciality of c++ language
*/


#include <iostream>
using namespace std;
// formal arguements is necessary for understanding evolution of programming languages
int main()
{
    int a,b,c;
    cout<<"Enter two numbersv"<<endl;
    cin>>a>>b;
    cout<<"Sum is  "<<add(a,b)<<endl;//ispe z ki value 0 maan li jayegi kyunki default value set h
      cout<<"Sum is  "<<add(a,b,c); // z ki value di toh shi h warna default value paas ho jayegi
    cout<<endl;
    return 0;

}
 int add(int x,int y,int z)
 {
    return x+y;
 }