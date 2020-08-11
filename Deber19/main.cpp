#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <cstdlib>

using namespace std;

void pantalla(int a);

int main()
{
    int i;
    cout<< "Ingrese el numero de niveles de la piramide: ";
    cin>> i;
    pantalla(i);
    return 0;
}

void pantalla(int a)
{
    ofstream archivo;
    archivo.open("Piramideinversa.txt");
    archivo<< "Ingrese el numero de niveles de la piramide: " ;
    archivo<<a<<endl;
    while (a>0)
    {
        int j=1;
        while (j<=a)
        {
            if (a%2==0)
            {
                cout << "* ";
                archivo << "* ";
            }
            else
            {
                cout<<  "- ";
                archivo << "- ";
            }
            j++;
        }
        cout <<endl;
        archivo <<endl;
        a--;
    }
    archivo.close();
}


