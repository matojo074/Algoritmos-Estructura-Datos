#include <iostream>
#include <fstream>

using namespace std;

const int MIN=0;
void ingresar(int a[], int pinicial, int pfinal);
int mitad(int a[], int pinicial, int pfinal);
void ordenar(int a[], int pinicial, int pfinal);
void imprimir(int a[], int pinicial, int pfinal);

int main()
{
    int tamanio;
    cout<< "Ingresar el tamanio del arreglo: ";
    cin>> tamanio;
    int vec[tamanio];
    ingresar(vec,MIN,tamanio);
    ordenar(vec,MIN,tamanio);
    imprimir(vec,MIN,tamanio);
}

void ingresar(int a[], int pinicial, int pfinal)
{
    ofstream archivo;
    archivo.open("quicksort.txt",ios::app);
    for(int i=0;i<pfinal;i++)
    {
        cout<< "Ingrese el elemento "<<i+1<< " : ";
        cin>> a[i];
    }

    archivo<< "Arreglo original: ";
    for(int i=0;i<pfinal;i++)
    {
        archivo<< "|" <<a[i]<< "|";
        cout<< "|" <<a[i]<< "|";
    }
    cout<<endl;
    archivo<<endl;
    archivo.close();
}

int mitad(int a[], int pinicial, int pfinal)
{
    return a[(pinicial + pfinal) / 2];
}

void ordenar(int a[], int pinicial, int pfinal)
{
    int i=pinicial;
    int j=pfinal;
    int aux;
    int piv=mitad(a,pinicial,pfinal);
    do
    {
        while(a[i]<piv)
        {
            i++;
        }
        while(a[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
            i++;
            j--;
        }
    }while(i<=j);
    if(pinicial<j)
    {
        ordenar(a,pinicial,j);
    }
    if(i<pfinal)
    {
        ordenar(a,i,pfinal);
    }
}

void imprimir(int a[], int pinicial, int pfinal)
{
    ofstream archivo;
    archivo.open("quicksort.txt",ios::app);
    archivo<< "Arreglo ordenado: ";
    for(int i=0;i<pfinal;i++)
    {
        archivo<< "|" <<a[i]<< "|";
        cout<< "|" <<a[i]<< "|";
    }
    archivo<<endl;
    archivo<< "Nombre del algoritmo usado: QUICKSORT\n";
    archivo<< "_______________________________________________________________\n";
    archivo.close();
}
