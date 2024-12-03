#include<stdio.h>
int main(){
    int num = 123,reverse = 0, rem;
    while(num != 0){
    rem = num % 10;
    reverse = reverse * 10 + rem;
    rem = num / 10;
    }
      printf("Reverse of the number:%d\n", reverse);
   return 0;
}