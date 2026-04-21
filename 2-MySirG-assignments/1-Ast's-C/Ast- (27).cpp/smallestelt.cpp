#include <iostream>
using namespace std;
int main()
{
    int array[]={1,2,5,4,53,6,7,8,9,1};
    int sum=0;
    int min=array[0];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
        if(array[i]<min)
        {
min=array[i];
        }
        
       
    }
     cout<<"Min elt is "<<min<<endl;
    return 0;
}