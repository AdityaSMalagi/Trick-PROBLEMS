#include<stdio.h>
int main(){
    float num1,num2,avg;
    printf("Enter the first number:");
    scanf("%f",&num1);
     printf("Enter the second number:");
    scanf("%f",&num2);

    avg = (num1 + num2) / 2.0;
    printf("The avg of two number :%f\n",num1,num2,avg);
    return 0;
}