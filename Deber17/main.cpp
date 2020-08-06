#include <iostream>
#include <locale.h>

using namespace std;

const int e = 10;

void ingresar(int a[]);
void imprimir(int a[]);


int main()
{
	setlocale(LC_ALL, "spanish");
	int arreglo[e];
	cout<< "\t BIENVENIDO A DE PRATI\n" <<endl;
	ingresar(arreglo);
	imprimir(arreglo);
	return 0;
}

void ingresar(int a[])
{
	for(int i = 0; i < e;i++)
	{
		do
		{
		    cout << "Ingrese el número entero " << i + 1 << " : ";
		    cin >> a[i];
	    }while(a[i] < 50 || a[i] > 100 );

	}

}

void imprimir(int a[])
{
	double arreglo2[e];
	cout<< "_________________________________________________________________" <<endl;
	cout << "Arreglo ingresado por usuario" << endl;
	for(int i = 0; i < e;i++)
	{
		cout << a[i] << " | ";
	}
	cout << endl;
	cout<< "_________________________________________________________________" <<endl;
	cout << "Arreglo multiplicado por 0.5" << endl;
	for (int i = 0; i < e; i++ )
	{
		arreglo2[i] = a[i] * 0.5;
		cout << arreglo2[i] << " | ";
	}
	cout << endl;
}
