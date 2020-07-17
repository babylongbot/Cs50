#include<cs50.h>
#include<stdio.h>
int main (void)
{
    float i = get_float("How much money do you want to change(in US$) ? ");
    printf("total change = $%.2f\n",i);
    int c = i*100;
    int c1 = c/25;
    int r = c%25;
    int c2 = r/10;
    r = r%10;
    int c3 = r/5;
    r = r%5;
    int c4 = r/1;
    r = r%1;
    printf("25¢ coins = %i\n10¢ coins = %i\n5¢ coins = %i\n1¢ coins = %i\n",c1,c2,c3,c4);
    printf("Total number of coins to be returned = %i\n",c1+c2+c3+c4);
}
