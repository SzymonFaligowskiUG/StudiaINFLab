#include <stdio.h>

int factTR( int n,  int a)
{
    if (n <= 1)
        return a;
    return factTR(n - 1, n * a);
}


int fact(unsigned int n) { return factTR(n, 1); }
int main()
{
    printf("%d", fact(5));
    
    return 0;
}