#include <iostream>
using namespace std;
struct students[10]
{
   string name;
    int age;
}


 struct student input()
 {
    struct student[] s;
    cout<<"Enter the name and age of the students"<<endl;
    getline(cin, s.name);
    cin>>s.age;
    return s;
 }


  void display(struct student s[])
  {
     int i;
  for(i=0;i<10;i++)
  {
    cout<<"The name of the student is "<<s.name<<endl;
    cout<<"The age of the student is "<<s.student<<endl;
  }
  }
int main()
{
    struct student s1;
    

}