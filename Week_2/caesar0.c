#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    if(argc!=2)
    {
       printf("error, please try again\n");
       return 1;
    }
    else
    {
    int k = atoi(argv[1]);
    string p = get_string("Enter plaintext: ");
    int l = strlen(p);
    char c[l];

        for(int i=0; i<l; i++)

            if(isalpha(p[i]))
            {
                c[i] = (char)(int)(p[i]+k);
            }
            else
            c[i]=p[i];

    printf("ciphertext: %s", c);
    printf("\n");
    return 0;
    }
}
