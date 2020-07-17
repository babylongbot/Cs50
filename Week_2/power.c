#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n1 = get_int("enter base int: ");
    int n2 = get_int("enter exp: ");
    int pr=1;
    int e = n2;
    do
    {
        pr = pr*n1;
        e--;
    }
    while(e!=0);
    printf("%i raised to %i = %i\n", n1, n2, pr);
    
}