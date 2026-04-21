#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter size"<<endl;
    int size;
    int array[size];
   
    int sum=0,avg=0;
  
    for(int i=0;i<size;i++)
    {
         cout<<"Enter array elements"<< " ";
        cin>>i;
        sum=sum+array[i];
        avg=sum/size;
       
    }
     cout<<sum<<endl;
     cout<<avg<<endl;
    return 0;
}