#include<stdio.h>
int main()
{
    int a,i;
    printf("enter no, you want table for:",a);
    scanf("%d",&a);
    for (i=1;i<=10;i++)
    {
        printf("%d\t",a*i);
        printf("%d X %d =%d\n ",a,i,a*i);
    }
    return 0;
}