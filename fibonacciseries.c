#include<stdio.h>
int main()
    {
       int first=0,second=1,n;
       printf("number till want fibonacci series:",n);
       scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
             int next=first +second;
             printf("%d\t",first);
             first=second;
             second=next;

       }
       return 0;
    }
