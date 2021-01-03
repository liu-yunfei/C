#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed (q to quit): ");
    while (scanf("%ld", &num) == 1)
    {
        sum += num;
        printf("Please enter next integer (q to quit): ");
    }
    printf("The sum is %ld.\n", sum);

    return 0;
}