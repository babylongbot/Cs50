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
            m0[i][j] = get_int("Value at %i,%i: ",i,j);
        }
    }

    printf("Matrice 2:\n");
    for(int i = 0; i<q0; i++)
    {
            for(int j = 0; j<q0; j++)
            {
                m1[i][j] = get_int("Value at %i,%i: ",i,j);
            }
    }

    for(int i = 0; i<q0; i++)
    {
            for(int j = 0; j<q0; j++)
            {
                m2[i][j] = m0[i][j] + m1[i][j];
            }
    }

    printf("\nSum:\n");
    for(int i = 0; i<q0; i++)
    {
        for(int j = 0; j<q0; j++)
           {
               printf("%i ",m2[i][j]);
                if(j==q0-1)
                    printf("\n");
           }
    }
}