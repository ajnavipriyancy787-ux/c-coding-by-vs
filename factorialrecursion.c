#include<stdio.h>

int s(int f)
{
    if (f == 1)
    {
        return 1;
    }
    return f*s(f-1);
}

int main()
{
    int a;
     printf("Enter a number: ");
     scanf("%d",&a);
    printf("%d",s(a));
    return 0;
}