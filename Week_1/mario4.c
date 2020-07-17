#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int s;
    do
    {
        s=get_int("enter pyramid size: ");
    }
    while (s<1||s>10);

    for(int i=0;i<s;i++)
    { 
        for (int d=s-1;d>=i; d--)
        {
            printf(" ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
