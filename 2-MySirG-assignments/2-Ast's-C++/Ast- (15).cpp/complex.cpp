#include <iostream>
using namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y) { a=x; b=y;}
        void showData(){ cout<<"\na="<<a<<" b="<<b;}
        friend Complex operator-(Complex);        // unary operator h toh ek hi arguement paas ho rha nhi toh normally 2 hote
};
Complex operator-(Complex C)
{
    Complex temp;
    temp.a=-C.a;
    temp.b=-C.b;
    return temp;
}
int main()
{
  complex c1,c2;
  c1.setdata();
  c1.showdata();
  return 0;
}