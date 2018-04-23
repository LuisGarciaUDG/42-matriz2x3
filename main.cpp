/* Programa 42
hacer un programa que almacence numeros enteros en una matriz de 2 x 3.
Imprimir la tabla y la suma de los numeros almacenados en la matriz

Estructura for y arreglos bidimencionales
Autor: Luis Alberto García Rodríguez
N° lista 11
Fecha: 17 de marzo de 2015

*/

#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main()
{
    int fila=0, columna=0, matrix [2] [3], j, i, sumaf[2],sumac[3];

for (j=0;j<2;j++)
{
    sumaf [j]=0;
}

for (j=0;j<3;j++)
{
    sumac [j]=0;
}

    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
            cout<<"introduce los valores de la matriz fila: "<<i<<" columna: "<<j<<"  ";
            cin>>matrix[i][j];
            sumaf[i]=sumaf[i]+matrix[i][j];
            sumac[j]=sumac[j]+matrix[i][j];
       }
    }

    cout<<"\n\nCreando matriz"<<"\n\n";
    Sleep(500);
    for (i=0; i<2; i++)
    {
        for (j=0; j<3; j++)
        {
        cout<<" "<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
cout<<"\n\n";

Sleep(500);
    for (i=0; i<2; i++)
    {
    cout<<"La suma de las filas es:  "<<sumaf[i]<<"\n";
    }
    cout<<"\n";

Sleep(500);
    for (i=0; i<3; i++)
    {
    cout<<"La suma de las columnas es: "<<sumac[i]<<"\n";
    }
    cout<<"\n";


system ("pause");
return 0;
}
