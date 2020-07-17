// The program outputs GCD of two integers:

#include<cs50.h>
#include<stdio.h>

int hcf(int a, int b);

int main ()
{
    int a = get_int("Enter number 1 : ");
    int b = get_int("Enter number 2 : ");
    int h =hcf(a,b);
    printf("GCD of %i & %i = %i",a,b,h);
    return 0;
}

int hcf(int a, int b)
{
    if(b != 0)
    return hcf(a, a % b);
    else
    return a;
}