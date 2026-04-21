 VIRTUAL DESTRUCTOR 
 destructor object ki zindagi mein chalne wala aakhri member h aur khud se chalta h 



 class A 
 {
     public :
      ~A()
      {..}
 
 };

 class B : public A 
 {
    public :
    ~B()
    {...}
 };

 int f1()
 {
  //   int *p=new B          //dynamically created   
  upar int wrong tha kyunki pointer jis class ka ban rha h ussi type ka hona chahiye
   A *p=new B ;
    .......
    delete p;         // delete likhne se destructor call ho jayega 

    // object destroy hone se pehle kis class ka destructor chalega
    // as early bindimg h toh pointer A type ka h toh pehle class A ka destructor chalega
    // so aise b class ka destructor nhi chal rha jisse aage memory leak ho jayegi
    // kbhi kbhi yhi error bug banta h
    // thus creating software testing scope

    SOLTION TO THIS : is late binding
    isse parent class mein viertual likh denge toh child class bhi virtual ban jayega toh
     pointer jisko point kr rha h pehle uska destructor chalega 
    THIS IS THE CONCEPT OF VIRTUAL DESTRUCTOR 

    WE SEE that so many error situations are arising and to handle this and make our code rubust we need exception handling



 }