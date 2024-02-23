#include <stdio.h>
struct date
{
    int day: 15;
    int month: 15;
    int year: 15;
};
int main()
{
    printf("Size of date: %lu bytes\n", sizeof(struct date));
    struct date today = {22, 4, 2021};
    printf("Date: %d/%d/%d\n", today.day, today.month, today.year);
    return 0;
}