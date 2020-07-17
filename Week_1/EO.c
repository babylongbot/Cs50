#include <cs50.h>
#include <stdio.h>

int main(void)

{
  int in= get_int("Please enter the number you want to check: ");
  if (in%2==0)
  {
    printf("Input is even\n");
  }
  else 
  {
    printf("Input is odd\n");
  }
}
