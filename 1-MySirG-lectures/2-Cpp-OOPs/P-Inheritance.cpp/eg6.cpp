#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Class A" << endl;
    }
};

class B : public A // B inherits A
{
public:
    void display()
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    B obj;

    obj.show();    // Inherited from A
    obj.display(); // Own function

    return 0;
}

#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A" << endl;
    }
};

class B
{
public:
    void showB()
    {
        cout << "Class B" << endl;
    }
};

class C : public A, public B // C inherits A and B
{
public:
    void showC()
    {
        cout << "Class C" << endl;
    }
};

int main()
{
    C obj;

    obj.showA(); // From A
    obj.showB(); // From B
    obj.showC(); // Own function

    return 0;
}



#include<iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout<<"Class A"<<endl;
    }
};

class B : public A      // B inherits A
{
public:
    void showB()
    {
        cout<<"Class B"<<endl;
    }
};

class C : public B      // C inherits B
{
public:
    void showC()
    {
        cout<<"Class C"<<endl;
    }
};

int main()
{
    C obj;

    obj.showA();        // From A
    obj.showB();        // From B
    obj.showC();        // Own function

    return 0;
}



#include<iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout<<"Class A"<<endl;
    }
};

class B : public A      // B inherits A
{
public:
    void showB()
    {
        cout<<"Class B"<<endl;
    }
};

class C : public A      // C also inherits A
{
public:
    void showC()
    {
        cout<<"Class C"<<endl;
    }
};

int main()
{
    B obj1;
    C obj2;

    obj1.showA();
    obj1.showB();

    obj2.showA();
    obj2.showC();

    return 0;
}


#include<iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout<<"Class A"<<endl;
    }
};

class B : public A      // Single Inheritance
{
public:
    void showB()
    {
        cout<<"Class B"<<endl;
    }
};

class C
{
public:
    void showC()
    {
        cout<<"Class C"<<endl;
    }
};

class D : public B, public C     // Multiple Inheritance
{
public:
    void showD()
    {
        cout<<"Class D"<<endl;
    }
};

int main()
{
    D obj;

    obj.showA();    // From A
    obj.showB();    // From B
    obj.showC();    // From C
    obj.showD();    // Own function

    return 0;
}