#include<iostream>
#include<list>
#include<vector>
#include <forward_list>
#include<string>
#include<algorithm>
using namespace std;

  
struct Term
{
    int coeff,exp;
    Term(int c,int e):coeff(c),exp(e){}
};
void p5()
{
    forward_list <Term> fl1;
    //5(x3)-4(x2)+x +10
    fl1.push_front(*new Term(10,0));
    fl1.push_front(*new Term(1,1));
    fl1.push_front(*new Term(-4,2));
    fl1.push_front(*new Term(5,3));
    for(auto x: fl1)
        cout<<"("<<x.coeff<<"x^"<<x.exp<<") ";
    cout<<endl;
}
int main()
{
    p5();
    cout<<endl;
    return 0;
}