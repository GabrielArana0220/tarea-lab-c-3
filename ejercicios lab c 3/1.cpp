#include <iostream>
using namespace std;

int suma_elementos(int *lista, int tamano)
{
    int suma=0;
    for (int i = 0;i<tamano;i++)
        suma+=*lista++;
    return suma;
}

int suma_elementos_recursiva(int *lista, int tamano)
{
    if( tamano == 0)
        return 0;
    return *lista++ + suma_elementos_recursiva(lista, --tamano);
}

int main()
{
    int lista[10]={1,2,3,4,5,6,7,8,9,10};
    cout << suma_elementos(lista,10)<<endl;
    cout << suma_elementos_recursiva(lista,10)<<endl;
}
