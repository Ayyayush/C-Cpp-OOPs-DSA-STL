#include <iostream>
using namespace std;
int main()
{
    int array[]={1,2,5,4,53,6,7,8,9,1};
    int sum=0;
    int max=array[0];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
        if(array[i]>max)
        {
max=array[i];
        }
        
       
    }
     cout<<"Max elt is "<<max<<endl;
    return 0;
}