#include <iostream>
using namespace std;
class Complex
{

  int a;
  int b;

public:
  void setData(int x, int y)
  {
    a = x;
    b = y;
  }

  void showData();
  Complex operator+(Complex)    // operator keyword lagana padega + ko use krne ke liye 
  Complex operator-(Complex)
  Complex operator-()            // ye unary ke liye 
};

void /* membership label*/ Complex ::showData() // member functions
{
  cout << "Real" << a << " " << "Imaginary" << b;
}

Complex Complex::operator+(Complex C)            // 
// symbols ko as a function name use krne ke liye operator keyword likhna padega 
{
  Complex temp;
  temp.a = a + C.a; // c2 ka a access kr rhe h
  tem.b = b + C.b;  // c2 ke b ko access kr rha h
  return temp;
}


Complex Complex::operator -(Complex C)
{
  Complex temp;
  temp.a = a - C.a; // c2 ka a access kr rhe h
  tem.b = b - C.b;  // c2 ke b ko access kr rha h
  return temp;

}


Complex Complex::operator -()
{
  // ye  line 78 ke mliye chal rha h 
  /// c3 mein c12 ka just oppsite jana chhiaye

  Complex temp;
  temp.a=-a;
  temp.b=-b;
}





int main() // ye non member function h
{
  Complex c1, c2, c3;

  c2.setData(5, 6); // iss baar a,b c2 object/instance  ke h
  //c3=c1.add(c2)         // ye purana tareeka h 

  // + naam ka function  likhne ki wajeh se aise likh pa rhe h
  // yani hum + ko overload kr chuke  h to neeche jaisa likh skte h
  // agar + ke dono operands + tyope ke honge toh hi chalega 
  c3 = c1 + c2; // ... c3=c1.operator+(c2);  // ki jagah pe
  c4=c1-c2
  c1.showData();
  c2.showData();



  // overloading unary operator 
  // unary mein left wala caller object nhi hota h 
  // ye normal style mein hi likha jata h 
  // niche wala tareeka abstraction se bhara hua h 
  c4 = -c1; //  c1.operator-();.....jo ye return karega c4 mein assign karega   dot wale tareeke se aise likhenge 
  c3.showData();

  return 0
}
