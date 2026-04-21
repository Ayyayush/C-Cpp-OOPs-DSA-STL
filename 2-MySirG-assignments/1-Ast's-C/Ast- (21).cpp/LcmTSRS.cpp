#include <iostream>
using namespace std;

 int lcm(int , int);
int lcm(int a ,int b)
{
   
    int i,j ,L;
   

        for(L=a>b?a:b;L<=a*b;L++)
        {
        if(L%a==0 && L%b==0)
        {
           break; }
        }
        
    
 
        return  L;
}


int main()
{
     int x,y,leactcm;
     cout<<"Enter the numbers for lcm"<<endl;
     cin>>x>>y;

    leactcm= lcm(x,y);
    cout<<"Lcm is "<<leactcm<<endl;
return 0;
}