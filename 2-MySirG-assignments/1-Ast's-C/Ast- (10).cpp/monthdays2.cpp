#include <iostream>
using namespace std;
int main()
{
    int month;
    cin>>month;
    if(month>12 || month<1)
    {
        cout<<"Invalid month"<<endl;
    }
        else if(month==1 || month==3|| month==5|| month==7 || month==8|| month==10 || month==12)
        {
        cout<<"31 DAYS"<<endl;
        }
        else if(month==2)
        {
            cout<<" 28 or 29 DAYS"<<endl;
        }
        else if(month==4 || month==6 || month==8 || month==10)
        {
            cout<<"30 DAYS"<<endl;
        }
        else
        {
            cout<<"Invalid month"<<endl;
        
        }
        return 0;
    }
