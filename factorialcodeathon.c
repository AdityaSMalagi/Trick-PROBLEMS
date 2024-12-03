#include<stdio.h>
int factorial(int n){
    if (n == 0 ){
        return 1;
    }
    return n * factorial(n - 1);
}
 
 int main(){
    int n;
    printf("Enter an integer (0 <= n <= 12): ");
    scanf("%d", &n);

    if(n < 0 || n > 12){
        printf("Input out of range please enter a number between 0 and 12.\n");
        return 1;
    }
    printf("Factorial of %d is %d\n", n, factorial(n));
    return 0;
 }