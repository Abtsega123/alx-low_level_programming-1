#include"holberton.h" 

void print_line(int n){

    while(n>0){
        _putchar('_');
        n--;
    }
    if(n == 0 || n <0){
        _putchar('\n');
    }
}
