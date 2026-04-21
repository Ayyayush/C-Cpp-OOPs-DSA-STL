#include <iostream>
using namespace std;
int main()
{
     int marks;
     cout<<"Enter marks"<<endl;
        cin>>marks;
       
    switch (marks)
    {
        // three dots use kr skte h par space hona chahiye dots ke pehle aur baad mein
        case 90 ... 100: //cannot write variable in case 
            cout<<"Grade A"<<endl;
        
        break;
        
        case 80 ... 89:
            cout<<"Grade B"<<endl;
        
        break;
        
        case 70 ... 79:
            cout<<"Grade C"<<endl;
        
        break;
        
        case 60 ... 69:
            cout<<"Grade D"<<endl;
        
        break;
        
        case 50 ... 59:
            cout<<"Grade E"<<endl;
        
        break;
        
        case 0 ... 49:
            cout<<"Grade F"<<endl;
        
        break;
        
        
    default :
    cout<<"Invalid case"<<endl;
    
    }
    cout<<"Achieved";
    return 0;
}