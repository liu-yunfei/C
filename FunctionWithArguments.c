#include <stdio.h>
int main(void)
{
    int times;

    printf("Please enter the times: ");
    scanf("%d", &times);

    ring(times);
    return 0;
}

void ring(int number)
{
    while (--number > -1)
    {
        printf("Bell rings\a\n");
    }
}