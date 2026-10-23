#include<stdio.h>
int main() {
    int a;
    printf("Enter the first number:");
    scanf("%d", &a);
    if( a <= 1) {
        printf("%d is neither prime nor composite.", a);
    } else {
        int isPrime = 1; 
        for(int i = 2; i <= a / 2; i++) {
            if(a % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime) {
            printf("%d is a prime number.", a);
        } else {
            printf("%d is a composite number.", a);
        }
    }
}