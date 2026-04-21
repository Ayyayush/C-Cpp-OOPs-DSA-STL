#include <iostream>
using namespace std;

void add(int,int);
//void simpleinterest(int p, int q,int r);

int main()
{
    int x=3,y=4;
    add(x,y); // ye hai actual arguement
   // simpleinterest();
    return 0;
}

// parentheisis empty nhi hoga
void add(int a, int b) // ye hai formal arguement
{   
    // dobara values declare nhi krna int a,b
    int sum;
   sum = a + b; //yaha pe take kar rha hai;
    cout << sum << endl;
}
// sbhi values ke liye alag alag datatype likhna padega
