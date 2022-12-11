#include <stdio.h>

int show(int n) {
    if(n ==0) {
        return 0;
    }
    
    printf("%d\t", n);
    return show(n-1);
}
 
void main()
{
    show(10);
}