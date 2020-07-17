#include<stdio.h>
#include<cs50.h>

int main (void)
{
    int n1 = get_float("Enter number 1: ");
    int n2 = get_float("Enter number 2: ");
    int max;
    
    if(n1>n2)
    {
        max = n1;
    }
    else
    max = n2;
    
    while(1)
    {
        if (max%n1==0&&max%n2==0)
        {
            printf("LCM of %i & %i = %i\n",n1,n2,max);
            return 0;
        }
        max++;
    }

}