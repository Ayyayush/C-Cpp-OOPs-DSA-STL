#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
       
string str,word;
char ch=' ';
	int i,j,length=0,c=0,d=0;
	
	cout<<"Enter the string:"<<endl;
	getline(cin ,str);
   int l1=str.size();
	cout<<"Enter the word to be found"<<endl;
     getline(cin,word);
     int l2=word.size();
     
   for(int i=0;i<=(l1-l2),str[i];i++) 
   {
        for(j=0;j<l2;j++)
        {
          if(str[i+j]!=word[j])
          {
            break;
          }
        }
        if(j==l2)
       c++;
     }  
     if(c>0)
  cout<<"The word is found "<<endl;
  else
  cout<<"The word is not found "<<endl;
	return 0;
}
