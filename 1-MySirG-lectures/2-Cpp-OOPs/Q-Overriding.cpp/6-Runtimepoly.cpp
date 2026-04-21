RUNTIME POLYMORPHISM 

class user 
{
    public :
    virtual void show ()
    {...}

};

class admin : public user
 {
 public :
 void show ()
 {...}

 };

 class learner : public user 
 {
    public :
    void show ()
    {...}
 };


 user *ptr=getuser();                // yha ptr base class ka isliye bana rhe h ki do child class h toh confusion na ho ki kiska chale aur sidhe base class ka chale
 ptr->show();                // virtual likh chuke h toh uska show chalerga jiska likha hoga

 ptr-newlearner();
 ptr->show();

ptr=newadmin();
 ptr->show();


 eg : MCQ :
 class A
 {
    public :
    virtual void f1(){}
    virtual void f2() {}
    void f3() {}
    void f4() {}
 };

 class B :public A
 {
    public :
      void f3() {}
    void f4() {}
      void f5() {}
 
 }

 // A*p;
 p=new A;
 p->f1();     // LB
 p->f2();     // LB
 p->f3();    // EB          // A
 p->f4();     // EB         // A
 p->f5();     // EB but error



 delete p;
 p=new B ;
 p->f1();     // LB
 p->f2();     // LB
 p->f3();    // EB           //A   kyunki pointer toh abhi bhi A type ka hi h 
 p->f4();     // EB           //A
 p->f5();     // EB but error



