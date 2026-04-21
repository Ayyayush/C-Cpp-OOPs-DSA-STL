#include <iostream>
using namespace std;
 
int main()
{
     
	char str[30],V[]="aeiouAEIOU";
	int i,k,length=0,c=0;

	cout<<"Enter the string:"<<endl;
	gets(str);
	//Initializing for loop.
	for(i=0;str[i]!='\0';++i)
	{
	length++;//Counting the length.
	}
	
	cout<<"Length of the string is:"<<length<<endl;
    for(i=0;i<=length;i++)
    
        for(k=0;V[k];k++)
        
            if(str[i]==V[k])
            c++;
        cout<<"The number of vowels is " <<c<<endl;
	return 0;
}
