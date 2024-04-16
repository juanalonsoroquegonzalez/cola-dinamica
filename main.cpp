#include "listaSocios.hpp"
#include "constancia.hpp"
#include <iostream>

int main()
{
    listaSocios lista;
    int opcion;

    do
    {
        cout << "///////////////////// Menu /////////////////////\n" << endl;
        cout << "1. Enqueu" << endl;
        cout << "2. Dequeu" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1: {
            system("cls");
            constancia nuevoSocio;
            cout << "Ingrese el nombre para encolar la constancia: ";
            string nombre;
            cin.ignore();
            getline(cin, nombre);

            lista.enqueu(constancia(nombre));
            system("cls");
            break;
        }
        case 2: {
            lista.llena();
            lista.dequeu();
        }
        case 3: {
            system("cls");
            cout << "Saliendo del programa..." << endl;
            system("cls");
            break;
        }
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
            break;
        }

    } while (opcion != 3);

    return 0;
}
