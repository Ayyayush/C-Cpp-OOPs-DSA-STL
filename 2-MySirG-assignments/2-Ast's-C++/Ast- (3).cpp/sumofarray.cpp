#include <iostream>
using namespace std;
void sum()
{ 
    int i,sum=0;
    int array[5];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<5;i++)
    {
    cin>>array[i];
    sum=sum+array[i];
    }
    cout<<"The sum of array elements is "<<sum<<endl;
  
}
 int main()
 {
    sum();
    return 0;
 }