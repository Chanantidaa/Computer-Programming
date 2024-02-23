#include "stdio.h"
int choose;
void make_animal_noise(choose)
{
    switch (choose)
    {
    case 1:
        printf("Antelopes noise: Snort\n");
        break;
    case 2:
        printf("Bat noise: Screech\n");
        break;
    case 3:
        printf("Cat noise: Meow\n");
        break;
    case 4:
        printf("Cat noise: Woof\n");
        break;
    case 5:
        printf("Dolphin noise: Click\n");
        break;
    case 6:
        printf("Duck noise: Quack\n");
        break;
    case 7:
        printf("Cat noise: Neigh\n");
        break;
    case 8:
        printf("Mouse noise: Squeak\n");
        break;
    case 9:
        printf("Owl noise: Hoot\n");
        break;
    case 10:
        printf("Snake noise: Hiss\n");
        break;
    }
}

int main()
{
    printf(":: ANIMAL ::\n");
    printf("---------------------------------\n");
    printf("1. Antelopes\n");
    printf("2. Bat\n");
    printf("3. Cat\n");
    printf("4. Dog\n");
    printf("5. Dolphin\n");
    printf("6. Duck\n");
    printf("7. Horse\n");
    printf("8. Mouse\n");
    printf("9. Owl\n");
    printf("10. Snake\n");
    printf("---------------------------------\n");
    printf("Enter your choice: ");
    scanf("%d", &choose);

    make_animal_noise(choose);
}