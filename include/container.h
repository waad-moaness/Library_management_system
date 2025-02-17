#include <iostream>
#include <exception>
using namespace std;
#ifndef CONTAINER_H
#define CONTAINER_H
#include <Book.h>

template<class T>
class Container
{
    private:
    T * data;
    size_t size;
    size_t capacity;

public:
    Container(size_t initcapacity=100);
    virtual ~Container();
    Container(const Container & other );
    void removeat(size_t);
    void insertatfront(const T&);
    void insertatend(const T&);
    void insertat(const T&,size_t);
    size_t getsize();
    void resize();
    Container &operator=(const Container & other);
    T& operator[](size_t);
    void swapob(T&,T&);

protected:


};

#endif // CONTAINER_H
