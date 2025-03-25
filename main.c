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


int main(){
     
  struct node node1, node2, node3;
  
  
  node1.value = 1;
  node2.value = 2;
  node3.value = 3;


  struct node* head = &node1;


  node1.next = &node2;
  node2.next = &node3;

  node3.next = NULL;


  printList(head);

  return 0;

}
