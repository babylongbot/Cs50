#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int a,b,t;
    a=get_int("enter number one: ");
    b=get_int("enter number two: ");

    t = a;
    a = b;
    b = t;

    printf("BOOM\n Number one = %i\n Number two = %i\n",a,b);
}
