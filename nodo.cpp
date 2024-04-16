#include "nodo.hpp"
#include "constancia.hpp"

nodo::nodo() : datoPtr(nullptr), prev(nullptr), siguiente(nullptr)
{}

nodo::nodo(const constancia& s): datoPtr(new constancia(s)), prev(nullptr), siguiente(nullptr) {
  if (datoPtr == nullptr) {
    cout << "Memoria no disponible, creando Nodo";
  }
}

nodo::~nodo()
{
    delete datoPtr;
}

constancia nodo::getDato()
{
    return *datoPtr;
}

constancia* nodo::getDatoPtr()
{
    if (datoPtr == nullptr) {
    cout << "Error, el dato no existe, getDatoPtr";
  }
  return datoPtr;
}

nodo* nodo::getSiguiente()
{
    return siguiente;
}

nodo* nodo::getPrev()
{
    return prev;
}

void nodo::setDatoPtr(constancia* s)
{
    datoPtr = s;
}

void nodo::setDato(const constancia& s)
{
    delete datoPtr;

  datoPtr = new constancia(s);

  if (datoPtr == nullptr) {
    cout << "Memoria no disponible, setDato";
  }
}

void nodo::setSiguiente(nodo* p)
{
    siguiente = p;
}

void nodo::setPrev(nodo* p)
{
    prev = p;
}
