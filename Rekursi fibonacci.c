#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jum;
    printf("Masukkan jumlah deret fibonacci: ");
    scanf("%d", &jum);
    for(int i=0;i<jum;i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n<=0||n<=1)
    {
        return n;
    }
    else
    {
        return(fibo(n-2) + fibo(n-1));
    }
}
