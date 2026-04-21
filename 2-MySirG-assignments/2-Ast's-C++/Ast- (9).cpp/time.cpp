#include <iostream>
using namespace std;
class Time
{
    int h;
    int m;
    int s;


     public :
     void SetTime()
     {
        cout<<"Enter the input for the time"<<endl;
        cin>>h>>m>>s;
     }
      void DisplayTime()
      {
        cout<<"The time alloted is "<<h<<" hours , "<<m<<" minutes and "<<s<<"seconds " <<endl;
      }
      void normalize()
      {
        m+=s/60;
        s%=60;
        h+=m/60;
        m%=60;
      }
      bool is_greater(Time t)
      {
        if(h>t.h)
        return true;
        else if(h<t.h)
        return false;
        else if(m>t.m)
        return true;
         else if(s>t.s)
        return true;
        else if(s<t.s)
        return false;
      }

}; // class definition ke baad ye lagta h
int main()
{
Time t1,t2;
t1.SetTime();
t1.DisplayTime();
t1.normalize();
t2.is_greater(t1);
return 0;
}