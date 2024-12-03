#include<stdio.h>
int main(){
    int minutes, hours , remaining_minutes;
    printf("Enter the minutes:");
    scanf("%d",&minutes);

    hours = minutes / 60;
    remaining_minutes = minutes % 60;

    printf("%d minutes is equal to %d of hours and %d of minutes.\n",minutes,hours,remaining_minutes);
    return 0;
}