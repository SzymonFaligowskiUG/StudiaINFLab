#include <stdio.h>

int main() {
    int a, b, cache;
    scanf("%d %d", &a, &b);
    cache = a;
    for (int i = 1; i < b; i++)
    {
        cache *=a;
    }
    printf("%d\n", cache);
}