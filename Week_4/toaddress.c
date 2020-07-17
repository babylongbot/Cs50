#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //ony int
    int n = get_int("Enter your choice : ");
    printf("The memory for %i is stored here: %p \n",n , &n);

}