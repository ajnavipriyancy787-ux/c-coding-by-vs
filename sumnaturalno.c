#include<stdio.h>
int main()
{
    int sum =0,n;
    printf("Give no. till you want sum:",n);
    scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
           sum = sum+i;
//here if we declare sum inside for loop it will show sum undeclared error because sum is declared inside for loop
//so it is local variable so printf outside for loop will not acess sum and say it is undeclared
        }
        printf("%d\n",sum);
        return 0;
}