#include <iostream>
#include <stdlib.h>
#include <stdio.h>
// NO MEMORY WASTAGE
using namespace std;
int main()
{
    // varaible length string
    string str;
    int n,i;
    cout<<"Enter the value of the string  "<<endl;
    getline(cin,str);
    cout<<"Enter the size of the array "<<endl;
    cin>>n;
    int A[n];
    for (i=0;i<n;i++)
    cin>>A[i];

    return 0;
}