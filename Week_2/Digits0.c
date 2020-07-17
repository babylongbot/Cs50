#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int count=0;
    int n = get_int("Enter Number: ");
    do
    {
    n=n/10;
    count++;
    }
    while(n%10!=0);
    printf("No. of digits = %i\n",count);
}