#include <iostream>
#include <array>
using namespace std;
int main()
{
    array <float ,5> f1={5.8,6.5,4.4,6.0,2.8};
    float avg=0,sum1=0,sum2=0,sum3=0;



    for(int i=1;i<=5;i++)
      sum1=sum1+f1[i];
      avg=sum1/5;
   cout<<avg<<endl;


      array<float,4> f2;         // yha pe f2 mein koi value nhi daal rhe toh ye garbage value store kr le rha h 
      for(int i=1;i<=4;i++)
      sum2=sum2+f2[i];
      cout<<sum2<<endl;


       array<float,4> f3;         // yha pe user se input le rhe hai 
      for(int i=1;i<=4;i++)
      cin>>f3[i];
      for(int i=1;i<=4;i++)
      sum3=sum3+f3[i];
      cout<<sum3<<endl;

      array <float,5> f4={5.5,6.6,7.7,8.8,9.9};
      array<float,5>::iterator it;
      for(it=f4.begin();it!=f4.end();it++)
cout<<*it<<" ";

     


    return 0;
}