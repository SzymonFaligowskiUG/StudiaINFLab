#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d\n", 2);
    }
    else if (a % 3 == 0)
    {
        printf("%d\n", 3);
    }
    else if (a % 4 == 0)
    {
        printf("%d\n", 4);
    }
    else if (a % 5 == 0)
    {
        printf("%d\n", 5);
    }
    else if (a % 6 == 0)
    {
        printf("%d\n", 6);
    }
    return 0;
}