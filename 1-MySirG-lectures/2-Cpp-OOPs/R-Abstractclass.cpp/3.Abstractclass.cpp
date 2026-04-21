ABSTRACT CLASS :=
You cannot create an object of an asbtract classs 
Abstract classs = incomplete classs
isme details missing h...ye adhuri classs h

Agr kaha jaye abstract classs kaise bnate h  :=?
java :: abstract keyword se 
c++ :: pure virtual function bana ke 
c++ mein abstract keyword nhi hota h 


//A classs containing atleast one virtuall function is known as abstract classs




HOW TO USE ?'
you cannot create object of abstract class but you can derive a class from abstract class
To use an abstract class you need to derive it and override pure virtual function of the abstract class
jo chiz imcomplete h uske ek function ko rokna h par ho skta h ki child class ban ke object se parent abstract class ke pure v.f ko call kr le 
jo child class b hogi usme same naam se ek function bana denge toh early binding ke time abstarct class ka p.v.f na chal ke child class ka chal jayega 
par overrding ke liye child class mein bhi virtual keyword likhna hoga
virtual likhne se toh wo late binding mein chale jayega'



Note :=
Either you have to override a p.v.f  or you have to declare it again as a pure virtual function 
If you have to declare it as p.v.f again in the derived class then the derived class becommes an abstract class
so what to do ? 
so firr se override karo ya pure virtual function declare kr do ...inherit krvao firr


POINTER OF AN ABSTRACT CLASS  := 
you can create an pointer of abstract class
par object hi nhi bana skte toh pointer ka kya karenge ?
toh pointer se uske child class ke objects ka address toh store kr hi sakte h
eg 
A *P;
P=new B ;
p->f1();
p->f2();
p->f3();



WHY ABSTRACT CLASS  :? 
ans:: GENERALIZATION 

CLASS SCHOOL
// common parent abstract  ...class Person :
class school ke teen parts h 
1>student
2>teacher
3>non teaching staff
ab teeno ki common cheezien likhne se redundancy problem hogi so isko solve krne ke liye teeno mein common parent class banayenge
par iss parent class ke object ki koi significannce nhi hogi iss liye isko abstract class banayenge 
aur agr code maintain krna ho toh iss common parent abstract class mein karenge toh teeno mein ho jayega
