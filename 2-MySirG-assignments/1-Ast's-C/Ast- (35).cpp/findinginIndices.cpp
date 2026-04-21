#include <iostream>
using namespace std;
 
int main()
{
        //Initializing variable.
	char str[50];
    char ch;
	int i,length=0,c=0,d=0,startindex=2,endindex=10;
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
   for(int i=startindex;str[i]&&i<=endindex;i++)
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
