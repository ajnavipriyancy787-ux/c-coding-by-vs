 #include <stdio.h>
 #include <math.h>
 int main()
{
 float b,p;
 printf("Enter value of base:",b);
 scanf("%f",&b);
 printf("Enter value of perpendicular:",p);
 scanf("%f",&p);
 printf("The value of hypotenuse is : %.2f",sqrt((b*b)+(p*p)));
  return 0;
}
