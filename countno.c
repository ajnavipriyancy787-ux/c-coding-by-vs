#include<stdio.h>
int main()
{
    int a;
    int count=0;
        printf("Enter a number a:");
        scanf("%d",&a);
        while(a>0)
        {
            a=a/10;
            count++;
        }
        printf("The number of digits in the given number is %d",count);
        return 0;
    }