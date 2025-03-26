#include <stdlib.h>
#include <stdio.h>

struct node
{
    int value;
    struct node* next;
};




void printList(struct node* head){
    struct node* current = head;
    while (current != NULL)
    {
        printf("%i\n", current->value);
        current = current->next;
    };
}

struct node *create_new_node(int value){
    struct node *created_node = malloc(sizeof(struct node));
    created_node->value = value;
    created_node->next = NULL;
    return created_node;
}

void insert_new_node(struct node **head, struct node *new_node){
    new_node->next = *head;
    *head = new_node;
}

void insert_after_node(struct node* target_node, struct node *new_node){
    new_node->next = target_node->next;
    target_node->next = new_node;
}


int main(){
     
  struct node *head = NULL;
  struct node *temp_node;

  struct node* ten;

  
    for (int i = 0; i < 25; i++)
    {

        temp_node = create_new_node(i);
        insert_new_node(&head, temp_node);
        if(i == 10){
            ten = temp_node;
        };
    };

    insert_after_node(ten,create_new_node(1000000));

    printList(head);

    

  return 0;

}



