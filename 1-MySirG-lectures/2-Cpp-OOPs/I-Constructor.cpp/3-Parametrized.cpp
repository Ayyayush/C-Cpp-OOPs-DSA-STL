// You can make a construtor with arguements
// Iske liye object bnate ke sath hi usme arguemtnts paas kr do
// NOTE
// OBJECT NA VANANE PE BHI CONSTRUCTOR CALL HOTA H
// KYUNKI COMPILER APNI TARAF SE EK CONSTRUCTOR BANA DETA H JISKO DEFAULT CONSTRUCTOR KEHTE  H
// PROGRAMMER KA CONSTRCUTOR EXPLICIT CONSTRUCTOR KEHLATA H
// DEFAULT CONSTRUCTOR IS AN EMPTY BODY NO ARGUEMENT
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
  // DEFAULT CONSTRUCTOR :: empty body no arguemnets
  complex()
  {
  } // taaki ye tabhi chale jab koi arguemnet paas na ho

  // CONSTRUCTOR OVERLOADING IS POSSIBLE

  complex(int x)
  {
    a = x;
    b = 0;
  }

  complex(int x, int y)
  {
    // INITILAISATION
    a = 0;
    b = 0;
    cout << "Hello" << endl;
  }

  void setData(int x, int y)
  {

    a = x;
    b = y;
  }

  void showData()
  {
    cout << "Real" << a << " " << "Imaginary" << b;
  }
};

int main()
{
  complex c1(8, 9), c2(4), c3(1, 7); // constructor ko arguemnts aise hi dete  h
  complex c4 = c1;                   //  YE HAI COPY Constructor
  // ab isse kaun sa constructor call hoga
  // ARGUEMNTS KE BASIS PE COMPILER DECIDE KR LEGA KI KAUN SA COMNSTRUCTOR CALL HONA CHAHIYE
  // Object bante ke sath hi usme value paas kr do parametrized ke liye

  c1.setData(3, 4);

  c2.setData(5, 6);

  c1.showData();
  c2.showData();
  c3.showData();

  return 0;
}
