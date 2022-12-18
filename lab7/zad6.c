#include <stdio.h>

void operation(int *f, int *l) {
    int n = (l-f);
    printf("leng %d\n", n);


    for (int i = 0; i <= n; i++){
        *(f + i) = i + 1;
    }
}

int main(){
    int x[10];
    operation(&x, &x[9]);
    for(int i = 0; i < 10; i++) {
        printf("%d\n", x[i]);
    }
}