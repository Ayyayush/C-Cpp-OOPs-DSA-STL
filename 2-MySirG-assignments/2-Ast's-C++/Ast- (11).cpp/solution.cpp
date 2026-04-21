#include<iostream>
#include<string.h>
using namespace std;
class Numbers{
    private:
        int size;
        int *arr;
    public:
        Numbers(int s){
            size=s;
            arr=new int[size];  // dynamically array create kiya aur uska address arr mein pahucha diya
        }
        ~Numbers(){
            delete []arr;
        }

        // deep copy ..jab kbhi object mein pointer hota h toh object jisko point krta h uski copy bnate h

        Numbers(Numbers &n) //  copy constructor....refernce recieve krta h
        {
            size=n.size;
            arr=new int[size]; // naya array ban rha h
            for(int i=0;i<size;i++)
                arr[i]=n.arr[i];
        }
};
class Student{
    private:
        int rollno;
        char name[30];
    public:
        Student(){
            cout<<"Enter rollnumber: ";
            cin>>rollno;
            cout<<"Enter name: ";
            cin.ignore();
            cin.getline(name,30);
        }
        void display(){
            cout<<endl<<rollno<<"  "<<name;
        }

};
class Date{
    private:
        int d,m,y;

         // using initializer
    public:
        Date():d(1),m(1),y(2000)   // bina arguement wala default value ke sath
        {}
        Date(int d,int m,int y):d(d),m(m),y(y)   // bracket ke abdar wala local h bahar wala instance variable h
        {}
};
class Room{
    private:
        int room_no;
        int room_type;
        bool is_AC;
        double price;
    public:
        Room(int rno,int rtype,bool ac, double p)
        {
            room_no=rno;
            room_type=rtype;
            is_AC=ac;
            price=p;
        }
};
class Circle{
    private:
        int radius;
    public:
        Circle()
        {
            radius=1;
        }
        Circle(int r)
        {
            radius=r;
        }
};