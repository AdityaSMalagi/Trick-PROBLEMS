#include<stdio.h>
int main(){
    int dividend,divisor,remainder;
    printf("Enter the dividend:");
    scanf("%d",&dividend);
    printf("Enter the divisor:");
    scanf("%d",&divisor);

    remainder = dividend % divisor;
    printf("The remainder of the division :%d",remainder);
    return 0;
}