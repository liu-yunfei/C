#include<stdio.h>
int main(void)
{
    double cup;
    
    printf("Please enter the volume in cup(s): ");
    scanf("%lf",&cup);
    printf("The volume is \n%.6lf in pint(s)\n%.6lf in ounce(s)\n%.6lf in tablespoon(s)\n%.6lf in teaspoon(s)\n",cup/2,cup*8,cup*16,cup*48);

    return 0;

}