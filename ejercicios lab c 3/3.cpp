#include <iostream>
using namespace std;

void inver(int *x, int *y)
{
    int f;
    f = *x;
    *x=*y;
    *y=f;

}

void sorting(int *x,int f)
{
    int y=0;
    int menor=0;
    while(y<f){
        for(int i=y;i<f;i++)
            if (x[menor]>x[i])
                menor=i;
        inver((x+menor),(x+y));
        y++;
        menor=y;
        }
}
int main()
{
    int p[12]={8,2,7,4,87,6,9,1,12,10,11,34};

    //invertir(p,10);
    sorting(p,12);
    for(int i = 0; i<12;i++)
        cout << p[i]<<" ";
}
