#include <iostream>
#include "heapSort.h"

using namespace std;

void ingresar (int k[], int capacidad);
void headSort(int k[], int capacidad);
void imprimir(int k[], int capacidad);

int main()
{
    int tamanio;
    cout << "Ingrese el tamano del vector: ";
    cin >> tamanio;
    int K[tamanio];
    ingresar (K,tamanio);
    headSort (K,tamanio);
    imprimir (K,tamanio);
    return 0;
}
