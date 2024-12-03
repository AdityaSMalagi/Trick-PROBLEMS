#include<stdio.h>
int main(){
    int i ,n, sum = 0;
    printf("the number from 0 to 10:");
    scanf("%d",&n);

    for(i = 1;i<=n;i++){
    sum +=i ;;
    }
    printf("%d\n",sum,n);

    return 0;
}