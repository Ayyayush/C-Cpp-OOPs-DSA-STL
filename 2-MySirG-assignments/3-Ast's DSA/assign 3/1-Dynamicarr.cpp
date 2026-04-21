#include <iostream>
using namespace std ;
#define INVALID_CAPACITY 1
#define EMPTY_ARRAY 2
#define INVALID_INDEX 3
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    protected:
        void doubleArray();                
        void halfArray();
    public:
        DynArray(int);
        DynArray(DynArray &);
        void createArray(int);
        int getCapacity();
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        ~DynArray();
        int find(int);
        DynArray& operator=(DynArray &);
};
void DynArray::doubleArray()
{
    int *temp;              // temporary pointer jiska size capacity ka double hoga
    temp=new int[capacity*2];     
    for(int i=0;i<=lastIndex;i++)               // ab data copy karenge
        temp[i]=ptr[i];
    capacity*=2;                       // capapcity ki value bhu change ho rhi h 
    delete []ptr;              // purane wale array ki memory release kar denge
    ptr=temp;                  // ab ptr mein temp assign kar do 
}
void DynArray::halfArray()
{
    int *temp;
    temp=new int[capacity/2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    capacity/=2;
    delete []ptr;
    ptr=temp;
}
  Dynarray :: Dynarray(int )
 {
    try
    {
        if(cap<1)
         throw INVALID_CAPACITY ;
         capacity=cap;
         lastindex=-1;
        ptr=new int[capacity];
    }
    catch(int e)
    {
        cout<<"\nInvalid capacity "<<endl;
        ptr=NULL;
    }
    
}

void Dynarray::createDynarray(int cap)
{
    if(ptr==NULL)
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];
    }
    else
    {
        if(cap<1)
            throw INVALID_CAPACITY;
        delete []ptr;
        capacity=cap;
        lastIndex=-1;
        ptr= new int[capacity];
    }
}

bool Dynarray :: isfull()
{
    if(ptr==NULL)
    throw INVALID_CAPACITY ;
    if(capacity==lastindex+1)
    return true;
    else 
    return false ;
}
bool array ::  isempty()
{
    if(ptr==NULL)
     throw INVALID_CAPACITY ;
     return lastindex==-1;                      // 1 return karega agar lastindex ki value -1 hui toh 

} 
    void Dynarray ::append(int data)
    {
           if(ptr==NULL)
     throw INVALID_CAPACITY ;
     if(isfull())
     cout<<"\nOverflow "<<endl;
     else
     {
      lastindex++;
      ptr[lastindex]=data;
    }
    }

    
    void Dynarray::edit(int index,int data)
    {
           if(ptr==NULL)
     throw INVALID_CAPACITY ;
     if(isempty());
     cout<<"\nempty array"<<endl;
     else
     {
      ptr[index]=data;
     }
     }

void DynArray::edit(int index,int newData)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty Array";
    else
        ptr[index]=newData;
    
}
void DynArray::del(int index)
{
    int i;
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(index<0 || index>lastIndex)
        cout<<"\nInvalid Index or Empty Array";
    else
    {
        for(i=index;i<lastIndex ;i++)
            ptr[i]=ptr[i+1];
        lastIndex--;
        if(capacity>1 && lastIndex<capacity/2)
            halfArray();
    }
}
int DynArray::get(int index)
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    if(lastIndex==-1)
        throw EMPTY_ARRAY;
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}
int DynArray::count()
{
    if(ptr==NULL)
        throw INVALID_CAPACITY;
    return lastIndex+1;
}
DynArray::~DynArray()
{
    if(ptr!=NULL)
        delete []ptr;
}
int DynArray::find(int data)
{
    if(ptr==NULL)
        return -1;
    
    for(int i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}
int main()
{
    DynArray obj(4);
    obj.append(10);
    obj.insert(0,20);
    obj.insert(0,30);

    DynArray o1(4);
    o1=obj;


    for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    obj.del(1);

    cout<<endl;
    for(int i=0;i<obj.count();i++)
        cout<<obj.get(i)<<" ";
    cout<<endl;
    return 0;
}