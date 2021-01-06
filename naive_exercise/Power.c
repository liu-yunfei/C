#include<stdio.h>
double power(double n, int p);
int main(void)
{
    double x, xPow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\nthe number will be raised. Enter q to quit \n");
    while (scanf("%lf%d",&x,&exp) == 2)
    {
        xPow = power(x,exp);
        printf("%.3g to the power %d is %.5g\n",x,exp,xPow);
        printf("Enter next pair of numbers or q to quit.\n");
        
    }
    printf("Hop you enjoyed this power trip --bye! \n");

    return 0;
}

double power(double n, int p)
{
    double pow = 1;
    int i;

    for (i = 1; i<=p;i++)
        pow *= n;
    
    return pow;
}