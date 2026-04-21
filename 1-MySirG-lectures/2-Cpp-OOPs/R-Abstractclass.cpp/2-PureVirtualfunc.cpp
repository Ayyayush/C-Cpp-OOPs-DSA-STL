Pure virtual function :=
A do nothing function is called pure virtual function
Pure virtual function is also known as abstract method
follows late binding as virtual function
it is undefined therefore pure
eg 
virtual return type function name(args)=0;        // instead of {..} assignment laga ke 0 kr rhe h




NEED :?
ABSTRACT CLASS := ye samajhna hoga pehle 
Hum abstract classs ka object nhu bana skte but child classs derive kr skte h 
Par usme bhi p.v.f inherit hoga SO???
TO USE abstract class 
1> ya toh hume p.v.f ko override krna hoga
2? ya toh hume p.v.f ko firr se declare krna hoga  as a p.v.f 




#inlcude <bits/stdc++.h>
using namespace std;

class Test
{
    private:
    int a,b;

    public:
    virtual void f1()=0;         // ye h pure virtual function 
    // koi coding nhi koi definition nhi 
    // 0 khi store nhi ho rha bas wo syntax h 

    void f2()
    {
        cout<<"f2";
    }
};

class DummyTest::public Test
{
// isme bhi p.v.f inherit hoke aa gya h BUT
public :
void f1()          // p..v.f ko override kr rhe h 
{
    cout<<"Overrdien fucntion ";
}
};

int main()
{
    Test obj;         // ye rror dega kyunki jis class mein p.v.f  ho uska object nhi ban skta 
    // object nhi banan skte toh user 1 nhi ho skta 

}
