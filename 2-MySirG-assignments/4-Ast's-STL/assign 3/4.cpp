#include <iostream>
#include <array>
using namespace std ;
class Complex
{
    private:
        int a,b;
    public:
        Complex(int x,int y):a(x),b(y)
        {}
        void showData(){ 
            cout<<"\na="<<a<<" b="<<b;
        }
        Complex operator+ (Complex C)
        {
            Complex temp(0,0);
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};
void p4()
{
    Complex sumComplex(array<Complex,5>);
    array <Complex,5> a1={
                            Complex(2,3),
                            Complex(-4,7),
                            Complex(1,-2),
                            Complex(8,0),
                            Complex(4,4)
                            };
    Complex C=sumComplex(a1);
    C.showData();
    cout<<endl;
}
Complex sumComplex(array<Complex,5> a1)
{
    Complex C(0,0);

    for(auto x:a1)
        C=C+x;
    return C;
}
int main()
{
    Complex c1(5,55);
    return 0;
}