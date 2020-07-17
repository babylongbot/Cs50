#include<cs50.h>
#include<stdio.h>

bool check_prime(int a);

int main (void)
{
    int c = get_int("enter integer to be checked: ");
    for(int i = 1; i<c;i++)
    {
         int a = c-i;
         int b = c-a;
         if(check_prime(a)==true&&check_prime(b)==true)
            {
                printf("%i = %i + %i\nwhere %i & %i are both prime\n",c,a,b,a,b);
                return 0;
            }
    }
    printf("%i cannot be expressed as a sum of two prime numbers\n",c);
}

bool check_prime(int a)
{
    int fcount = 0;
    for(int i = 1; i<=a;i++)
    {
        if(a%i==0)
        fcount++;
    }
    
    if (fcount>2)
    {
    return false;
    }
    else
    return true;

}