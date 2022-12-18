#include <stdio.h>

void swap(int *a, int *b) {
    int z = *a;
    *a = *b;
    *b = z;

}

void sort3(int *a, int *b,int *c){

    if (*a > *c)
   swap(a, c);

if (*a > *b)
   swap(a, b);

if (*b > *c)
   swap(b, c);

}

int main(){
    int a, b, c;
    a = 3;
    b = 2;
    c = 1;
    printf("a = %d, b = %d, c = %d\n", a,b,c);
    sort3(&a,&b,&c);
    printf("a = %d, b = %d, c = %d\n", a,b,c);
}