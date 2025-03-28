#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int value;
    struct node *next;
} node;


typedef struct queue{
    struct node *head;
    struct node *tail;
} queue;

void init_queue(queue *q){
    q->head = NULL;
    q->tail = NULL;
}

int enqueue(int value, queue *queue){

    node *new_node = malloc(sizeof(node));
    new_node->value = value;

    if(queue->tail == NULL){
        queue->tail = new_node;
    }
    



    return 0;
}

int dequeue(queue *q){
    if(q->head == NULL) return 0;
    node *item = q->head;
    
}

void print_queue(queue *q){
    node *tail = q->tail;
    printf("q-tail = %i\n",q->tail->value);
    while (tail)
    {
        printf("%i\n",tail->value);
        tail = tail->next;
    }

    printf("q-head%i\n",q->head->value);
    
}


int main(){
    queue *my_queue;
    init_queue(my_queue);

    enqueue(1,my_queue);
    enqueue(2,my_queue);
    enqueue(3,my_queue);
    print_queue(my_queue);

    


    return 0;
}