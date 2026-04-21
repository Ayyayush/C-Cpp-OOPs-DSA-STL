#include <iostream>
using namespace std;
int main()
{
    int array[10] ;
    cout<<"Enter the elements of array"<<endl;
    int i,size,temp=0;
    for (int i = 0; i < 10; i++)
    cin>>array[i];
    int a[15];

    for (int i = 0; i <10; i++)

    {
         temp=a[i];
    a[i]=temp;

       }

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}