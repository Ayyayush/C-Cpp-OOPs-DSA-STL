#include <iostream>
using namespace std;
class complex
{
  // by default private
  // usually member variables ko private hi rakhenge
private:
  int a; // property names
  int b;

public:
  // constructor
  //  OBJECT BANANE KE BAAD SABSE PEHLE CONSRUCTOR CALL HOTA H
  // YE KBHI BHI STATIC NHI HOTA H
  // PROGRAMMER HI CONSTRUCTOR KO DEFINE KRTA H
  // CONSTRUCTOR NE OBJECT BNAYA YE BOLNA GALAT H
  // JAB TAK OBJECT REAL VALUES SE INITIALISE NHI HO RHA H TABTAK WO KISI KO REPRESENT NHI KR RHA H
  // OBJECT BANATE HI USME KUCH VALUES RAKH DO (INITIALISE) TAAKI USME GARABAGE VALUES NA RHE
  // makaan jab insaano se initialise hota h Tab WO GHAR KEHLATA H
  // ISI TARAH CONSTRUCTOR OBJECT KO SHI MAAYNE MEIN OBJECT BNATA H USKE MEMBER VARIABLES KO INITIALISE KARKE
  complex()
  {
    // INITILAISATION
    a = 0;
    b = 0;
    cout << "Hello" << endl;
  }

  void setData(int x, int y) // member functions
  // ye instance member function h
  {
    // x aur y local variable h
    a = x;
    b = y;
  }

  void showData()
  {
    cout << "Real" << a << " " << "Imaginary" << b;
  }
  
};

int main() // ye non member function h
{
  complex c1, c2, c3;
  // 3 object ban rhe h toh 3 baar constructor chal chuka hoga

  c1.setData(3, 4); // setdata ko call krne wala object c1 hai
                    // abhi a,b c1 intance/object ke hai
  c2.setData(5, 6); // iss baar a,b c2 object/instance  ke h

  c1.showData();
  c2.showData();
  c3.showData();

  return 0;
}
