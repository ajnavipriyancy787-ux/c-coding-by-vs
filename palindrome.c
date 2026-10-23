#include<stdio.h>
int main(){
    int a;
    printf("Give a number to check palindrome:",a);
    scanf(" %d",&a);
    int original=a;
    int r=0;
    while(a>0)
    {
        int rem=a%10;
        r=r*10+rem;
        a=a/10;
    }
    if (original==r)
    {
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome");
    }
    return 0;
}