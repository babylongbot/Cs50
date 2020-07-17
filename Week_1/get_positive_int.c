#include<cs50.h>
#include<stdio.h>

int get_positive_int(void)
{
    int n;
    do
    {
        n=get_int("Enter number: ");

    }
    while (n<1);
    return n;
}

int main (void)

{
    int i =get_positive_int();
    printf("Number entered is: %i \n",i);

}


