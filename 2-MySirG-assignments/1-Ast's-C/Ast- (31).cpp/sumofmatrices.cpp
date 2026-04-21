#include <iostream>
using namespace std;
int main()
{
    int a[3][3] ;
    int b[3][3];
    int c[3][3];
    int i,j;
      int sizeA=9,sizeB=9,temp=0;

    cout<<"Enter the elements of array"<<endl;
     for ( i = 0; i < 3; i++) 
 for (j = 0; j < 3; j++)
    cin>>a[i][j];
 
   
    cout<<"Enter the elements of the second array"<<endl;
     for ( i = 0; i < 3; i++)  
 for (j = 0; j < 3; j++)
      cin>>b[i][j];
 
  
  for ( i = 0; i < 3; i++)   
 for (j = 0; j < 3; j++)
       c[i][j]=a[i][j]+b[i][j];
 
    
  for ( i = 0; i < 3; i++)   
 for (j = 0; j < 3; j++)
      cout<<c[i][j]<<" ";

     return 0;
}
 