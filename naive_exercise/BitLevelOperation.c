#include <stdio.h>
#include <string.h>
char *change(int val, int base, char *retbuf )
{
    static char    *str = "0123456789ABCDEF";
    char *p;
    char buf[15];

    p = buf+14;
    *p = 0;

    do { *--p = str[val % base]; } while( val /= base );
    strcpy(retbuf,p);
    return retbuf;
}

int main() {
    int code=157;
    char value[100];
    change(code,10,value);
    printf("The bin form is %s",change(code,2,value));
    printf(" oct form is %s",change(code,8,value));
    printf(" dec form is %s",change(code,10,value));
    printf(" hex form is %s\n", change(code,16,value));
    int x;
    scanf("%d",&x);
    x=x | (x>>1);
    x=x | (x>>2);
    x=x | (x>>4);
    printf("%d\n",x);
    x=x-(x>>1);
    printf("%d\n",x);
    return 0;
}
