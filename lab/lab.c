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



lab *modify_lab(){
    lab *l;
    l->age = 1000;

    return l;
}

int main(){


    struct lab one = {.age = 1};
    struct lab two = {.age = 2};

    swap_age(&one,&two);


    printf("one = %i",one);
    printf("two = %i",two);

    lab *sl  = modify_lab();

    printf("%i", sl->age);


    return 0;
}