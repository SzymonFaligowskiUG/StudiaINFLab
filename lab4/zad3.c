#include <stdio.h>

int kpow( int x, int y) {
    int cache = x;
    for (int i = 1; i < y; i++)
    {
        cache *=x;
    }
    return cache;
}

int main() {
    int a, b, c, cache;
    scanf("%d %d", &a, &b);
    c = 1;
    while (kpow(a, c) < b)
    {
        c++;
    }
    printf("%d\n", ++c);
}
