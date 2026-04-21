
CONSTRUCTOR'
it has same name as that of a class 
it has no return type
ye object banane pe invoke hota h 
ye instance member h 
ye object specific kaam krta h aur object banane pe hi call hota h
it is generally public but can be private
jitne object hote h constructor utni baar call hota h
agar constructor private hua toh class ki body ke bahar object kbhi nhi bana payenge'

NEED
note :-= constructor wohi krta h jo hum krwana chahte h
agar hum object banane ke baad sabse pehle koi kaam krwana chahte h toh wo chiz hum constructor ke through krwate h
to initialise member variables of object


class complex
{
    // by default private
    // usually member variables ko private hi rakhenge
    private:
     int a;   // property names
     int b;


    public :

    // constructor
    //  OBJECT BANANE KE BAAD SABSE PEHLE CONSRUCTOIR CALL HOTA H 
    // YE KBHI BHI STATIC NHI HOTA H
    // PROGRAMMER HI CONSTRUCTOR KO DEFINE KRTA H
    // CONSTRUCTOR NE OBJECT BNAYA YE BOLNA GALAT H
    // JAB TAK OBJECT REAL VALUES SE INITIALISE NHI HO RHA H TABTAK WO KISI KO REPRESENT NHI KR RHA H
    // OBJECT BANATE HI USME KUCH VALUES RAKH DO (INITIALISE) TAAKI USME GARABAGE VALUES NA RHE
    // makaan jab insaano se initialise hota h Tab WO GHAR KEHLATA H
    // ISI TARAH CONSTRUCTOR OBJECT KO SHI MAAYNE MEIN OBJECT BNATA H USKE MEMBER VARIABLES KO INITIALISE KARKE
    complex()
    {
       // INITILAISATION
       a=0;
       b=0;
        cout<<"Hello"<<endl;
    }
}
