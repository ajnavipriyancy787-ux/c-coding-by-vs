#include<stdio.h>
int main()
{
 int marks;
 printf("ENTER VALUE OF marks:"); 
 scanf("%d",&marks);
 if(marks<33)
 {
    printf("fail");
 }
 else if (marks<50)
 {
    printf("poor");
 }
  else if (marks<75)
 {
    printf("average");
 }
 
 else
 {
  printf("topper");
 }
 return 0;
}