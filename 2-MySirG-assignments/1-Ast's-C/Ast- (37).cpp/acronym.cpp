#include <iostream>
using namespace std;
 int countwords(string str)
 {
  int i,l,c=0;
  l=str.size();
  
  for(i=0;i<l;i++)
  {
    if(str[i]==' ')
    c++;
   }
  return c+1;
   
   }

int main()
{
     int i,j;
     char ch=' ';
     char k,words;
    string name;
    cout<<"Enter the string "<<endl;
    getline(cin , name);
    int l=name.size();
     words=countwords(name);
    for(i=0;i<l,name[i];i++)
    {
       for(j=1;j<words;j++)
       {
        if(name[i]==ch)
        {
             cout<<name[0]<<" ";
        k=name[i+1];
        cout<<k<<" ";
        }
        
    }
    

    }
    return 0;

}