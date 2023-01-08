#include <stdio.h>
#include <stdlib.h>

int main() {
    char buff[20];
    int max = 0;
    int min = 0;
    FILE* fp = fopen("./liczby.txt", "r");
    for(int i = 0; i < 100; i++) {
        fscanf(fp, "%s", buff);
        int a = atoi(buff);
        if(a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
    }
    printf("max:%d min:%d\n", max, min);
    return 0;
}