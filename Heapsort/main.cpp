#include <iostream>
#include <fstream>

using namespace std;

void HeapSort(int b[], int n);

int main()
{
    int A[100],n;
    ofstream archivo;
    archivo.open("heapsort.txt", ios::app);
    cout<<"Ingresa la cantidad de elementos del arreglo: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cout<< "Digite el elemento: ";
        cin >> A[i];
    }
    archivo<< "Arreglo original: ";
    for(int i=1;i<=n;i++)
    {
        archivo<< "|" <<A[i]<< "|";
    }
    archivo<<endl;
    HeapSort(A,n);
    cout<<"El orden es:";
    archivo<< "Arreglo ordenado: ";
    for(int i=1;i<=n;i++)
    {
        cout<< "|" <<A[i]<< "|";
        archivo<< "|" <<A[i]<< "|";
    }
    cout<<endl;
    archivo<<endl;
    return 0;
}

void HeapSort(int b[], int n)
{
    int valor,temp,a;

    for(int i=n; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            valor=b[j];
            a=j/2;
            while(a>0 && b[a]<valor)
            {
                b[j]=b[a];
                j=a;
                a=a/2;
            }
            b[j]=valor;
        }
        temp=b[1];
        b[1]=b[i];
        b[i]=temp;
    }

}
