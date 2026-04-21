#include <iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cin>>n;
    for( int i=n;i>=1;i--)
    {
        fact=fact*i;
    }

    /*
      while(n)
    {
        fact=fact*n;
        n--;
    }
  */
    cout<<"Factorial is "<<fact<<endl;
    return 0;
}