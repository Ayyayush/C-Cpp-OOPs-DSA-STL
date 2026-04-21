#include <iostream>
using namespace std;
int fact(int);
int q2(int, int);
void q3();
void q4();
void q5();
int factor = 1, n, i;
int main()
{
   int a, b, factorial;
   cout << "Enter the input" << endl;
   cin >> a >> b;
   factorial = fact(a);
   {
      cout << "Factorial is " << factor << endl;
   }
   fact(a);
   q2(a, b);
}

int fact(int n)
{

   for (i = n; i >= 1; i--)
   {
      factor = factor * i;
   }

   return factor;
}



int comb(int n, int r)
{

   return fact(n) / fact(n - r) / fact(r);
}



int perm(int n, int r)

{
   return fact(n) / fact(n - r);
}



int digit(int num, int dig)
{
   while (num)
   {
      if (num % 10 == dig)
         return 1;
      num = num / 10;
   }
   return 0;
}


void primefactor(int num)
{
int i=2;
while(n>1)
{
   while(n%i==0)
   {
      cout<<i;
      n=n/i;
   }
   i++;
}
}