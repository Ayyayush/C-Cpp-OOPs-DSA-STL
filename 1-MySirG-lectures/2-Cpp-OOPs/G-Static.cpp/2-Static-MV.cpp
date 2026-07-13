
STATIC MEMBER VARIABLE
IT NEEDS TO BE DEFINED OUTSIDE THE CLASS BODY ALSO
THERE IS ONLY ONE COPY OF STATIC MEMBER VARIABLE
IT IS NOT RELATED TO ANY SPECIFIC OBJECT
class item
{
    public :            // bahar se access ho paye so public kr diya
     int a,b;          //  instance memeber variables

      static int k;    // static keyword lagane se static member variable
      // static hai toh instance nhi ho skta ....instance hai toh static nhi ho skta        
};

//!  defining static member variable outside class 
int item :: k;

int main()
{
  cout<<a<<endl;     // error
   cout<<k ...// error aise directly access nhi kr skte class ke member ko
   item i1,i2;
   i1.a=5;
   cout<<i2.a<<endl;

     cout<<i1.k<<endl;.....// error kyunki k variable abhi bana hi nhi h isko object ke banne na banne se koi mtlb nhi h
       agar k ko object se lena dena nhi h toh i.k likh ke kaise access kar pa rhe h ?
      ans ::= bcz static member varaible are known as class variable aur class mein bane har chiz ko access kr skte h object na bana ho to bhi


    //           static memeber ko class ke andar likhna sufficient nhi h 
    //           isko class mein declare krke class ke bahar membership variable se define krna padta h
    i2.k=6;   // aise access mein confusion ho rhi h ki instance memeber variable access ho rha h ya static
    // ! so static member variable ko aise access karenge taaki confusion na ho
     item::k=6;

    // Note : k ka object se lena dena nhi so i1.k aur i2.k ek hi chiz h
   
    cout<<i1.k<<endl; // iski value 6 hi hogi kyunki ek baar hi bana h k aur sarvajanik h toh sab access kr lenge
    return 0; 
}





