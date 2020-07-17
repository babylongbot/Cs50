#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

bool key_check(string s);

int main (int argc, string argv[])
{
    if(argc!=2 || !key_check(argv[1]))
    {
        printf("command line arg error\n");
        return 1;
    }
    else
    {
    string p = get_string("Plaintext: ");
    int l = strlen(p);

    string key = argv[1];
    int kl = strlen(key);

    printf("ciphertext: ");
    for(int i = 0; i<l; i++)
    {
        char c = p[i];
    if(!isalpha(c))
    {
        printf("%c",c);
    }
    else
    {
        for(int j = 65, n = 97,f=0;j<90&&n<122;j++, n++, f++)
        {
            if((int)c==j)
            printf("%c",toupper(key[f]));

            else if((int)c==n)
            printf("%c", tolower(key[f]));
        }
    }
    }
    printf("\n");
}
}


bool key_check(string s)
{
    for(int i = 0, len = strlen(s); i<len ; i++)
    {
        if(isdigit(s[i]))
        return false;
    }
    if(strlen(s)!=26)
    return false;

    return true;
}