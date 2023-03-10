#include <stdio.h>

int faktorial(int p)
{
    if(p==0)return 1;
    else return p* faktorial(p-1);
}
float pangkat(float p, int n)
{
    float nilai =1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n ; ++i)
        {
         nilai=nilai*p;
        }
    }
    return nilai;
}

float cos(float x)
{
    float hasil=0;
    int i;
    if(x<0)
    {
        x=x*-1;
    }
    for (int i = 0; i <= 10 ; ++i)
    {
     hasil=hasil+((pangkat(-1,i)* pangkat(x,2*i))/faktorial(2*i) );
    }
    return hasil;
}

int main()
{
    printf("hasil dari 4! = %d\n", faktorial(4));
    printf("hasil dari 2 pangkat 10 = %.2f\n", pangkat(2,10));
    printf("hasil dari cos(3.14/2) = %.2f", cos(3.14/2));
}
