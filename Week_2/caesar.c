#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

bool check_key(string s);

int main(int argc, string argv[])
{
    if(argc !=2 || !check_key(argv[1]))
    {
        printf("error please enter key\n");
        return 1;
    }
    int k = atoi(argv[1]);

    string p = get_string("Plaintext: ");

    printf("ciphertext:");
    for (int i=0, pl=strlen(p); i<pl; i++)
    {
        char c = p[i];
        if(isalpha(c))
        {
            char m = 'A';
            if(islower(c))
                 m = 'a';
            printf("%c",(c - m + k) % 26 + m);
        }
        else
        printf("%c",c);
        }

    printf("\n");
}


bool check_key(string s)
{
    for(int i=0, len = strlen(s); i<len; i++)
    
    if(!isdigit(s[i]))
        return false;
    return true;
}
