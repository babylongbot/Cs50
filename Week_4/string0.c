#include<cs50.h>
#include<stdio.h>
#include<string.h>

int main (void)
{
    char *s = get_string("What is your name: ");

    printf ("%s, your name is stored at : " ,s);
    printf("%p\n",&s);
    for(int i = 0, n = strlen(s); i<n; i++)
    {
    printf("                                %p\n",&s[i]);
    }
}