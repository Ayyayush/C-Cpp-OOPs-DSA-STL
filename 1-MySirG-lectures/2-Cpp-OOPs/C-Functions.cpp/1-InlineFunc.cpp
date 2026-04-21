/*
function tabhjji time bachata h jaqb wo kisi bade code ke liye use ho rha h 


DISADVANTAGE OF MAKING FUNCTION
nuksaan h samay ka function banane meiin jo runtime mein lagta h
kyunki pehla function kaha tak chala h usko preserve krmna padta h 
firr koi dsura function ho toh wo chaalega
firr jab pehla function firr se chalega toh wo wo status resume hoga
iss tarah function banane se internally extra kaam hota h
So fuinction banane se space bachta h par time extra lagta h aur ye hamesha inversioanlly propotionalk hi chalte h
thertefore inline function ka use arise hota h


INLINE FUNCTION
USE :+ function ke faayde bhi mile par compilation ke time wo function na rahe
Inline function is expanded in a line when it is invoked
Inline is a request not a command
this request is ignored in some cases eg:= 
*if function has loops,switch or goto
*if functon has recursion
*if it has static variable
compiler compilation ke time pata nhi laga pata ki function kitna space lega
now c and c++ both support inline function


SYNTAX
inline int add(int ,int );
inline int add(int x,int y)
{
return x+y;
}
*/



#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;  // Square calculate kar raha hai
}

int main() {
    cout << square(5) << endl;  // Output: 25
    cout << square(10) << endl; // Output: 100
    return 0;
}
