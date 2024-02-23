#include "stdio.h"
#include "string.h"

struct students {
    int stdId;
    char name[30];
} s[2];

int main() {
    int i;
    for(i=0; i<2; i++){
        printf("Enter your student id: ");
        scanf("%d", &s[i].stdId);
        printf("Enter your name: ");
        scanf("%s", s[i].name);
    }

    printf("%d is name : %s\n", s[0].stdId, s[0].name);
    printf("%d is name : %s\n", s[1].stdId, s[1].name);
}