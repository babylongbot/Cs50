#include <cs50.h>
#include <stdio.h>

int main (void)

{
    int x = get_int("Please enter number 1: ");
    int y = get_int("Please enter number 2: ");
   
    if (x<y)
    {
        printf("Y is greater by %i \n",y-x);
    }
    else if (x>y)
    {
        printf("X is greater by %i \n",x-y);
    }
    else 
    {
        printf("X = Y\n");
    }

}
