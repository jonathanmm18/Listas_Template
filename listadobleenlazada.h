#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include <iostream>
#include <string>
#include "Nodo.h"
using namespace std;

template <typename T>
class listaDobleEnlazada
{
private:
    NodeDE<T> *head, *tail;
public:
    listaDobleEnlazada(){head = tail = 0;}
    void AddToLDETail(const T&);
    T DeleteFromLDETail();
    void setHoja() const;
    string hola(){return "hola";}
    friend class ExpresionPostFijas;
};

#endif // LISTADOBLEENLAZADA_H
