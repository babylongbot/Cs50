#include<cs50.h>
#include<stdio.h>

int main(void)
{
int n1 = get_int("Enter number 1: ");
int n2 = get_int("Enter number 2: ");
int gcd;

for(int i=1; i<=n1&&i<=n2; i++)
{
    if(n1%i==0&&n2%i==0)
    gcd = i;
}
printf("GCD: %i\n",gcd);
}