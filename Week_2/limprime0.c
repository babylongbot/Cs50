#include<stdio.h>
#include<cs50.h>

int main(void)

{
    printf("this program will display prime numbers between two ints.\n");
    int l = get_int("enter lower limit: ");
    int u = get_int("enter upper limit: ");
    int x = l;

    do
    {
        int counter = 0;
        int c = l;
        for(int i=1;i<c;i++)
        {
            if(c%i==0)
            counter++;
        }
        if(counter<2)
            {
            printf("%i ",c);
            }
        l++;
    }while(l<u);
    printf("\nare the prime numbers between %i & %i",x,u);
}
