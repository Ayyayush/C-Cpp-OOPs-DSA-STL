#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b)      // a aur b special variable kyunki ye address store kr rhe h 
{
    int *c;        // kyunki c ko special variable ki values rakhne ke liye use karenge isko bhi special banana padega 
    c=a;
    a=b;
    b=c;
cout<<*a<<" "<<*b<<endl;
}



// we can do it like this also 

void swapgood(int *a,int *b)      // a aur b special variable kyunki ye address store kr rhe h 
{
    int c;        // kyunki c ko special variable ki values rakhne ke liye use karenge isko bhi special banana padega 
    c=*a;
    *a=*b;
    *b=c;
cout<<*a<<" "<<*b<<endl;
}




void swapbetter(int *a, int *b) {
    // Dereferencing the pointers to swap the values
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout << *a << " " << *b << endl;  // Output the swapped values
}


int main()
{
    int a,b;
    cin>>a>>b;
    swap(&a,&b);
    return 0;
}

