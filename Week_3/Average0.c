#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int n = get_int("Enter number of terms to be computed: ");
    int s[n];
    for(int i = 0; i<n; i++)
    {
        s[i+1]=get_int("Enter term no. %i: ",i+1);
    }
    int sum = 0;
    for(int j = 0; j<=n; j++)
    {
        sum = sum + s[j];
    }
    float avg = sum/n;
    printf("Average = %.2f",avg);
}