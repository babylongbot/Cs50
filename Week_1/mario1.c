#include<cs50.h>
#include<stdio.h>

int main (void)

{
    int s;
    do
    {
        s=get_int("Please enter desired size: ");
    }
    while (s<1);
    
    for (int i =0;i<s;i++)
    {
        for (int j=0;j<s;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
