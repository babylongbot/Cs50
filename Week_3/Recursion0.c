// this program will sum all natural numbers upto an input taken from user
#include<cs50.h>
#include<stdio.h>

int sum(int a);

int main(void)
{
    int i = get_int("Please enter no. upto which you want sum: ");
    int s = sum(i);
    printf("Sum of natural numbers upto %i = %i\n",i,s);

}

int sum(int a)
{
    if(a!=0)
        return a + sum(a-1);
    else
    return a;
}