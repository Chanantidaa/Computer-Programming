#include<stdio.h>
#include<stdlib.h>

struct number {
  int number1;
  int number2;
  int number3;
};
int main(void)
{
    // Create an instance of the struct
    struct number numStruct;
    
    // Initialize struct variables
    numStruct.number1 = 0;
    numStruct.number2 = 1;
    numStruct.number3 = 2;
    
    // Get a pointer to the first integer of the struct
    int* numPtr = (int*)&numStruct;

    // Print the struct by retreiving each int
    int i;
    for(i = 0; i <= 2; i++)
    {
        // Bump through to the next integer
        printf("%d\n",*(numPtr + i));
    }
    return 0;
}