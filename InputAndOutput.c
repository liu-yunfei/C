#include<stdio.h>
int main()
{
    printf("Please enter your name:");
    char name[255];
    scanf("%s",&name);
    printf("Your name is %s\n",name);
    return 0;
}