#include <iostream>
using namespace std;
int main()
{
    int root1 ,root2;
    cin>>root1>>root2;
    if(root1>0 && root2>0 && root1!=root2 )
    {
        cout<<"Roots are real and distinct "<<endl;
    }
   else  if(root1>0 && root2>0 && root1==root2 )
    {
        cout<<"Roots are real annd equal "<<endl;
    }
   else if(root1<0 && root2<0 )
    {
        cout<<"Roots are imaginary "<<endl;
    }
    else
    {
        cout<<" No Roots "<<endl;
    }
   

   

    
    return 0;
}
