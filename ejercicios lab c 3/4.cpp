#include <iostream>
using namespace std;

int tamano_recursivo(char * x, int y = 0)
{
    if(*(x+y)==NULL)
        return 0;
    return 1 + tamano_recursivo(x,++y);
}

int tamano(char *x)
{
    int t=0;

    while(*(x+t)!=NULL){
        t++;
    }
    return t;
}


int main()
{
    char x[100] = "ciencia de la computacion 2";
    cout << tamano_recursivo(x);
    //cout << tamano(x);
}
