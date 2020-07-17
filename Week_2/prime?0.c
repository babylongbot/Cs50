#include<cs50.h>
#include<stdio.h>

int main(void)

{
    int n = get_int("Enter no. to be checked: ");
    int fcount = 0;
    int f[n];
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        fcount++;
        f[i]=i;
    }
    if(fcount<=2)
    printf("%i is prime\n",n);

    else
    {
        printf("%i is not prime\n",n);
        for(int j = 0; j<=fcount; j++)
        {
        printf("factors are %i\n",f[j]);
        }
    }
}