#include<stdio.h>
void bell(void);
int main(void)
{
    printf("Now I am going to ring the bell!\n");
    bell();
    bell();
    printf("The bell rang 2 times.\n");

    return 0;
}

void bell(void)
{
    printf("The bell is ringing\a\n");
}
