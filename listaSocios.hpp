#ifndef __LISTASOCIOS_H__
#define __LISTASOCIOS_H__

#include "nodo.hpp"
#include "constancia.hpp"

class listaSocios
{
  private:
    nodo *ancla;
    nodo *frontal;

    void agregarSocio(const constancia &);
    //void ordenar();
    //void crearReporte() const;
    //void buscar(const string &nombreSocio, const string &domicilio);
    //int sociosRegistrados() const;
    //void eliminarSocio(string nombreCons);

  public:
    listaSocios();
    ~listaSocios();

    void enqueu(const constancia &cons);
    void dequeu();
    bool vacia();
    void llena();
    nodo* getFrontal();
    
};

#endif // __LISTASOCIOS_H__