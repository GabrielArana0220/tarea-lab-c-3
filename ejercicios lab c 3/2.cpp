#include <iostream>
using namespace std;

void invertir (int *a, int *b)
{
    int au = *a;
    *a=*b;
    *b=au;
}

void voltear_iterativa(int *lista, int tamano)
{
    for (int i = 0;i<tamano; i++)
        invertir(lista++, (lista + --tamano-i));
}



void voltear_recursiva(int *lista, int tamano, int x)
{
    if (tamano==x/2)
        return;
    invertir(lista, (&lista[--tamano - (x-tamano)+1]));
    return voltear_recursiva(++lista, tamano, x);
}

void print(int *lista, int tamano)
{
    for (int i = 0;i < tamano; i++)
        cout << *lista++ << " ";
}

int main()
{
    int lista[10]={1,2,3,4,5,6,7,8,9,10};
    //voltear_iterativa(lista, 10);
    //print (lista,10);
    voltear_recursiva(lista, 10, 10);
    print (lista,10);
}
