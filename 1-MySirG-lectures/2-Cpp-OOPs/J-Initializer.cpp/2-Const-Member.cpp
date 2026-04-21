/*
Const member varaible can be initialized using initializer list
hum const member ko modify nhi kr skte agar ek baar initialize nhi kr skte 
agar koi member const h toh usko initialize krne ke liye initializers ka
 use krna padega constructor ke andar likhne pe error aayega
 
 INTIALIZER Ka sabse bada use h ki const value ko initialize krne ke liye use hota h

 */

class A
{
private:
      const int k;

public:
      A()
      {
          k = 10;  // ye error dega 
      }

      A():k(10)
      {

      }
}
