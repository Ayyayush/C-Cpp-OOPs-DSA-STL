#include <iostream>
using namespace std;
int netxprime(int n)
{
    int  i, dig = 0;
   
    
    for(n++;;n++)
    {
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            break;//ye iss for loop se bahar le jayega
        }
    }
//jab i ki value n-1 se jyada hui tab loop se bahar aaye....ab check karo i ki jo last value hui
        if (i ==n )
        {
        return n;
          break;//ye pehle for loop se bahar le jayega
        }
        
        }
      
   
}

 int main()
 {
    int a,Nxt;
    cout<<"Enter the number"<<endl;
    cin>>a;
    Nxt=netxprime(a);
    cout<<"Next prime number is "<<Nxt<<endl;
    return 0;
 }