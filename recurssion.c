#include<stdio.h>
int s(int f){
    if(f==0)
    {
        return 0;
    }
    return f+s(f-1);
}
int main() 
{
//function calling itself is known as recursion.
int a;
printf("Enter a number: ");
scanf("%d",&a);
printf("%d",s(a));
return 0;
}