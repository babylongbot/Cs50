#include<stdio.h>

int main(void)
{
    int n,i,sum;
    sum=0;
    printf("enter number to sum upto: ");
    scanf("%d", &n);

    for(i=0 ; i<=n ; i++)
    {
        sum =sum+i;    
    }
    printf("Sum upto %i = %i\n",n,sum);
    return 0;
}
