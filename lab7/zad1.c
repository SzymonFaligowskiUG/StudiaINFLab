#include <stdio.h>

int x = 10;

void showAddresses(int *a, int *b) {
    printf("show Addresses *a = %p; *b= %p\n", a, b);

}

int main(){
    int y = x;
    printf("*x = %p; *y= %p\n", &x, &y);
    showAddresses(&x, &y);
}