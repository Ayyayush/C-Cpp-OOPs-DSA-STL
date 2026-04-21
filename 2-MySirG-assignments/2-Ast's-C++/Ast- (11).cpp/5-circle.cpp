#include <iostream>
using namespace std;
class Circle
{
     int radius;
     double pi=3.14;

     public :

     void Setradius()
     {
        cout<<"Enter the input for the time"<<endl;
        cin>>radius;
     }
     
     
     void area()
      {
        double area=pi*radius*radius;
        cout<<"The area of the circle "<<endl;
      }


      void circum()
      {
        double circumference=2*pi*radius;
        cout<<"The circumference of the circle is "<<circumference<<endl;
      }


}; // class definition ke baad ye lagta h
int main()
{
    Circle c;
    c.Setradius();
    c.area();
    c.circum();
    
    return 0;
}