#include<cs50.h>
#include<stdio.h>

int main(void)

{
    int s;
    int i;
    int j;
    do
    {
        s=get_int("please enter pyramid size: ");
    }
    while(s<1);

    for(i=0; i<=s; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}
