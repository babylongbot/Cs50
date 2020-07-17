#include<cs50.h>
#include<stdio.h>

int main(void)

{
    int s,i,j,p;

    do
    {
        s=get_int("please enter pyramid size: ");
    }
    while(s<1||s>8);
    for(i=0; i<s; i++)
       {
            for(j=0; j<s; j++)
              {
                  if (i+j<s-1)
                  {
                      printf(" ");
                  }
                  else
                  {
                      printf("#");
                  }
              }
            printf("\n");
        }
}
