#include<stdio.h>
int main()
{
    int a,i;
    printf("enter no, you want table for:",a);
    scanf("%d",&a);
    //i++ = i+1 can also be i+2,i+3,i+4 etc for 2,3,4 skips 
    for (i=1;i<=10;i++)
    {
        printf("%d\t",a*i);
        printf("%d X %d =%d\n ",a,i,a*i);
    }
    printf("reverse table of %d is:\n",a);
    for(i=10;i>=1;i--)
    {
        printf("%d\t",a*i);
        printf("%d X %d =%d\n ",a,i,a*i);
    }
    return 0;    
}