#include <iostream>
using namespace std;
void swap(int *,int *);
void swap(int *p,int *q)
// yha pe ye formal arguement : ordinary variable h ya pointer variable ispe depend karega ki call by value h ya call by refernce
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    // koi function dsure fnction ke variable ko naam se access nhi kr skta
}
 int main()
 {
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    swap(&a,&b); // isko across function access krwane ke liye
    // isko call by refernce ya call by address accordingly  bolenge
    cout<<"The swapped numbers are"<<a<<" "<<b<<endl;
    return 0;
 }