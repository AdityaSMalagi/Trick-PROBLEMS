#include<stdio.h>
int main(){
    float length,breadth,perimeter;
    printf("Enter the length of the rectangle:");
    scanf("%f",&length);
    printf("Enter the breadth of the rectangle:");
    scanf("%f",&breadth);

    perimeter = (length + breadth) * 2;
    printf("The perimeter of the rectangle is:%.2f",perimeter);
    return 0;
}