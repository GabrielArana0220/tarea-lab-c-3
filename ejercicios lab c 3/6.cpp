#include <iostream>
using namespace std;

void agregar(char *a, char *b)
{
    while (*b!=NULL)
        *a++=*b++;

}
int main()
{
    char b[] = "dsfasdfsasaf";
    char a[] = "computacion";
    agregar(b,a);
    int i=0;
    while (b[i]!=NULL)
    {
        cout << b[i];
        i++;
    }
}
