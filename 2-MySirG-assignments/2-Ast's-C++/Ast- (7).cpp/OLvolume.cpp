#include <iostream>
using namespace std;

 void volume(float r,float h)
 {
    int vol=(3.14*r*r*h)/3;
    cout<<"The vol of the cone is "<<vol<<endl;
 }

 int volume(float r)
 {
double vol=(4*3.14*r*r*r)/3;
cout<<"The volume of sphere is "<<vol<<endl;
return 0;

 }
 void volume(float l,float b,float h)
 {
    double vol=l*b*h;
    cout<<"The volume of the cuboid "<<vol<<endl;
 }

int main()
{
    float a,b;
    cout<<"Enter the inputs"<<endl;
    cin>>a>>b;
    volume(a);
    return 0;

}