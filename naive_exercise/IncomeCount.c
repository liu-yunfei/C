#include<stdio.h>
int main(void)
{
    int month;

    printf("Please enter your month income: ");
    scanf("%d",&month);
    printf("Your yearly income is %d.\n",month*12);

    return 0;
}