#include "stdio.h"
#include "string.h"

struct Students{
    int stdId;
    char fullName[100];
    char grade;
} s[5];

int main() {
    int roll;
    printf("Enter the information of five students: \n");
    for(int i =1; i<=5; i++){
        printf("For roll number %d,\n", i);
        printf("Enter student id: ");
        scanf("%d", &s[i-1].stdId);
        printf("Enter full name: ");
        scanf(" %[^\n]s", s[i-1].fullName);
        printf("Enter grade: ");
        scanf(" %c", &s[i-1].grade);
    }
    printf("\nEnter roll number for display: ");
    scanf("%d", &roll);
    printf("%d\n", s[roll-1].stdId);
    printf("%s\n", s[roll-1].fullName);
    printf("%c\n", s[roll-1].grade);
}