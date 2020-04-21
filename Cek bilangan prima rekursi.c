#include <stdio.h>
#include <stdlib.h>

int n;

int cekPrima(int p)
{
    if(p == 1)
    {
        return 1;
    }
    else if(n%p==0)
    {
        return 0;
    }
    else
    {
        return cekPrima(p-1);
    }
}

int main()
{
    printf("masukkan nilai :");
    scanf("%d",&n);
    if(n>1)
    {
        int p = cekPrima(n-1);
        if(p == 1)
        {
            printf("%d bilangan PRIMA",n);
        }
        else
        {
            printf("%d bilangan BUKAN PRIMA",n);
        }
    }
    else
    {
        printf("%d bilangan BUKAN PRIMA",n);
    }
}
