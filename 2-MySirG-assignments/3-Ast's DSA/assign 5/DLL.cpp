#include <iostream>
using namespace std;
struct node
{
    int data;
    node* next;

};
class DLL
{
    private :
    node* start;

    public :
    DLL();
    void inserB(int);
    void insertE(int);
    int search(int,int);
    void specified(int,int);
    void deleteB(int);
    void deleteE(int);
    void specidel(int,int);
    ~SLL();



};
DLL::DLL()
{
    start==NULL;
}
void DLL::insertB(int value)
{
    node* newnode=new node();
    newnode->data=value;

}
void DLL::insertE()
{

}
int DLL::search(int value)
{

}
void DLL::deleteB(int position,int value)
{

}
void DLL::deleteE(int position,int value) 
{

}
void DLL::specidel(int position,int data)
{

}
DLL::~DLL()
{
    delete node;
}
int main()
{

}