#ifndef HEAPSORT_H_INCLUDED
#define HEAPSORT_H_INCLUDED

using namespace std;

void ingresar (int k[], int capacidad)
{
    for(int i=1;i<=capacidad;i++)
    {
        cout << "Ingresar el elemento: ";
        cin >> k[i];
    }

}

void headSort(int k[], int capacidad)
{
    int valor, temp, a;
    for(int i=capacidad;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            valor=k[j];
            a=j/2;
            while(a>0 && k[a]<valor)
            {
                k[j]=k[a];
                j=a;
                a=a/2;
            }
            k[j]=valor;
        }
        temp=k[1];
        k[1]=k[i];
        k[i]=temp;
    }
}

void imprimir(int k[], int capacidad)
{
    for(int i=1;i<=capacidad;i++)
    {
        cout << "|" << k[i] << "|";
    }
    cout << endl;
}

#endif // HEAPSORT_H_INCLUDED
