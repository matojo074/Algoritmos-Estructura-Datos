#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    string nombre, apellido, edad, cedula, celular, texto, nombreArchivo;
    char eleccion;
    ofstream archivoPrueba;
    cout << "Ingrese el nombre del Archivo: ";
    getline (cin, nombreArchivo);
    archivoPrueba.open(nombreArchivo.c_str(),ios::app);
    do
    {
        cout<< "Ingrese su nombre: ";
    getline(cin, nombre);
    cout<< "Ingrese su apellido: ";
    getline(cin, apellido);
    cout<< "Ingrese su edad: ";
    getline(cin, edad);
    cout<< "Ingrese su ID: ";
    getline(cin, cedula);
    cout<< "Ingrese su celular: ";
    getline(cin, celular);
    archivoPrueba<<nombre<<endl;
    archivoPrueba<<apellido<<endl;
    archivoPrueba<<edad<<endl;
    archivoPrueba<<cedula<<endl;
    archivoPrueba<<celular<<endl;
    cout<< "Desea ingresar otros datos (s/n): ";
    cin>>eleccion;
    cin.ignore();
    } while (eleccion=='s');

    archivoPrueba.close();

    ifstream archivolectura("misdatos.txt");

    while (!archivolectura.eof())
    {
        archivolectura>>nombre>>apellido>>edad>>cedula>>celular;

        if(!archivolectura.eof())
        {
            getline(archivolectura, texto);
            cout << "*********************************************************"<<endl;
            cout << "Mi nombre es: " << nombre <<endl;
            cout << "Mi apellido es: " << apellido<<endl;
            cout << "Mi edad es: " << edad <<endl;
            cout << "Mi No. de ID es: " <<cedula<<endl;
            cout << "Mi celular es: " <<celular<<endl;
        }

    }
    archivolectura.close();
    return 0;
}

