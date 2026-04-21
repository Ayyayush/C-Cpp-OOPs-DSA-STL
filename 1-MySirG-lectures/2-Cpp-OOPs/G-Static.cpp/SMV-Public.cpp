#include <iostream>
using namespace std;
class item
{
public:         // bahar se access hoga
  int a, b;     //  instance memeber variables
  static int k; // static keyword lagane se static member variable
                // static hai toh instance nhi ho skta instance hai toh static nhi ho skta
};

// defining static member variable outside class it is a rule
int item ::k;           // isme by degfault 0 jayega chahe toh kuch assign bhi kr skte h 
// ye bnane ke baad i1.k mein error nhi aayega
// ye jab tak class rahega tbtak rahenge 

int main()
{
  cout << a << " " << b;
  ... // error kyunki a aur b exist nhi krte kyunki object nhi bana abtak

      item i1,i2;

  cout << i1.a << " " << i1.b; // by degault garbage value aayegi
  // dot krke a aur b ko isliye access kr rhe kyunki yha pe humcclass ke bahar h aur class ke member ko object ke through hi access kr skte h
  //   cout<<i1.k<<endl; // yha pe abhi bhi error aayegi kyunki k variable abhi bana hi nhi h ....static variable ko object se kuch lena dena nhi naahi object ke andar memory milti h
  // agar pichli line ko hata de toh koi error nhi kyunki k ko exist karane ki koshish hi nhi kr rhe
  i1.a = 5;
  cout << i1.a << endl;
  cout << i2.a << endl; // yaha pe abhi bhi garbage value hi aayegi kyunki ye wala a i2 ka h

  // cout<<k ...// error aise directly access nhi kr skte class ke member ko
  cout << i1.k << endl;
  .....         // error kyunki k variable abhi bana hi nhi h isko object ke banne na banne se koi mtlb nhi h aur maan ke chal rhe h ki int item ::k; abhi nhi bnaya h 
                //  agar k ko object se lena dena nhi h toh i.k or i2.k  likh ke kaise access kar pa rhe h ?
                // ans ::= bcz static member varaible are known as class variable aur class mein bane har chiz ko access kr skte h object na bana ho to bhi
                // i1,i2 ussi class ka object h jiska k member variable h isliye access kr pa rha h ...
                // static memeber ko class ke andar likhna sufficient nhi h
                // isko class mein declare krke class ke bahar membership variable se define krna padta h
      i2.k = 6; // aise access mein confusion ho rhi h ki instance memeber variable access ho rha h ya static
  // so aise access karenge
  // k ka object se lena dena nhi so i1.k aur i2.k ek hi chiz h
  item::k = 6;
  cout << i1.k << endl; // iski value 6 hi hogi kyunki ek baar hi bana h k aur sarvajanki h toh sab access kr lenge
  cout<<i2.k<<endl;      // ye s.m.v h toh object se lena dena h nhi toh yha bhi 6 hi print hoga 

  // object bana hi na ho toh i1.k or i2.k likh ke k ko call ya value assign nhi kr payenge
  // par phir bhi class name ke through access kr skte h aur value assign bhi kr skte h 
  item::k=25; // aise kr skte h
  cout<<"k="<<item::k<<endl;


  // intance variable ko class ke name ke through access nhi kr skte h kyunki pata hi nhi chalega kis object ke liye h 
  cout << endl;
  return 0;
}