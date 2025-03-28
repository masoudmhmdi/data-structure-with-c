#include <stdio.h>

int factorial(int factor){
    if(factor == 1 || factor == 0){
        return 1;
    }else{
        return factor * factorial(factor -1);
    }
}


int tail_factorial(int factor, int prev_value){
    if(factor == 1 || factor == 0){
        return prev_value;
    }else{
        return tail_factorial(factor -1 , factor * prev_value);
    }
}

int main(){

    printf("%i\n",factorial(1));
    printf("%i\n",factorial(2));
    printf("%i\n",factorial(3));
    printf("%i\n",factorial(4));
    printf("%i\n",factorial(5));
    printf("%i\n",factorial(6));
    printf("%i\n",tail_factorial(1, 1));
    printf("%i\n",tail_factorial(2, 1));
    printf("%i\n",tail_factorial(3, 1));
    printf("%i\n",tail_factorial(4, 1));
    printf("%i\n",tail_factorial(5, 1));
    printf("%i\n",tail_factorial(6, 1));
};