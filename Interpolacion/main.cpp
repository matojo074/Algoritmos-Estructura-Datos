#include <iostream>
#include <fstream>

using namespace std;

void arreglo(int a[], int b);
void ordenar(int a[], int b);
void busqueda(int a[], int b);

int main()
{
    int tamanio;
    cout<< "Ingrese el tamanio del arreglo: ";
    cin>>tamanio;
    int vec[tamanio];
    arreglo(vec, tamanio);
    ordenar(vec, tamanio);
    busqueda(vec, tamanio);
    return 0;
}

void arreglo(int a[], int b)
{
    for (int i=0;i<b;i++)
    {
        cout<< "Ingrese el elemento "<<i+1<< " : ";
        cin>>a[i];
    }
}

void ordenar(int a[], int b)
{
    ofstream archivo;
    archivo.open("interpolacion.txt",ios::app);
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

    archivo<<"Arreglo de elementos: ";
    for (int i=0; i<b; i++)
    {
        archivo<< "[" <<a[i]<< "] ";
    }
    archivo<<endl;
    archivo.close();
}

void busqueda(int a[], int b)
{
    ofstream archivo;
    archivo.open("interpolacion.txt",ios::app);
    int primero=0;
    int ultimo=b-1;
    int medio;
    int n;
    int contador=0;
    cout<< "Ingrese el elemento a buscar: ";
    cin>>n;
    archivo<< "Elemento a buscar: "<<n<<endl;
    while(a[primero]!=n && contador<b)
    {

    medio = primero + ((n-a[primero])*(ultimo-primero))/(a[ultimo]-a[primero]);

    if(a[medio]<n)
          primero = medio+1;

    else if(a[medio]>n)

          ultimo = medio-1;
    else
          primero = medio;

      contador++ ;
      break;
    }

    if(a[primero]==n)
    {
        cout<<"Elemento encontrado en: "<<medio+1<<endl;
        archivo<< "Elemento encontrado en: "<<medio+1<<endl;
    }
    else
    {
        cout<<"Elemento no encontrado."<<endl;
        archivo<<"Elemento no encontrado."<<endl;
    }
    archivo.close();
}
