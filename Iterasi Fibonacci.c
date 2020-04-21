#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Masukkan jumlah deret fibonacci: ");
    scanf("%d", &n);
    fibo(n);
    return 0;
}

void fibo(int n)
{
    int hasil;
    static int fibo1;
    static int fibo2;
    fibo1=0;
    fibo2=0;
    for(int i=0;i<n;i++)
    {
        hasil=fibo1+fibo2;
        printf("%d ", hasil);
        if(i==0)
            printf("0");
        if(hasil==0)
            fibo2=1;
        else
        {
            fibo1=fibo2;
            fibo2=hasil;
        }
    }
}
