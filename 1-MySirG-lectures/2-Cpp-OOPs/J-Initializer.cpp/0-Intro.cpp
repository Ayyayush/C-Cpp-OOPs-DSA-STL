/*
INITIALIZER
it is also known as initialize list
it allows which constructor  is called and what arguement that constructor recieves
agar hamare paas reference or const field h or
 if one of the class ke paas default constructor nhi h we must use initialize list


USES 
Uesd to initialize fields
/ USED IN STL AND INTERVIEWS
// ALSO KNOWN AS INITIALIZER LIST
// IF YOU HAVE A REFERNCE OR AN CONST FIELD OR IF ONE OF THE CLASSES USED DOES NOT HAVE A DEFAULT CONSTRUCTOR YOU MUST USE AN INITIALIZATION LIST


SYNTAX
 class ClassName
 {
 public :
  ClassName(args) : intialization list
  }


  
// USING INITILIZATION FIELDS TO INITIALIZE FIELDS
class A
{
   private :
   int a,b,c;   // YE FIELDS H ISKO HUM PEHLE CONSTRUCTOR KI MADAD SE INITIALIZE KRTE THE
    public :

     // AISE BHI CONSTRUCTOR KA HI KAAM HO RHA H PAR SYNTAX ALAG H
    A():a(5),b(6),c(8)
    {
      
     }
     
      A(int a,int b,int c): a(a),b(b),c(c) // YHA PE WOHI KAAM ARGUEMENTS LEKE KR RHE H
      // RESOLVING NAME CONFLICT
      // BAHAR JO LIKHA H WO INSTANCE VARIABLE A H ANADAR JO LIKHA H WO LOCAL VARIABLE A H
      // CONSTRUCTOR MEIN AGAR DONO KA NAAM SAME HO JATA TOH INSTANCE VARIABLE MEIN VALUE JATI HI NHI KYUNKI BY DEFAULT WO LOCAL VARIABLE MAANTA DONO KO
       {

       }
    
}


*/
 


// USING INITILIZATION FIELDS TO INITIALIZE FIELDS

PLACES TO USE INITIALIZER LIST ::IMP
to initialise refernce member variable
to initialise const member variable
to initialise data member (fields)
to invoke base class constructor
to initialize pointer variable //     kisi bhi variable ko kr skte h initialize 



