#include <iostream>
#include <stdio.h>
using namespace std ;

                             // data strcuture array ko define krna h template ke sath 
template <typename X>
class Array                       // ab iske andar hum changes kar rhe h 
{
    private:
        int capacity;
        int lastIndex;
        X *ptr;
    public:
        Array(int);
        Array(Array<X> &);                    // copy constrcutor 
        bool isEmpty();
        void append(X);                        // yha pe jo value enter ho rhi h wo x type i honi chhaiye
        void insert(int,X);
        void edit(int,X);
        void del(int);
        bool isFull();
        X get(int);
        int count();
        int find(X);
        ~Array();
        int getCapacity();
        void operator=(Array &);

};                                                                   //ab hum definition mein bhu changes karenge 
template <typename X>void Array<X>::operator=(Array &arr)                        // hume template <typename X> baar baar saare functions mein likhna padega 
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    if(ptr!=NULL)
        delete []ptr;
    ptr=new X[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=arr.ptr[i];

}
template <typename X>int Array<X>::getCapacity()
{
    return capacity;
}
template <typename X>Array<X>::Array(Array<X> &arr)
{
    capacity=arr.capacity;
    lastIndex=arr.lastIndex;
    ptr=new X[capacity];
    for(int i=0;i<=lastIndex;i++)
        ptr[i]=arr.ptr[i];
}
template <typename X>int Array<X>::find(X data)
{
    int i;
    for(i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}
template <typename X>Array<X>::~Array()
{
    delete[]ptr;
}
template <typename X>int Array<X>::count()
{
    return lastIndex+1;
}

template <typename X>X Array<X>::get(int index)
{
    if(index>=0 && index<=lastIndex)
        return ptr[index];
    cout<<endl<<"Invalid index or empty array";
    throw 1;
}
template <typename X>bool Array<X>::isFull()
{
    return lastIndex==capacity-1;
}
template <typename X>void Array<X>::del(int index)
{
    int i;
    if(isEmpty())
        cout<<endl<<"Array is empty";
    else if(index<0 || index>lastIndex)
        cout<<endl<<"Invalid Index";
    else
    {
        for(i=index;i<lastIndex;i++)
            ptr[i]=ptr[i+1];
        lastIndex--;
    }
    
}
template <typename X>void Array<X>::edit(int index,X data)
{
    if(index>=0&&index<=lastIndex)
        ptr[index]=data;
}
template <typename X>void Array<X>::insert(int index,X data)
{
    int i;
    if(lastIndex==capacity-1)
        cout<<endl<<"Array is already full";
    else if(index<0 || index>lastIndex+1)
    {
        cout<<"Invalid Index";
    }
    else
    {
        for(i=lastIndex;i>=index;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;
    }
}
template <typename X>void Array<X>::append(X data)
{
    if(lastIndex==capacity-1)
        cout<<endl<<"Array is already full";
    else
    {
        lastIndex++;
        ptr[lastIndex]=data;
    }
}
template <typename X>bool Array<X>::isEmpty()
{
    return lastIndex==-1;
}
template <typename X>Array<X>::Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new X[capacity];

}