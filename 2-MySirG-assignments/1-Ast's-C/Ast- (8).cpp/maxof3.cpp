#include <iostream>
using namespace std;
int main()
{
    
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"all are equal "<< b<<endl;
    }
  else  if(a>b && a>c){
        cout<<" a is greater "<<endl;
    }
    else if(b>a && b>c){
        cout<<"b is greater "<<endl;
    }
   
    else {
        cout<<"c is greater "<<endl;
    }
    
   
    return 0;
}
