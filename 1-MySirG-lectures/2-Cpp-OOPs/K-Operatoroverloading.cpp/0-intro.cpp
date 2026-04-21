


// if one operator symbol is overloaded with multiple coperations it
// is known as operaotr overloading

//Defoining a operator in a class is providing a new behaviour of operator for specific type operands 
//In simple words o.o occurs when you define an operatror w.r.t a class

//O.O is another way of imn-pleemnting polymorphism 
eg
 3+4
5.4+6.4           // dono args float h toh compiler iske accordingf definition run karega
c1+c2         // dono arfs complex h toh uske accoridng 
t1+t2           // timje + time karge a


// c mein jo valid operator tha whi c++ mein overload ho skta h
eg valid :: +,++,-,~..etc
not valid :: +++,---,***,...etc

// par aise bhi kuch h jo valid par overl;oad nhi ho skte h



/*// we can name a function as symbol of operator if we use operator keyword before the function name
// eg Complex operator +(Complex c)
// {}
 // Par aise call krte time bhi operator word use krna padega toh ye lengthy hi toh pad rha h
 // toh ye bas ek tarika h paer jaruri nhi ki aise hi call kare
 // jaise ki c3=c1.operator+(c2) ki jagah pe c3=c1+c2;
 //kisi bhi symbol ko function name ke taur pe nhi rakh skte ...sirf wo symbol hi jo c lang mein valid operator the

 */

 



// par kuch aise bhi operator h jo c lang mein valid operator h par unki overloading restricted h jaise :=
size of operator
member access operator (.)
pointer to member operator   (.*)
conditional operator (?:)
scope resolution operator.....ye c mein nhi h     (::) 

// overloading ke baad bhi precedence aur associativity whi rehti h
// ek se jyada baar bhi overload kr skte h 
// arrow bbi memmeber access operator h par usko kr skte h overloaid 
// curly braclet operaotr nhi h par ( ) h 


// size opf operator isliye overload nh9i hota kyunki wo compiler time pe decide hota h 
// jablo o.o ruintine pe over;oad hote h 

// NOTE :=
// ASSIFGNMENT operator ki overloading ho chuki h by default

// parenthesis {} ... it is called function call operator



 NOTE:=
 object.function
 object.variable
 object.operator+(arg)      //   or object + arg


 isss rule ka use krke hi c3=c1+c2; kr rhe h  c3=c1.operator+(c2);  // ki jagah pe

 isiliye 
 cout<<"Hello".....// iskp padhenge ki cout ne insertion operator ko call karke hello as arguement pass kiya
 

 this is called operator overloading
 it is example of compile time polymorphism
