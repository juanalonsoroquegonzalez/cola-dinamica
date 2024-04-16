#ifndef __NODO_H__
#define __NODO_H__

#include "constancia.hpp"

 class nodo {
   private:
    constancia* datoPtr;
    nodo* siguiente;
    nodo* prev;

   public:
    nodo();
    nodo(const constancia&);

    ~nodo();

    constancia getDato();
    constancia* getDatoPtr();
    nodo* getSiguiente();
    nodo* getPrev();

    void setDatoPtr(constancia*);
    void setDato(const constancia&);
    void setSiguiente(nodo*);
    void setPrev(nodo*);
  };

#endif // __NODO_H__