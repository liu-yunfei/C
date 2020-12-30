#include<stdio.h>
int main(void)
{
    double weight,height;
    char name[64];

    printf("Hello user! May I know your name? \n");
    scanf("%s",&name);
    printf("Hello %s! May I know your weight (in kilograms)? \n",name);
    scanf("%lf",&weight);
    printf("Thank you %s, may I know your height (in meters)?\n",name);
    scanf("%lf",&height);
    printf("%s, your weight is %lf, your height is %lf and your BMI is %lf.\n",name,weight,height,weight/(height*height));

    return 0;
}