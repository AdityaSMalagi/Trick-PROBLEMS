#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int account_number;
    char name[100];
    float balance;
} Account;

void create_account(Account *acc, int acc_num) {
    acc->account_number = acc_num;
    printf("Enter account holder's name: ");
    scanf("%s", acc->name);
    acc->balance = 0.0;
    printf("Account created successfully!\n");
}

void view_balance(Account *acc) {
    printf("Account Number: %d\n", acc->account_number);
    printf("Account Holder: %s\n", acc->name);
    printf("Current Balance: %.2f\n", acc->balance);
}

void deposit(Account *acc, float amount) {
    if (amount > 0) {
        acc->balance += amount;
        printf("Deposit successful! New Balance: %.2f\n", acc->balance);
    } else {
        printf("Invalid amount. Please enter a positive value.\n");
    }
}

void withdraw(Account *acc, float amount) {
    if (amount > 0 && amount <= acc->balance) {
        acc->balance -= amount;
        printf("Withdrawal successful! New Balance: %.2f\n", acc->balance);
    } else {
        printf("Invalid amount or insufficient balance.\n");
    }
}

int main() {
    Account acc;
    int choice, acc_num = 1;  // Starting account number

    while (1) {
        printf("\nBanking System Menu:\n");
        printf("1. Create Account\n");
        printf("2. View Balance\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create_account(&acc, acc_num++);
                break;
            case 2:
                view_balance(&acc);
                break;
            case 3:
                printf("Enter amount to deposit: ");
                float deposit_amount;
                scanf("%f", &deposit_amount);
                deposit(&acc, deposit_amount);
                break;
            case 4:
                printf("Enter amount to withdraw: ");
                float withdraw_amount;
                scanf("%f", &withdraw_amount);
                withdraw(&acc, withdraw_amount);
                break;
            case 5:
                printf("Thank you for using the banking system!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
