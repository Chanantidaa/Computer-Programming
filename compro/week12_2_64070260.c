#include "stdio.h"
#include "string.h"

struct Distance
{
    int feet, inch;
} d[2];

float sum_distance(){
    int toInch, lastFeet;
    float lastInch;
    toInch = ((d[0].feet + d[1].feet) * 12) + d[0].inch + d[1].inch;
    lastFeet = toInch / 12;
    lastInch = toInch - (lastFeet*12);
    printf("Sum of two distance: %d'-'%.1f\n", lastFeet, lastInch);
}

int main()
{
    printf("Your output should look similar to the following:\n");
    printf("Enter 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d[0].feet);
    printf("Enter inch: ");
    scanf("%d", &d[0].inch);
    printf("Enter 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d[1].feet);
    printf("Enter inch: ");
    scanf("%d", &d[1].inch);
    sum_distance();
}