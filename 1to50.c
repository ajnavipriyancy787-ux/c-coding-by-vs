#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=50;i++)
    {
        printf("%d\t",i);
    }
    for(i=50;i>=1;i--)
    {
        printf("%d\t",i);
    }
    return 0;
}