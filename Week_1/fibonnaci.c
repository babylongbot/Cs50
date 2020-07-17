#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n;
    int f1=0,f2=1;
    int nt;
    n = get_int("please enter term upto which you wanna see the sequence: ");

    for(int i =0;i<=n;i++)
    {
        printf("%i ",f1);
        nt = f1+f2;
        f1 = f2; 
        f2 = nt;   
    }
    printf("\n");
    printf("\nEND\n");
}
