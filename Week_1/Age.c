#include <cs50.h>
#include <stdio.h>
// this program shows a persons age in days lived
int main (void)
{
    int age = get_int("please enter your current age: ");
    printf("you are currently ~%i days old\n",age*365);
}
