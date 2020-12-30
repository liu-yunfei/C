#include<stdio.h>
#define PAGES 959
#define BLRUB "Authentic imitation!"
int main(void)
{
    printf("*%d*\n",PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
    printf("[%2s]\n",BLRUB);
    printf("[%24s]\n",BLRUB);
    printf("[%24.5s]\n",BLRUB);
    printf("[%-24.5s]\n",BLRUB);
    
    return 0;
}