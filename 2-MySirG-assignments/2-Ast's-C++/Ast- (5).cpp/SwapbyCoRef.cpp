#include <iostream>
using namespace std;
void swap(int & , int &);
 void swap(int &a, int &b)
 {
   a=a+b;
   b=a-b;
   a=a-b;
  cout<<" The swapped values are "<<a<<" "<<b<<endl;
 }
int main()
{
     int p=65,q=54;
     int &x=p, &y=q;  // refernce variable ko banane ke time hi initilaise krna padta h
     cout<<"the values have been initialised "<<endl;
   
     swap(x,y);
     return 0;
}