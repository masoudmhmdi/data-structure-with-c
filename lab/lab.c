#include <stdlib.h>
#include <stdio.h>



void swap(int *x, int *y) {
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;

    
    return;
}
typedef struct lab
{
    int age;
} lab;

void swap_age(lab *one , lab *two){
    lab *temp;

    temp = one;

    one = two;
    two = temp;
}


int main(){


    struct lab one = {.age = 1};
    struct lab two = {.age = 2};

    swap_age(&one,&two);


    printf("one = %i",one);
    printf("two = %i",two);


    return 0;
}