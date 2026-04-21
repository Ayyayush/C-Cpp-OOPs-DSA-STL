#include <iostream>
using namespace std;
 
int main()
{
       
	char str[30];
    char ch;
	int i,length=0,c=0,d=0;
	
	cout<<"Enter the string:"<<endl;
	gets(str);
	   cout<<"Enter the character to be found"<<endl;
     cin>>ch;
   for(int i=0;str[i];i++)
   {
    if(str[i]== ch)
    {
        c++;
        d=i; 
     }
   }
     if(c>0)
  cout<<"The character  is found at position " <<d<<endl;
  else
  cout<<"The character  is  not found so -1" <<endl;
	return 0;
}
