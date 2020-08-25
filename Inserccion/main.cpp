#include <iostream>
#include <fstream>

using namespace std;

void arreglo(int a[], int b);
void ordenamiento(int a[], int b);
void complementos(int a[], int b);

int main()
{
    int tamanio;
    cout<< "Ingrese el tamanio del arreglo: ";
    cin>> tamanio;
    int vec[tamanio];
    arreglo(vec, tamanio);
    ordenamiento(vec, tamanio);
    complementos(vec, tamanio);
}

void arreglo(int a[], int b)
{
    ofstream archivo;
    archivo.open("ordenamiento.txt", ios::app);
    for(int i=0;i<b;i++)
    {
        cout<< "Ingrese el elemento "<<i+1<< " : ";
        cin>>a[i];
    }

    archivo<<"Arreglo original: ";
    for (int i=0; i<b; i++)
    {
        archivo<< "[" <<a[i]<< "] ";
    }
    archivo<<endl;
    archivo.close();
}

void ordenamiento(int a[], int b)
{
    ofstream archivo;
    archivo.open("ordenamiento.txt", ios::app);
    int aux;
    for (int i=0; i<b; i++)
    {
        aux=a[i];
        int p=i;
        while (p>0)
        {
           if (a[p-1]>aux)
            {
                a[p]=a[p-1];
                a[p-1]=aux;
            }
            p--;
        }
    }

    archivo<<"Arreglo ordenado: ";
    for (int i=0; i<b; i++)
    {
        archivo<< "[" <<a[i]<< "] ";
    }
    archivo<<endl;
    archivo.close();
}

void complementos(int a[], int b)
{
    ofstream archivo;
    archivo.open("ordenamiento.txt", ios::app);
    int suma=0;
    for (int i=0; i<b; i++)
    {
        suma+= a[i];
    }
    archivo<< "El total de elementos es: " <<b<<endl;
    archivo<< "La suma tot  al de los elementos es: "<< suma<<endl;
    archivo.close();
}
