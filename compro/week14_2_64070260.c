//singly linked list
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct list {
    char data[256];                        
    struct list *next;           
};
void print_list(struct list *head, struct list *tail);
int main()
{
    struct list *head;
    struct list *temp, *temp2, *temp3;
    struct list *new;
    int num, choice;
    char ch[256];
    printf("Enter the number of nodes: ");
    scanf("%d", &num);
    head = malloc(sizeof(struct list));
    printf("Enter data for node 1: ");
    scanf("%s", &head->data);
    new = head;
    for (int i = 0; i < num-1 ; i++)
    {
        new->next = malloc(sizeof(struct list));
        new = new->next;
        printf("Enter data for node %d: ",i+2);
        scanf("%s", &new->data);
    }
    new->next = NULL;
    printf("\nData entered in the list:\n");
    print_list(head, new);

    printf("\n\n---- Menu ----\n");
    printf("1. Insert\n2. Delete\n3. Exit\n");
    printf("\nEnter your choice (1-3): ");
    scanf("%d", &choice);
    if (choice == 1){
        printf("Enter data to insert: ");
        scanf("%s", ch);
        printf("Enter the position to insert: ");
        scanf("%d", &num);
        temp2 = head;
        temp3 = head;
        for (int i = 0; i < num-2; i++)
        {
            temp2 = temp2->next;
        }
        for (int i = 0; i < num-1; i++)
        {
            temp3 = temp3->next;
        }
        temp = malloc(sizeof(struct list));
        strcpy(temp->data, ch);
        temp2->next = temp;
        temp->next = temp3;
        printf("\nThe new list is:\n");
        print_list(head, new);

        }
    else if (choice == 2){
        printf("\nEnter the position to delete: ");
        scanf("%d", &num);
        temp2 = head;
        temp3 = head;
        for (int i = 0; i < num-2; i++)
        {
            temp2 = temp2->next;
        }
        for (int i = 0; i < num-1; i++)
        {
            temp3 = temp3->next;
        }
        temp2->next = temp3->next;
        printf("\nThe new list is:\n");
        print_list(head, new);
        }
    
    return 0;

}
void print_list(struct list *head, struct list *tail)
{
    struct list *temp;
    temp = head;
    while (temp != tail)
    {
        printf("%s -> ", temp->data);
        temp = temp->next;
    }
    printf("%s", tail->data);
}