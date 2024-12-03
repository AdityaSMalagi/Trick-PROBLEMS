#include<stdio.h>
int main(){
    float cel, far;
    printf("Enter the thing that you want: ");
    scanf("%f",&cel);

   far = ((9/5) * cel) + 32;
    printf("%.2f of celsius = %.2f of farahneit\n", cel, far);

    return 0;
}