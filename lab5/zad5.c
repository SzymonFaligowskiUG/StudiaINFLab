#include<stdio.h>
#include<math.h>
#include<malloc.h>

int min(int x, int y) {
    if (x > y) return y;
    return x;
}

int max(int x, int y) {
    if (x > y) return x;
    return y;
}

int* intersect(int a1, int b1, int a2, int b2) {
    int l = 2;
    int* x = malloc(sizeof(int) * l);
    x[0] = x[1] = -1;
    int a3, b3;
    a3 = max(a1, a2);
    b3 = min(b1, b2);
    if (a3 > b3) {
        return x;
    }
    x[0] = a3;
    x[1] = b3;
    return x;
}

int main(int argc, char const *argv[])
{
    int a1, a2, b1, b2, c1, c2;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    int* x = intersect(a1, b1, a2, b2);
    printf("%d\n", x[0]);

    free(x);
    return 0;
}
