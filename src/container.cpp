#include "Container.h"
template class Container<Book>;

template <class T>
//constructor
Container<T>::Container(size_t initcapacity)
{
    capacity= initcapacity;
    size=0;
    data =new T[capacity];
    //ctor
}
template <class T>
//copy constructor
Container<T>::Container(const Container<T> & other ):capacity(other.capacity),size (other.size)
{
    data =new T[capacity];
    for(int i=0; i<size; i++)
    {
        data[i]=other.data[i];

    }
}

template <class T>
//getsize function
size_t Container<T>::getsize()
{
    return size;
}

template <class T>
//resize function
void Container<T>::resize()
{
    size_t newcapacity = max(2*(int)size,10);
    T* newdata =new T[newcapacity];
    //now copy element
    for(size_t i=0; i<size ; i++)
    {
        newdata[i]= data[i];
    }
    //now deallocate the old memory
    delete []data;
    data=newdata;
    capacity=newcapacity;
}
template <class T>
void  Container<T>::swapob( T & con1,T & con2 )
{
    T tempob= con1;
    con1 =con2;
    con2=tempob;
}
template <class T>
// = operator overloading
Container<T>& Container<T>::operator =(const Container<T> & other)
{
    if (this != &other)
    {
        delete [] data;
        size = other.size ;
        capacity= other.capacity;
        data = new T[capacity];
        for(size_t i=0; i<size; i++)
        {
            data[i]=other.data[i];
        }
    }
    return *this;
}

template <class T>
//[] operator overloading
T& Container<T>::operator[](size_t index)
{
    if(index>=size)
    {
        throw out_of_range("the index you enter is out or range");
    }
    return data[index];
}
template <class T>
//remove functions
void Container<T>:: removeat(size_t index)
{
    if(size >0)
    {
        if (index >=size || index <0)
        {
            throw out_of_range("the index you enter is out or range");
        }

        for(size_t i=index; i<size-1; i++)
        {
            data[i]=data[i+1];
        }
        size--;
    }
}


template <class T>
//insert functions
void Container<T>::insertatfront(const T& value)
{
    if(capacity == size)
    {
        resize();
    }
    for(size_t i=size; i>0; i--)
    {
        data[i]=data[i-1];
    }
    data[0]= value;
    size++;
}

template <class T>

void Container<T>::insertatend(const T& value)
{
    if(size == capacity)
    {
        resize();
    }
    data[size++]= value;
}

template <class T>

void Container<T>::insertat(const T& value,size_t index)
{
    if (index >=size || index <0)
    {
        throw out_of_range("the index you enter is out or range");
    }
    for(size_t i=size; i>index; i--)
    {
        data[i]=data[i-1];
    }
    data[index]= value;
    size++;
    if(size == capacity)
    {
        resize();
    }
}

template <class T>

Container<T>::~Container()
{
    //dtor
    delete [] data;
}
