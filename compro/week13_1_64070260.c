#include "stdio.h"

struct student {
    union{
        int rolNo;
        char fullName[50];
    };
    char grade;
};

int main() {
    char choice;
    struct student info;
    printf("Please enter roll number or full name\n");
    printf("Do you want to enter the roll number (y or n)? ");
    scanf(" %c", &choice);

    if(choice == 'y'){
        print("Enter roll number: ");
        scanf("%d", &info.rolNo);
    }else if(choice == 'n'){
        printf("Enter full name: ");
        scanf(" %[^\n]%*c", info.fullName);
    }

    printf("Enter grade: ");
    scanf(" %c", &info.grade);

    printf("\n");
    if(choice == 'y'){
        printf("Roll number: %d\n", info.rolNo);
        printf("Grade: %c", info.grade);
    }else if(choice == 'n'){
        printf("Full name: %s\n", info.fullName);
        printf("Grade: %c", info.grade);
    }
    return 0;
}