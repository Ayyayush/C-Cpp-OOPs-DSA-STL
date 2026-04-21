#include <iostream>
using namespace std;
int main()
{
    int i;
     char ch=' ';
     char k;
    string name;
    cout<<"Enter the string "<<endl;
    getline(cin , name);
    int l=name.size();
        if(name[0]>='a' && name[0]<='z')
    
           name[0]=name[0]-32;
     
    for(i=0;i<l,name[i];i++)
    {
       
        if(name[i]==ch)
        {
           if(name[i+1]>='a' && name[i+1] <='z') 
           {
       name[i+1]=name[i+1]-32;
       
        }
    }
    }
    cout<<name<<endl;
    return 0;
 
}