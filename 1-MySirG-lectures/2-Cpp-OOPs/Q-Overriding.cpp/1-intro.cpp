FUNCTION HIDING :=

When child class has a function with the same name but differ in arguement 
as compared to tne version of function of the aprent class...we say
 function in the child class hides the version of the parent class 
for this one version must be in base class and other in child class



class A
{
public:
    void f1()
    {
        ..
    }
};

NOT FUNCTION OVERLOADING KYUNKI DONO SAME CLASS MEIN NHI H

    class B : public A{
        public :
            void f1(int x){..} void f2(){..}

        ERROR ISKA ASLI REASON H EARLY BINDING
    }

              B.obj
                  obj.f1(); // error aayega kyunki class b mein f1 milne ke baad class A mein jayega hi nhi ...b ke layak arguement toh h nhi toh error
obj.A::f1();                // agar b mein f1 hote hue bhi A class ke f1 ko call krna h
obj.f2();                   // B f2()
obj f1(5);                  // yha pe koi error nhi aayegi kyunki class b mein jayega aur arguement bhi h

NOTE :=
Isse hume yue dikhta hai ki b ka object jbhi bhi f1 ko call krega toh arguement ho ya na ho
 parent class mein toh nhi jayega kyunki child class mein mil chuka h
yani child mein jab tak f1 naam ka function h tbtak parent ke sbhi f1 naam ke function hide ho gye h
iska mtlb ye nhi h ki parent ka koi function nhi dikh rha h ...bas jis naam ka function child mein bhi h wo nhi dikh rha
THIS IS KNOWN AS FUNCTION HIDING






 FUNCTION OVERRIDING :=
When child class has a function with the same prototype as that of the function of the parent class...
we say function in the child class overrides the version of the parent class 
for this one version must be in base class and other in child class



eg - 2

class A
{
public:
    void f1()
    {
        ..
    }
};

NOT FUNCTION OVERLOADING KYUNKI DONO SAME CLASS MEIN NHI H

    class B : public A
{
public:
    void f1()
    {
        ..
    }
    void f2()
    {
        ..
    }

    // NO ERROR ISKA ASLI REASON H EARLY BINDING
}

    Early binding hi reason h function hiding or
    overriding dono ka

        DIFFERENCE : =
                         OVERRIDING ::parent aur child mein same prototype ke function mile toh wo overriding hai
                             HIDING ::parent aur child mein same name ke function h par prototype alag h toh wo function hiding h

                                 WHY OVERRIDNG
                     ? class car
{
public:
    void shiftgear()
    {
        ..
    }
}

class sports car : public car // ye car class ka user 2 h aur private proetcetd sabko access kr skta h
{
    void shiftgear() // ye nhi hota toh parent class mein jata shiftgear call hone pe
    {
        //..  ye yha isliye bnaa rhe h kyunki ye sports car specific h na ki car 
    }
}
