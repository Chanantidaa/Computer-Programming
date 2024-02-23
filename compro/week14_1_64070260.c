//singly linked list
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
struct list {
    char data[256];                        
    struct list *next;           
};
int main()
{
    struct list *colllect;
    struct list *temp;
    struct list *new;
    int input;        
    printf("Enter the number of nodes: ");
    scanf("%d", &input);
    colllect = malloc(sizeof(struct list));
    printf("Enter data for node 1: ");
    scanf("%s", &colllect->data);
    new = colllect;
    for (int i = 0; i < input-1 ; i++)
    {
        new->next = malloc(sizeof(struct list));
        new = new->next;
        printf("Enter data for node %d: ",i+2);
        scanf("%s", &new->data);
    }
    new->next = NULL;
    temp = colllect;
    while (temp != new)
    {
        printf("%s -> ", temp->data);
        temp = temp->next;
    }
    printf("%s", new->data);
    return 0;
}