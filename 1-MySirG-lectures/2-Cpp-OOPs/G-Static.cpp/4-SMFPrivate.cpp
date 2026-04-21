#include <iostream>
using namespace std;
class item
{
   private:
    // private bnaya h toh kaam nikalne aur member variables ko access krne ke liye member function bnane padenge
     int a,b; //  instance memeber variables
      static int k; // static keyword lagane se static member variable
       public:

       // INSTANCE MEMBER FUNCTION STATIC MEMBER VARIABLES KO BHI ACCESS KR SKTA H
       // ISSE STATIC MEMBER FUNCTION KO BANANE PE SAWAL UTTHA HAI KYUNKI WO POWERFUL HI NHI
       // ISKA REASON YE H TAAKI OBJECT NA HO TOH WO BHI WO CALL HO SAKE
       void set_a(int x)         //INSTANCE METHOD
       {
         a=x;
       }
       int get_a()         //INSTANCE METHOD
       {
        return a;
       }

        void set_b(int y)         //INSTANCE METHOD
       {
         b=y;
       }
       int get_b()          //INSTANCE METHOD
       {
        return b;
       }

       // Setk aur getk ki jarurat object  na bane to bhi h kyunki static variable ko call toh krna hi h
// so setk aur getk instance/object ke liye kaam nhi kr rha toh object ho ya na ho isko chalna chahiye
// toh isko instance meber function bana bhul hai isliye isko static banana h
       
        // AISE BHI KR SKTE THE
         void set_k(int x)                   //INSTANCE METHOD
       {
         k=x;
       }
       int get_k()                                  //INSTANCE METHOD
       {
        return k;
       }
       // YHA SETK AUR GETK BHI INSTANCE MEMBER FUNCTION H
       YE OBJECT SPECIFIC KAAM NHI KR RHA ISLIYE INSTANCE MEMBER FUNCTION KI TARAH BANANE KI JARURAT NHI H
        

        static set_m(int x)
       {
         m=x;
       }
       static get_m()
       {
        return m;   // AB  ye a aur b ko waise bhi access nhi kr skte
       }  // STATIC MEMBER FUNCTION INSTANCE MEMBER VARIABLES KO ACCESS NHI KR SKTE

      // AGAR KOI FUNCTION CLASS KE VARIABLES KO ACCESS KR RHA H PAR OBJECT KE VARIABLES KO NHI TOH WO OBJECT SPECIFIC KAAM NHI KR RHA H
       // CLASS NAME KE THROUGH INSTANCE MEMBER FUNCTION CALL NHI HO SKTE
// NOTE .....SAARE FUNCTION JO BANE H WO  INSTANCE MEMBER FUNCTION HAI
};
 // defining static memeber variable outside class 
 
 int item :: k;
int main()
{
    item i1,i2;

    cout<<i1.a<<" "<<i1.b; // aise access nhi kar payega kyunki object ke variable object ke function ke through access honge 
    i1.set_a(5);
    cout<<i2.get_a()<<endl;
   i2.set_b(7);
   cout<<i2.get_b()<<endl;
   
   
   
  // CLASS NAME KE THROUGH INSTANCE MEBER FUNCTION CALL NHI HO SKTE
   //  item::k=6; // isse access nhi hoga kyunki program mein sab private h

     i1.set_m(6) // aise confusion hogi ki instance member function ko access kr rhe ki static member function  ko ...par aise bhi kr skte h
   item::set_m(6);
    cout<<item::k<<endl; // iski value 6 hi hogi kyunki ek baar hi bana h k aur sarvajanki h toh sab access kr lenge
   
    cout<<endl;
    return 0; 
}