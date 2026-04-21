#include <iostream>

using namespace std;
 
void allprime(int n,int m)
{
    int i, j,L;
    
    L=n>m?n:m;
    int S=n<m?n:m;
    for (int j = S; j <= L; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }

        if (j == i)

            cout << "Prime No " << j << endl;

        
    }

    cout << endl;
    
}
 int fib(int n)
  {
    int a=-1,b=1,c;
    while(n+1)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
  }
  void printfib(int n)
  {
    int i;
    for(i=0;i<=n;i++)
    {
        cout<<fib(i)<<endl;
    }
  }


void printpascal(int rows )
{
    int i,j,k;
    cout<<"Printing the pattern"<<endl;
    for(i=1;i<=rows;i++)
    {
        k=1;
        for(j=1;j<=2*rows-1;j++)
    {
        if(j>=rows+1-i && j<=rows-1+i && k )
        {
            cout<<"*";
            k=0;
        }
        else
        {
            cout<<" ";
            k=1;
        }
    }
    cout<<endl;
    }
    cout<<endl;
   }


 int main()
 {
  printpascal(10);
  cout<<endl;
  return 0; }