#include <iostream>
using namespace std;
int countdigits(int n)
{
    int count = 0;
    while (n)
    {
        count++;
        n /= 10;
    }
    return count;
}

int power(int x, int y)
{
    int p = 1;
    while (y)
    {
        p = p * x;
        y--;
    }
    return p;
}

void arms(int a, int b)
{
    int x, n,i, y, rem = 0, sum = 0;
    ;
    for (x = (a < b ? a : b) + 1; x < (a> b ? a : b); x++)
    {
        n = countdigits(x);
        for (i = 1, y = x; i <= n; i++)
        {
          
            sum = sum+  power(y % 10, n);
            y = y % 10;
        }
        if (x == sum)
        {
            cout << "Armstrong Number " << i << endl;
        }
        else
        {
            cout << "Not armstrong number" << endl;
        }
    }
}
int main()
{
    int n,m;
    cout<<"Enter the range"<<endl;
   cin>>n>>m;

    arms(n,m);
    return 0;
}
