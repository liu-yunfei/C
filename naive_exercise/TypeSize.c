#include<stdio.h>
int main()
{
    /* This program works on Win32 computer*/
    printf("Int size: %zd bytes.\n",sizeof(int));
    printf("Char size: %zd bytes.\n",sizeof(char));
    printf("Long size: %zd bytes.\n",sizeof(long));
    printf("Long long size: %zd bytes.\n",sizeof(long long));
    printf("Float size: %zd bytes.\n",sizeof(float));
    printf("Double size: %zd bytes.\n",sizeof(double));
    printf("Long double: %zd bytes.\n",sizeof(long double));
    return 0;
}