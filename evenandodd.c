#include<stdio.h>
int main()
{
 int a,b;
 printf("ENTER VALUE OF a:"); 
 scanf("%d",&a);
 printf("ENTER VALUE OF b:"); 
 scanf("%d",&b);
 
 if(a>b)
 {
    printf("a is greater than b");
 }
 else if (b>a)
 {
    printf("B is greater than a");
 }
 
 else
 {
  printf("a is equal to b");
 }
 return 0;
}