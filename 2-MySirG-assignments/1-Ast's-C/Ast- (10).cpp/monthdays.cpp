#include <iostream>
using namespace std;
int main()
{
    int month;
    cin>>month;
   
   if(month==31)
   {
    cout<<"Jan "<<endl<<"March "<<endl<<"May "<<endl<<"July "<<endl<<"August "<<endl<<"October "<<endl<<"December "<<endl;
   }
   else if(month==30){
    cout<<"April "<<endl<<"June "<<endl<<"September "<<endl<<"November "<<endl;  
   }
   else{
    cout<<"February"<<endl;
   }
   return 0;
    
}