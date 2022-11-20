#include <stdio.h>

int main() {
    int n;
    long buff = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        
        buff += i * i;
    }
    printf("%ld\n", buff);
}