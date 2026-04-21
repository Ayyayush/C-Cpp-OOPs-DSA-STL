/*
virasat ko hi inheritance bolenge
isliye use hota h taaki ek hi class ke liye 2 objects na banana pade
jaise  CAR :=  SPORTS CAR ::
car se jo mila virasat mein wo sports car mein nhi bananyenge

INHERITANCE :=
deriving a old class by inheriting properties and methods of old class


*/
IMPLEMENTATION 


//SYNTAX::

class Baseclass
 {

//   base class
//  parent class
//   super class
//   base class

};

class DERIVED Class : visibility Mode  Baseclass
  // access specifier is visibility mode that  can be public private protected
  {
  //  new class
  //  child class
  //  sub class
  //  derived class

   };

INHERITANCE RELATIONSHIP
is := a  // Ye relationship h tbhi inheritance hoga
subcategory      ::       category
sports car                  car
doctor                     person
specific is a              generic




'TYPES OF INHERITANCE'

//1st
SINGLE INHERITANCE :=
class A
{

};

class B:public A 
{

  // kuch nhi likhenge toh private maan liya jayega 
  // child class ke object mein parent class ke meber sbhi honge 
};





//2nd
 Multilevel Inheritance

class A
{

};

class B:public A 
{

 
};



//3rd
 Multiple Inheritance
 // class is derived from multiple classes
 // eg vehichle-car-sportscar
 
class A1
{

};


class A2
{

};

class B:public A1,public A2
{

 
};



//4th 
Heirrarchial Inheritance
class A1
{

};


class B1:public A
{

 
};


class B2:public A
{

 
};














VISIBILITY MODES :=
private
protected 
public

USER 1......// ye wo h jisne object bnaya
USER 2.... ye A ko inherit krke b class banyega


*/