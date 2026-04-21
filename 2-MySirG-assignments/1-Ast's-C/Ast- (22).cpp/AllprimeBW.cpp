#include <iostream>
using namespace std;
int allprime(int n,int m)
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
    ;
}

int main()
{ 
int a,b,Aprime;
cout<<"Enter the range"<<endl;
cin>>a>>b;
Aprime=allprime();
return 0;
}