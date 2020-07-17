#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int q0 = get_int("Enter Number of values to be stored in array: ");
    int store[q0];
    int max;

    for(int i = 0; i < q0; i++)
    {
        store[i] = get_int("Enter value number %i: ",i+1);
    }
    for(int i = 0; i < q0; i++)
    {
        if(store[i]>store[i-1])
        {
            max = store[i];
        }
    }
    printf("MAX: %i\n",max);
}