#include "stdio.h"
#include "string.h"

struct Students{
    int stdId;
    char fullName[100];
    char grade;
};

int main() {
    struct Students s[5];
    printf("Enter the information of five students: \n");
    for(int i =1; i<=1; i++){
        printf("For roll number %d,\n", i);
        printf("Enter full name: ");
        scanf("%[^\n]s", s[i-1].fullName);
    }
    printf("%s", s[0].fullName);
}