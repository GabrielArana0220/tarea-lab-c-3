#include <iostream>
using namespace std;

void concatenar(char *a, char *b)
{
    while(*b!=NULL)
        *b++;
    while(*a!=NULL)
        *b++=*a++;
}

int main()
{
    char a[] = "computacion ";
    char b[] = "ciencia de la ";
    int i = 0;
    //b[14]='r';
    concatenar(a,b);
    //int i = 0;

    while(b[i]!=NULL ){
        cout<<b[i];
        i++;}
}
