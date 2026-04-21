/*


char *p;
char str[]="Bhopal";
p=str;.......// p=&str[0]

length nikalte h

#include <iostream>
using namespace std;
int length1(char s[])
{
    int i ;
    for(i=0;s[i];i++) // s is constant here you cannot change the value of p
    return  i;
}

int length2(char *p)
pointer bhi array ke naam ki tarah hi behave krta h
{
    int i ;
    for(i=0;p[i];i++) // p is variable here you can change the value of p
    return  i;
}
int main()
{
length()
}

*/