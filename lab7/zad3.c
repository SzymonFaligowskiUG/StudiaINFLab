#include <stdio.h>

void swap(int *a, int *b) {
    int z = *a;
    *a = *b;
    *b = z;

}

int main(){
    int x, y;

    x = 10;
    y = 50;
    printf("x = %d; y = %d\n", x,y);
    swap(&x, &y);
    printf("x = %d; y = %d\n", x,y);

}