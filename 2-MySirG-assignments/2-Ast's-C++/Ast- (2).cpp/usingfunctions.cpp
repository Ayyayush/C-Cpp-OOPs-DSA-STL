#include <iostream>
using namespace std;
void hello()
{
    cout<<"My name is Ayush"<<endl;
}
void sum()
{
    int a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>a>>b;
    int sum=a+b;
    cout<<"Sum of the numbers is "<<sum<<endl;
   
}
void area()
{
    double pi=3.14,area,radius;
    cout<<"Enter the radius"<<endl;
    cin>>radius;
    area=pi*radius*radius;
    cout<<"Area of the circle is "<<area<<endl;
}
void cuboid()
{
    float area, l,b,h;
    cout<<"Enter the dimensions"<<endl;
    cin>>l>>b>>h;
    area=l*b*h;
    cout<<"The area of the cuboid is "<<area<<endl;

}
int main()
{
hello();
sum();
area();
cuboid();
return 0;
}