/*
CIN , COUT ko use krne ke liye uske class ko call karenge ya nhi ?
 toh nhi kyunki call function ko krte h class ko nhi

 stdio.h mein printf, scqanf ka declaration h defintion library mein h 
 


 IOSTREAM
 this is header of cin , cout
 we don't use . in header of c++


 NAMESPACE
 it is a keyword in c++
 agar bada project ho toh team milke code krti h 
 as more than one team ne same naam ki class bana di ho isse code clash krti h 
 iss problem ko solve krne ke liye naya concept aaya  :-= SCOPE
 Scope alag alag hoga toh clash nhi hoga
 ISS SCope ko naam diya gya namespace 
 C++ mein kai namespace yani scope ho skte h
 maan lo n1,n2 dono scope h toh kis scope ke fubnction co call kr rhe h kaise pata chalega 
 So we use scope resolution operator :: 


SCOPE RESOLTUON OPERATOR  :: 
n1 :: f1();
n2 :: F2();



USE OF USING NAMESPACE STD;
Namespace in c++ allows us to group named entities like variables , functions and classes
Ye team milke code kr rhi ho toh necessary concept ban jata h
jinhone c++ banayi h unhone khud namespace use kiya hoga chizon ko define krne ke liye
predefined chizon ko use krne ke liye jo namspace mein bani usko access krne ke liye kya karenge
USS predefined namspace kaa naam h std;


std // this is a namespace
c++ mein bani saari chizien std namespace ke andar bani h 
har baar std:: use krne se bachne ke liye we use :=:
using namespace std;
*/