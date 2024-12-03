#include<stdio.h>
int main(){
    float Distance,Time,Speed;
    printf("Enter Speed:\n");
    scanf("%f",&Speed);
    printf("Enter Time :\n");
    scanf("%f",&Time);

    Distance = Speed * Time ;
    printf("The Distance travelled by the Object: %f\n", Distance, Time, Speed);
    return 0;
}