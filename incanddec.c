#include<stdio.h>
int main()
{
    int a=0,b=1;
    if(a++||b++)
    {
        printf("ok\n");
    }
    printf("%d\n",a);
    printf("%d\n",b);
}