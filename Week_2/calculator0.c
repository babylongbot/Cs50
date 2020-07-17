#include<cs50.h>
#include<stdio.h>

int main(void)
{
    printf("This program is a simple calculator which performs the following functions:\n\n1-Add\n2-Subtract\n3-Product\n4-Divide\n5-Percent\n");
    printf("\n");
    int c = get_int("Enter corresponding int to begin functions: ");
      if(c<1||c>5)
        {
            printf("Invalid entry, try again\n");
            return 1;
        }
    printf("\n");
    float n1 = get_float("Enter number one: ");
    float n2 = get_float("Enter number two: ");

    switch(c){

    case 1:
    printf("Sum of %.2f & %.2f = %.2f\n",n1,n2,n1+n2);
    break;

    case 2:
    if(n1>n2)
    printf("Difference b/w %.2f & %.2f = %.2f\n", n1,n2,n1-n2);
    else
    printf("Difference b/w %.2f & %.2f = %.2f\n", n2,n1,n2-n1);
    break;

    case 3:
    printf("Product of %.2f & %.2f = %.2f\n",n1,n2,n1*n2);
    break;

    case 4:
    if(n1>n2)
    printf("(%.2f/%.2f) = %.2f\n",n1,n2,n1/n2);
    else
    printf("(%.2f/%.2f) = %.2f\n",n2,n1,n2/n1);
    break;

    case 5:
    printf("(%.2f = %.2f percent of %.2f)\n",n1,((n1/n2)*100),n2);
    printf("(%.2f = %.2f percent of %.2f)\n",n2,((n2/n1)*100),n1);
    break;
    }
}