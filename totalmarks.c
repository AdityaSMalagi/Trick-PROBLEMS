#include<stdio.h>
int main(){
    float marks1,marks2,marks3,marks4,marks5 ,Total_marks;
    printf("Enter the marks1:");
    scanf("%f",&marks1);

    printf("Enter the marks2:");
    scanf("%f",&marks2);
    printf("Enter the marks3:");
    scanf("%f",&marks3);
    printf("Enter the marks4:");
    scanf("%f",&marks4);
    printf("Enter the marks5:");
    scanf("%f",&marks5);

  Total_marks = marks1 + marks2 + marks3 + marks4 + marks5 ;
  printf("Total number of marks in SEM : %f \n",Total_marks);
  return 0;

}