#include<stdio.h>
/*#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00
#define COMMISSION 0.02 */

int main (){
    int quantity ,base_salary = 1500.00;
    float gross_salary,price,bonus_rate = 200.00;
    float bonus,commission = 0.02;
    printf("Enter the sold and price\n");
    scanf("%d  %f",&quantity, &price);

    bonus = bonus_rate * quantity;
    commission = commission * quantity * price;
    gross_salary =base_salary + bonus + commission;

    printf("\n");
    printf("Bonus = %8.2f\n", bonus);
    printf("commission = %8.2f\n", commission);
    printf("Gross_salary = %8.2f\n", gross_salary);
    return 0;
}