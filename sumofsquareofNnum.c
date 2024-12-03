#include<stdio.h>
int sum_of_squares(int n){
    int sum = 0;
    for(int i = 1; i <=n; i++){
        sum += i * i;
    }
    return sum;
}

int main(){
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);

    int result = sum_of_squares(n);
    printf("The sum of square of the first %d numbers is %d\n",n ,result);
    return 0;
}