#include <iostream>
using namespace std;
float area(int);



int main()
{
    int radius,circarea;
    cout<<"Enter the radius"<<endl;
    cin>>radius;
circarea= area(radius);
cout<<"Area of the Circle is "<<circarea<<endl;
return 0;
}



//take something
float area(int r)
{
    
   
    float pi=3.14,area=0;
    area=pi*r*r;
   
    return area;  

}