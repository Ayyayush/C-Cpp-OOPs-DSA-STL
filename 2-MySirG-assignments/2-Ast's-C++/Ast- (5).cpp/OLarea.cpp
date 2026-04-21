#include <iostream>
# include <bits/stdc++.h>
using namespace std;

 float area(float l,float b)
 {
    return l*b;

 }
  float area (float r)
  {
    return 3.14*r*r;
  }
   float area (int a,int b,int c)
   {
       int area,s;
       s=(a+b+c)/2;
       area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
   }
int main()
{
 float p,q,a;
 cout<<"Enter the input"<<endl;
 cin>>p; 
 a=area(p);
 cout<<"The area of is "<<a;
 return 0;
}