#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

template <typename X>
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        X *ptr;
    public:
        DynArray(int);
        bool isEmpty();
        void append(X);
        void insert(int,X);
        void edit(int,X);
        void del(int);
        bool isFull();
        X get(int);
        int count();
        int find(X);
        void doubleArray();
        void halfArray();
        int size();
        ~DynArray();

};
template <typename X>void DynArray<X>::del(int index)
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
        if(capacity/2>=lastIndex+1 && capacity>1)
            halfArray();
    }
    
}
template <typename X>void DynArray<X>::insert(int index,X data)
{
    int i;
    if(index<0 || index>lastIndex+1)
        cout<<endl<<"Invalid Index";
    else
    {
        if(isFull())
            doubleArray();
        for(i=lastIndex;i>=index;i--)
            ptr[i+1]=ptr[i];
        ptr[index]=data;
        lastIndex++;
    }
}
template <typename X>void DynArray<X>::append(X data)
{
    if(isFull())
        doubleArray();
    lastIndex++;
    ptr[lastIndex]=data;
}
template <typename X>int DynArray<X>::size()
{
    return capacity;
}
template <typename X>void DynArray<X>::halfArray()
{
    int *temp=new X[capacity/2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity/=2;
}
template <typename X>void DynArray<X>::doubleArray()
{
    int *temp=new X[capacity*2];
    for(int i=0;i<=lastIndex;i++)
        temp[i]=ptr[i];
    delete []ptr;
    ptr=temp;
    capacity*=2;
}
template <typename X>DynArray<X>::DynArray(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new X[capacity];

}
template <typename X>bool DynArray<X>::isEmpty()
{
    return lastIndex==-1;
}
template <typename X>void DynArray<X>::edit(int index,X data)
{
    if(index>=0&&index<=lastIndex)
        ptr[index]=data;
}
template <typename X>bool DynArray<X>::isFull()
{
    return lastIndex==capacity-1;
}
template <typename X>X DynArray<X>::get(int index)
{
    if(index>=0 && index<=lastIndex)
        return ptr[index];
    cout<<endl<<"Invalid index or empty array";
    throw 1;
}
template <typename X>int DynArray<X>::count()
{
    return lastIndex+1;
}
template <typename X>DynArray<X>::~DynArray()
{
    delete[]ptr;
}
template <typename X>int DynArray<X>::find(X data)
{
    int i;
    for(i=0;i<=lastIndex;i++)
        if(ptr[i]==data)
            return i;
    return -1;
}