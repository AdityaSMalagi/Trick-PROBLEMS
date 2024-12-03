#include<stdio.h>
int main(){
    int a = 2, N = 1000;
    while(a < N){
        printf("%d\n",a);
        a *= a;
     }
     return 0;
}