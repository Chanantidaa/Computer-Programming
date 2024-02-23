#include "stdio.h"
int plus(int a, int b);

int main() {
    int result;
    result = plus(2,3);
    printf("%d\n", result);
}

int plus(int a, int b) {
    int result = 0;
    result = a+b;
    return result;
}