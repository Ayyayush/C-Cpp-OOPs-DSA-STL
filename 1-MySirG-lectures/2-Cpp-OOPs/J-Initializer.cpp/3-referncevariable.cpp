// x mein k  ka address chala jayega
// INITIALIZER LIST KA EK AUR USE H KI REFERENCE VARIABLE KO INITIALIZE KRNE KE LIYE 
//
class A
{
    private :
    int &x; // refernce variable
    int k;

    public :
    A(): k(5),x(k) // isko initialise krne ke liye initializer ka use krna padega
      // x(k)=x(*new int)......aise bhi likh skte h
    {

    }
}