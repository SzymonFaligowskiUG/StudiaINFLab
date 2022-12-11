#include <stdio.h>

int powR(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * powR(n-1);
}

int main()
{
    printf("%d", powR(5));
    
    return 0;
}
