#include <iostream>
using namespace std;
int main()
{
    int elt,n,i,f=0;
    cout<<"Enter the number of terms to be printed"<<endl;
    cin>>n;
    cout<<"enter the elt to be searched"<<endl;
    cin>>elt;
    int a=-1,b=1,c;
    for(i=1;i<=n;i++)
    {
    c=a+b;
    a=b;
    b=c;
    cout<<c<<" ";
     
    if(c==elt)
    {
      f++;
    }
   
    }
    cout<<endl;
    
    if (f>0)
    cout<<"Elt found"<<endl;
    else 
    
        cout<<"Elt not found"<<endl;
    
    return 0;

}
