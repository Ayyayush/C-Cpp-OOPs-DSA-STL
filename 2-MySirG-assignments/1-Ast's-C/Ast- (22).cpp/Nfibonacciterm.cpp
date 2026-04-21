#include <iostream>
using namespace std;
int fibo(int n)
{
     int a, b, c;
    for (a = -1, b = 1; n; n--)
    {
        c = a + b;
        
        a = b;
        b = c;
      //  c = a + b;
       cout << c << " ";
    }
    //last term print hoga
   

return 0;
}


int main()
{ 
int a,fibonacci;
cout<<"Enter the number of terms"<<endl;
cin>>a;
fibonacci=fibo(a);

return 0;
}