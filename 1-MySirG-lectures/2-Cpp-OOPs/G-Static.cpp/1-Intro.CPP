
WE HAVE DEDUCED FOLLOWING TYPES OF VARIABLES IN C AND C++
Global varible ....// C AND C++
Local varaible ....// C AND C++
Static local varaible ....// C AND C++
Intance member Variable ....// C++
Static member variable ....//C++



C++ mein static keyword use ho skta h following places mein

static local variable
static member variable
static member function



STATIC LOCAL VARIABLE
// ye program bante hi ban jate h chahe function call ho ya nhi ...thus lifetime scope
// iski lifetime program ke jitni hoti h 
// eg ::=
// void f1()
// {
// int x;  .....//local varaible
// static int y; .....// static local varaible

// x mein garbage value h by default
// y mein 0 store h by default

// // scope of local and static local variable block ke andar hi limited hoti h 
// }


eg :: se samajhte  h.
#include <bits/stdc++.h>
using namespace std;
void f1();
int main()
{
  f1();    // pehli baar call x=6 y=1
  f1();      // second call   x=6 y=2
  f1();       // third call x=6 y=3
  // to isse hume dikhta h ki x har call pe ban rha aur function end pe  destroy ho rha par  aisa  static ke sath  nhi h 
  // ..static variable tbtak rahega banne ke baad jabtak program 
  return 0;
}

void f1()
{
  int x=5;
  static int y ;    // default value 0 h
  x++;
  y++;
  cout<<x<<" "<<y<<endl;
}



