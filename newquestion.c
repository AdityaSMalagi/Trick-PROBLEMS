#include<stdio.h>

int main(){
    float Distance , Speed,Time;
   
    printf("Enter the value of speed and time :");
    scanf("%f %f ,&Speed, &Time");
    Distance = Speed * Time ;
    printf("Distance of object is %f ",Speed,Time);
    return 0;
}