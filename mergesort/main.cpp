#include <iostream>
#include <fstream>

using namespace std;

void arreglo(int a[], int k);
void dividir(int a[], int inicial, int fin);
void fusionar(int a[],int pinicial, int pfinal, int medio);

int main()
{
    int tamanio;
    cout<< "Ingrese el tamanio del arreglo: ";
    cin>>tamanio;
    int vec[tamanio];
    arreglo(vec,tamanio);
    dividir(vec, 0, tamanio);
    ofstream archivo;
    archivo.open("Mergesort.txt",ios::app);
    archivo<< "El arreglo ordenado es: \n";
    for (int i = 0; i < tamanio; i++)
	{
	    cout<<"|"<<vec[i]<<"|";
	    archivo<<"|"<<vec[i]<<"|";
	}
	archivo<<endl;
	archivo<< "_____________________________________________________\n";
	archivo.close();
    return 0;
}

void arreglo(int a[], int k)
{
    int i;
    ofstream archivo;
    archivo.open("Mergesort.txt",ios::app);
    for (i=0;i<k;i++)
    {
        cout<< "Ingrese el elemento " <<i+1<< " : ";
        cin>>a[i];
    }

    archivo<< "Algortimo utilizado: Mergesort.\n";
    archivo<< "El arreglo inicial es: "<<endl;
    for (i=0;i<k;i++)
    {
        cout<< "|" <<a[i]<< "|";
        archivo<< "|" <<a[i]<< "|";
    }
    cout<<endl;
    archivo<<endl;
    archivo.close();
}

void dividir(int a[], int inicial, int fin)
{
    int mitad;
    if (inicial < fin)
	{
		mitad=(inicial+fin)/2;

		dividir(a,inicial,mitad);
		dividir(a,mitad+1,fin);
		fusionar(a,inicial,fin,mitad);
	}
}

void fusionar(int a[],int pinicial, int pfinal, int medio)
{
    int i, j, k, temp[pfinal-pinicial+1];
	i = pinicial;
	k = 0;
	j = medio + 1;

	while (i <= medio && j <= pfinal)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	while (i <= medio)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	while (j <=pfinal)
	{
		temp[k] = a[j];
		k++;
		j++;
	}

	for (i = pinicial; i <= pfinal; i++)
	{
		a[i] = temp[i-pinicial];
	}
}
