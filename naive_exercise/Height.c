#include<stdio.h>
int main()
{
    double inch;
    printf("Please ennter the length in inch: ");
    scanf("%lf",&inch);
    printf("The length is %lf in centimeter(s)\n",inch*2.54);

    return 0;
}