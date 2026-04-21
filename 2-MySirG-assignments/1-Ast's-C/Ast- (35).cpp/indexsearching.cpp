#include <iostream>
using namespace std;
int main()
{ int i,si,ei,index,c=0;
    string str;
    cout<<"enter the string "<<endl;
    getline(cin, str);
    cout<<"Enter the starting and ending index"<<endl;
    cin>>si>>ei;
    char ch;
    cout<<"Enter the character to be found"<<endl;
    cin>>ch;
    for(i=si;i<=ei,str[i];i++)
    {
        if(str[i]==ch)
        {
        index==i;
        c++;
         }
    }
             if(c>0)
  cout<<"The character  is found at position " <<index<<endl;
  else
  cout<<"The character  is  not found so -1" <<endl;

   
    return 0;
}