#include<iostream>
#include<list>
#include<vector>
#include <forward_list>
#include<string>
#include<algorithm>
using namespace std;
             
void m1()
{
      // 1.erasing first element just greateer than the given number 
    forward_list <int> fl1={10,55,43,-23,57,18,23,0,5};
    int num;
    cin>>num;
    
    // remove function ko iterator nhi value chahiye hoti hai 
    fl1.remove(*upper_bound(fl1.begin(),fl1.end(),num));               //upper bound given range mein given number se just greater number find outkrta hai 
    for(auto x: fl1)
        cout<<x<<" ";
    cout<<endl;

}

void m2()
{
//2. // Pehle sort karenge jisse given number  se jo number just bada h pure list mein wo remove hoga   
 forward_list <int> fl1={10,55,43,-23,57,18,23,0,5};
    int num;
    cin>>num;
   

    fl1.sort();                            
     fl1.remove(*upper_bound(fl1.begin(),fl1.end(),num));               //upper bound given range mein given number se just greater number find outkrta hai 
    for(auto x: fl1)
        cout<<x<<" ";
    cout<<endl;

}

int main()
{
    m1();
    m2();
    return 0;
}