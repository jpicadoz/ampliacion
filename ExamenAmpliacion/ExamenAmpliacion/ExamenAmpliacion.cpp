#include <iostream>
#include <string.h>
using namespace std;
#include "ListaContacto.h"
using namespace std;
ListaContacto* listaConta = new ListaContacto();

//Metodos
void menuContactos();
void agregarContacto();
void mostrarContacto();

int main()
{
    menuContactos();

}

void menuContactos() {

    int opcion = 0;
    bool band = false;
    do
    {
        system("cls");
        cout << "---MENU DE OPCIONES---\n";
        cout << "1. Agregar Contacto\n";
        cout << "2. Buscar Contacto\n";
        cout << "3. Modificar Contacto\n";
        cout << "4. Borrar Contacto\n";
        cout << "5. Mostrar Contactos (ascendentes)\n";
        cout << "6. Mostrar Contactos (descendentes)\n";
        cout << "7. Salir\n";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("cls");
            agregarContacto();
            system("pause");
            break;
            /*case 2:
                system("cls");
                modificarEstudiante();
                system("pause");
                break;
            case 3:
                system("cls");
                mostrarEstudiantes();
                system("pause");
                break;
            case 4:
                system("cls");
                buscarEstudiantes();
                system("pause");
                break;*/
        case 5:
            system("cls");
            mostrarContacto();
            system("pause");
            break;
            /*case 6:
                system("cls");
                eliminarEstudiante();
                system("pause");
                break;
            case 7:
                system("cls");
                ponerNota();
                system("pause");
                break;
            case 8:
                system("cls");
                retirarEstudiante();
                system("pause");
                break;
            case 9:
                cout << "Hasta luego!\n";
                band = true;
                break;
            default:
                cout << "Opci�n Inv�lida\n";
                break;*/
        }

    } while (band != true);

}

void agregarContacto() {

    char nombre[60];
    char telefono[60];
    char correo[60];

    cout << "Digite el telefono: ";
    cin.ignore();
    cin.getline(telefono, 60, '\n');


    if (listaConta->existe(telefono) == true) {
        cout << "El numero ingresado ya esta registrado\n";
    }
    else {
        cout << "Digite el nombre: ";
        cin.getline(nombre, 60, '\n');
        cout << "Digite el correo: ";
        cin.getline(correo, 60, '\n');


        Contacto* contact = new Contacto(nombre, telefono, correo);
        listaConta->agregarContacto(contact);
        cout << "\n Contacto agregado con exito" << endl;

    }

}

void mostrarContacto() {

    listaConta->mostrar();
}
