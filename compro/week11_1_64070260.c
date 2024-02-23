#include <stdio.h>

int zeroNum = 0, oneNum = 0;
void decToBinary(int n) {
    for (int i = (sizeof(n) * 8 - 1); i >= 0; i--) {
        int j = n >> i;
        if (j & 1)
            oneNum++;
        else
            zeroNum++;
    }
}

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    decToBinary(num);

    printf("Total zero bit is %d\n", zeroNum);
    printf("Total one bit is %d\n", oneNum);
}
