#include<cs50.h>
#include<stdio.h>

bool check_validity(long long cd_number);
int find_length(long long cd_number);
bool check_sum(long long cd_number);
void printcdbrand(long long cd_number);

int main (void)
{
    long long cd_number;
    do
    {
        cd_number = get_long_long("Please enter your card number: ");
    }while(cd_number<0);

    if(check_validity(cd_number)==true)
        printcdbrand(cd_number);
    else
        printf("INVALID CARD\n");
} 

bool check_validity(long long cd_number)
{
    int len = find_length(cd_number);
    if((len==13||len==15||len==16)&&(check_sum(cd_number)==true))
        return true;
    else
        return false;
}

int find_length(long long cd_number)
{
    int len;
    int n = cd_number;
    for(len=0 ; n!=0 ; n=n/10)
    len++;
    return len;
}

bool check_sum(long long cd_number)
{
    int sum=0;
    for(int i=0; cd_number!=10;i++,cd_number=cd_number/10)
    {
        if(i%2==0)
        sum = sum+cd_number%10;
        else
        {
            int digit = 2*(cd_number%10);
            sum = digit/10+digit%10;
        }
    }
    return ((sum%10)==0);
}

void printcdbrand(long long cd_number)
{
    if((cd_number>=34e13 && cd_number<35e13)||(cd_number>=37e13 && cd_number<38e13))
    {    
        printf("AMEX\n");
    }
    else if(cd_number>=51e14 && cd_number<56e14)
    {
        printf("MASTERCARD\n");
    }
    else if((cd_number>=4e12 && cd_number<5e12)||(cd_number>=4e15 && cd_number<5e15))
    {
        printf("VISA\n");
    }
    else
    printf("INVALID\n");
}
