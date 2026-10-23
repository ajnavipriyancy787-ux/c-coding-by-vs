#include<stdio.h>
int main()
{
    //int i; not necessary to declare i here we can declare it in for loop too
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
           printf("%d\n",i);
        }
    }
return 0;
}