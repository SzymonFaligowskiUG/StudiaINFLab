#include<stdio.h>

int main() {
    char s[20];
    int idx;

    scanf("%s %d", &s, &idx);
    printf("%c", s[idx]);
}