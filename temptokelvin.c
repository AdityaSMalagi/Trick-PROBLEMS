#include<stdio.h>
int main(){
    float temp , kelvin;
    printf("Enter the temp:");
    scanf("%f",&temp);

    kelvin = 273 + temp;
    printf("%.2f of temp is equal to %.2f of kelvin",temp,kelvin);
    return 0;
}