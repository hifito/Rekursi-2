#include <stdio.h>
#include <stdlib.h>

int fibo(int);
void iterasi(int);
void menu(int);


int main()
{
    int n;
    printf("Masukkan berapa deret fibonacci: ");
    scanf("%d", &n);
    do
        menu(n);
    while(1);
}

void menu(int n)
{
    int pilih;
    printf("\nMenu\n");
    printf("1. Iterasi\n");
    printf("2. Rekursi\n");
    printf("3. Keluar\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilih);
    fflush(stdin);
    if(pilih==1)
    {
        iterasi(n);
        puts("");
    }
    else if(pilih==2)
    {
        for(int i=0; i<n; i++)
        {
            printf("%d ", fibo(i));
        }
        puts("");
    }
    else
    {
        exit(0);
    }
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

void iterasi(int n)
{
    int hasil;
    static int fibo1;
    static int fibo2;
    fibo1=0;
    fibo2=0;
    for(int i=0; i<n; i++)
    {
        hasil=fibo1+fibo2;
        printf("%d ", hasil);
        if(hasil==0)
            fibo2=1;
        else
        {
            fibo1=fibo2;
            fibo2=hasil;
        }
    }
}
