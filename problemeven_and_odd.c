#include<stdio.h>
int main(){
    int number;
    int even_count = 0, odd_count = 0;
    char ch;
     printf("Enter the list of integers:");
     do{
        scanf("%d", &number);
        if(number % 2 == 0){
        even_count++;
        }
        else{
            odd_count++;
        }
     }while((ch = getchar()) != '\n');
     printf("Even: %d, Odd: %d\n", even_count, odd_count);
     return 0;
}