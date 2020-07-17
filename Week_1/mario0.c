#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int w;
    do 
    {
        w = get_int("please enter desired width: ");
    }
    while (w<1);

    for(int i=0;i<w;i++)
    {
        printf("#");
    }
    printf("\n");
}
