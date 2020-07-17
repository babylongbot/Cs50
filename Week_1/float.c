#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float price = get_float("Please enter the price for product: ");
    printf("Your total price(wih tax) =$%.2f \n",price*1.12);

}
