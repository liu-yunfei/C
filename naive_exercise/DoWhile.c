#include <stdio.h>
int main(void)
{
    const int CODE = 13;
    int code_entered;

    do
    {
        printf("Please enter the code number: ");
        scanf("%d",&code_entered);
    } while (code_entered != CODE);
    printf("Done!\n");

    return 0;
}