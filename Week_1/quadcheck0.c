#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c;
    a = get_float("Please enter co-efficient a: ");
    b = get_float("Please enter co-efficient b: ");
    c = get_float("Please enter co-efficient c: ");
    float d = b*b-4*a*c;
    float r1, r2;

    if (d==0)
    {
        printf("Roots are real & equal\n");
        r1 = r2 = -b / (2*a);
        printf("Root 1 = Root 2 = %.2f\n",r1);
    }
    else if(d>0)
    {
        printf("Roots are real & different\n");
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Root 1 = %.2f Root 2 = %.2f\n",r1,r2);
    }
    else
    {
        float rp,ip;
        printf("Roots are imaginary\n");
        rp = (-b / (2*a));
        ip = (sqrt(-d)/ (2*a));
        printf("Root 1 = %.2f + i(%.2f) Root 2 = %.2f - i(%.2f)\n",rp,ip,rp,ip);
    }

}
