#include<stdio.h>
int main(void)
{
    float number;
    char name[40];

    printf("Enter your name: ");
    scanf("%s",&name); //Question: In C Primer Plus 6th, it said not use & when reading a string into a character array, but it is ok to use it here.
    printf("Enter your chosen number: ");
    scanf("%f",&number);
    printf("Hello %s, your number is %f.\n",name,number);

    return 0;

}