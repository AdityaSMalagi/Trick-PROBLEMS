#include<stdio.h>
int main(){
    int num,once_digit;
    printf("Enter a number:");
    scanf("%d",&num);

    once_digit = (num % 10);

    printf("the digit at onces place is:%d\n",num,once_digit);
    return 0;
}

