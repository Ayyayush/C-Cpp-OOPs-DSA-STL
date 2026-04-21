#include <iostream>
using namespace std;
 
int main()
{
        //Initializing variable.
	char str[30];
    char ch;
	int i,length=0,c=0,d=0;
	//Accepting input.
	cout<<"Enter the string:"<<endl;
	gets(str);
	//Initializing for loop.
	for(i=0;str[i]!='\0';++i)
	{
	length++;//Counting the length.
	}
	
	cout<<"Length of the string is:"<<length<<endl;


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
  cout<<"The character occurs " <<c<<" times and is last found at position " <<d<<endl;
  else
  cout<<"The character  is  not found" <<endl;
	return 0;
}
