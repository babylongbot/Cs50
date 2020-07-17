#include<cs50.h>
#include<stdio.h>

int main(void)
{
    //this program takes input of three numbers and reports which is largest
    int one=get_int("number 1: ");
    int two=get_int("number 2: ");
    int thr=get_int("number 3: ");

    if(one>two&&one>thr)
    {
        printf("%i is the greatest of these numbers\n",one);
    }
    else if(two>one&&two>thr)
    {
        printf("%i is the greatest of these numbers\n",two);
    }
    else
    printf("%i is the greatest of these numbers\n",thr);
    //this extension will check for smallest number
    if(one<two&&one<thr)
    {
        printf("%i is the smallest of these numbers\n",one);
    }
    else if(two<one&&two<thr)
    {
        printf("%i is the smallest of these numbers\n",two);
    }
    else
    printf("%i is the smallest of these numbers\n",thr);
    
}
