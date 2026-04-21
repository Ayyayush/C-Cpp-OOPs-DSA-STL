#include <iostream>
using namespace std;
int main()
{
    int array[]={1,2,3,4,5};
    int sumeven=0,oddsum=0;
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++)
    {
      if(array[i]%2==0)
      {
        sumeven=sumeven+array[i];
      }
      else{
        oddsum=oddsum+array[i];
      }
       
       
    }
     cout<<sumeven<<endl;
      cout<<oddsum<<endl;
    return 0;
}