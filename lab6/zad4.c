#include <stdio.h>
int fib(int n, int a, int b)
{
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    return fib(n - 1, b, a + b);
}

// Driver Code
int main()
{
    int n = 4;
    printf("%d", fib(n, 0, 1));
    return 0;
}