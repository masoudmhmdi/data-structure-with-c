#include <stdio.h>


typedef struct tree_node{
    int value;
    struct tree_node *left;
    struct tree_node *right;
} tree_node;


void create_node(){};

void print_tree(tree_node *root_node){};



int main(){
    printf("hello from tree");
    

    return 0;
}