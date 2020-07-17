#include<cs50.h>
#include<stdio.h>

int main(void)
{
    int q0 = get_int("Enter size of matrices: ");

    int m0[q0][q0];
    int m1[q0][q0];
    int m2[q0][q0];

    printf("Matrice 1:\n");
    for(int i = 0; i<q0; i++)
    {
        for(int j = 0; j<q0; j++)
        {
            m0[i][j] = get_int("Value at %i,%i: ",i+1,j+1);
        }
    }

    printf("Matrice 2:\n");
    for(int i = 0; i<q0; i++)
    {
            for(int j = 0; j<q0; j++)
            {
                m1[i][j] = get_int("Value at %i,%i: ",i+1,j+1);
            }
    }
    printf("Product of Matrice 1 & Matrice 2:\n");
    for(int i = 0; i<q0; i++)
    {
        
    }
}