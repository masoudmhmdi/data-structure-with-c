#include <stdio.h>
// #include <stdlib.h>
#include<string.h>
// #include<stdint.h>
#include<stdbool.h>





#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct person {
    char name[MAX_NAME];
    int age;
    struct person *next;
} person;


// hash function
unsigned int hash(char *name){
    int length = strlen(name);
    unsigned int hash_value = 0;  

    for (int i = 0; i < length; i++)
    {
        hash_value += *(name + (sizeof(char) * i));    
        hash_value = hash_value * name[i] % TABLE_SIZE;
    }
    
    return hash_value;
}


person *hash_table[TABLE_SIZE];


void init_table(){
    for(int i = 0; i < TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
}

void print_table(){

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL){
            printf("%i->NULL\n",i);
        }else{
            printf("%i\n",i);
            person *head = hash_table[i];
            int inner_index = 0;
            while (head)
            {
                printf("\t %i-> %s\n",inner_index,head->name);
                head = head->next;
                inner_index++;
            }
        }
    }
    
}

bool insert_item(person *item){
    if(item == NULL) return false;

    int index = hash(item->name);
    if(hash_table[index] == NULL){
        hash_table[index] = item;
        return true;
    }

    if(hash_table[index] != NULL){
        person *head = hash_table[index];

        while (head)
        {
            if(head->next == NULL){
                head->next = item;
                return true;
            }else{
                head = head->next;
            }
        }
     
    }
    return false;
}

person *lock_up_table(char *name){
    int index = hash(name);
    person *picked = hash_table[index];

    if(picked == NULL){
        return NULL;
    }else{
        person* head = hash_table[index];
        while (head)
        {
            if(strncmp(name, head->name, MAX_NAME) == 0){
                return head;
            }else{
                head = head->next;
            }
        }
        
        return false;
    }
}


int main(){
    init_table();

    person ali = {.age = 10 , .name = "Ali", .next = NULL };
    person mamad = {.age = 10 , .name = "Mamad", .next = NULL };
    person hasan = {.age = 10 , .name = "Hasan", .next = NULL };


    insert_item(&ali);
    insert_item(&mamad);    
    insert_item(&hasan);
    
    // person *x  = lock_up_table("Ali");

    // printf("%s \n",x->name);

    print_table();

    
    return 0;
};