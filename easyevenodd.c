#include<stdio.h>
int main(){
    int n, even, odd;
    printf("Enter the number that you want: ");
    scanf("%d",&n);

    if(n % 2 ==0){
        printf("it is even");
    }
    else{
      printf("it is odd");
    }
return 0;
}
