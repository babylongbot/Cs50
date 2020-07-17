#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n1,n2,i;
    int f=1;
    n1 = get_int("Enter number for which factorial is to be computed: ");
    n2=n1;
    for(i=0;i<=n1;i++)
    {
        i++;
        f = f*i;
    }
    printf("Factorial of %i = %i\n",n2,f);

}
