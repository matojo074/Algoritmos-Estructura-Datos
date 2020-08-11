#include <iostream>
#include <fstream>

using namespace std;
const int Max = 100;

int busqueda (int a[], int n, int dato);
void imprimir();


void ingresar_busqueda(int a[], int b);

int main()
{
    int num;
	int arreglo[Max];
	cout << "Ingrese el tamanio del arreglo: ";
	cin >> num;
	ingresar_busqueda(arreglo, num);

    return 0;
}

void ingresar_busqueda(int a[], int b)
{
	int buscado;
	bool verdad = 0;
    int posicion = 0;
    ofstream archivo;
    archivo.open("Lineal.txt");
	for(int i = 0; i < b; i++)
	{
		cout<< "Ingrese el elemento " << i+1<< ": ";
        cin>> a[i];
	}
	cout<< "Ingrese el elemento que desea buscar: ";
	archivo << "Ingrese el elemento que desea buscar: ";
    cin >> buscado;
    archivo << buscado;
    archivo << endl;

    for (int i = 0; i < b; i++)
    {
        if(a[i] == buscado)
        {
            verdad = 1;
            posicion = i + 1;
        }
    }
    if ( verdad == 1)
    {
    	cout << "El elemento se encuentra en la posicion " << posicion << endl;
        archivo << "El elemento se encuentra en la posicion " << posicion << endl;

	}
	else
	{
		    cout << "Elemento no encontrado " << endl;
		    archivo << "Elemento no encontrado " << endl;

		}

    archivo.close();
}


void imprimir()
{
    int b,c;
    cout<< "Ingrese la extencion de su arreglo: ";
    cin>> b;
    int a[b];
    for (int i=0; i<b; i++)
    {
        cout<< "Ingrese el elemento " << i+1<< ": ";
        cin>> a[b];
    }
    cout<< "Ingrese el elemento que desea buscar: ";
    cin>> c;
    if(busqueda(a,b,c)==-1)
    {
        cout<<"No existe un elemento.";
    }
    else
    {
        cout<<"El elemento esta en la posicion "<<busqueda(a,b,c);
    }
}


int busqueda (int a[], int n, int dato)
{

    for (int i=0; i<=n; i++)
    {
        if(a[i]==dato)
        {
            return i;
        }
    }
    return -1;
}
