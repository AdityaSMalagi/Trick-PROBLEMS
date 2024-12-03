#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct voter_information {
    char aadhar[20];
    char name[50];
    char birth_date[15];
    int has_voted;
    struct voter_information *next;
} node;

node *head = NULL;

void add_voter() {
    node *new_node = (node*)malloc(sizeof(node));
    printf("Enter Aadhar number: ");
    scanf("%s", new_node->aadhar);
    printf("Enter Name: ");
    scanf("%s", new_node->name);
    printf("Enter Birth Date (dd/mm/yyyy): ");
    scanf("%s", new_node->birth_date);
    new_node->has_voted = 0;
    new_node->next = head;
    head = new_node;
    printf("Voter added successfully!\n");
}

void show_voters() {
    node *ptr = head;
    while (ptr != NULL) {
        printf("Aadhar: %s\n", ptr->aadhar);
        printf("Name: %s\n", ptr->name);
        printf("Birth Date: %s\n", ptr->birth_date);
        printf("Has Voted: %s\n", ptr->has_voted ? "Yes" : "No");
        ptr = ptr->next;
    }
}

void vote() {
    char aadhar[20];
    printf("Enter your Aadhar number to vote: ");
    scanf("%s", aadhar);
    node *ptr = head;
    while (ptr != NULL) {
        if (strcmp(ptr->aadhar, aadhar) == 0) {
            if (ptr->has_voted) {
                printf("You have already voted.\n");
            } else {
                printf("Vote for your candidate (1/2/3): ");
                int choice;
                scanf("%d", &choice);
                ptr->has_voted = 1;
                printf("Thank you for voting!\n");
            }
            return;
        }
        ptr = ptr->next;
    }
    printf("Voter not found.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n***** ONLINE VOTING SYSTEM *****\n");
        printf("1. Add Voter\n");
        printf("2. Show Voters\n");
        printf("3. Vote\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_voter();
                break;
            case 2:
                show_voters();
                break;
            case 3:
                vote();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
