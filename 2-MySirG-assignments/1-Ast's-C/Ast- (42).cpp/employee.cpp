#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
struct employee 
{
    string name;
    int age;
   float salary;
    
};



 struct  employee inputE()
 {   
    struct employee e;
    cout<<"Enter the details"<<endl;
    cin.ignore();
   getline(cin , e.name);
   e.name[e.name.size()-1]='\0';
   cout<<"Enter the age"<<endl;
   cin>>e.age;
   cout<<"Enter the salary"<<endl;
   cin>>e.salary;
   return e;
}


 void displayE( struct employee e)
 {
cout<<endl;
cout<<"The name of the employee is "<<e.name<<" "<<endl;
 cout<<"The age of employee is "<<e.age<<" "<<endl;
 cout<<"The salary of employee is "<<e.salary<<" "<<endl;
  }

struct employee highestSalaryE(struct employee e[], int n)
{
    struct employee maxsalaryE;
    int i;
    maxsalaryE=e[0];
    for(i=1;i<=n-1;i++)
    {
        if(maxsalaryE.salary<e[i].salary)
        maxsalaryE=e[i];
    }
    return maxsalaryE;
} 

void sortbysalary( struct employee e[],int n)
{   int r,i;
struct employee temp;
for(r=1;r<n;r++)
{
    for(i=0;i<=n-1-r;i++)
    {
        if(e[i].salary>e[i+1].salary)
        {
            temp=e[i];
            e[i]=e[i+1];
            e[i+1]=temp;
        }
    }
}

}
void sortbyname( struct employee e[],int n)
{
  int r,i;
struct employee temp;
for(r=1;r<n;r++)
{
    for(i=0;i<=n-1-r;i++)
    {
        if(strcmp(e[i].name,e[i+1].name))
        {
            temp=e[i];
            e[i]=e[i+1];
            e[i+1]=temp;
        }
    }
}

}

int main()
{
    struct employee e1;
    inputE();
    displayE(e1);
     return 0;

}




 

