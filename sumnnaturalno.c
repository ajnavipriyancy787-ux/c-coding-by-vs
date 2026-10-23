#include<stdio.h>
int main()
{
    int sum =0,n;
    printf("Give no. till you want sum:",n);
    scanf("%d",&n);
    //scanf used to take input till n natural number user wants to sum
    //if we dont wan't input write any number like 100 in place of n by programmer
        for(int i=1;i<=n;i++)
        {
           sum=sum+i;
           //printf("%d\n",sum); not here it will give each sum from 1 to 100 each time it will add sum and print i
           //giving 100 outputs
        }
         printf("%d\n",sum);
        return 0;
}