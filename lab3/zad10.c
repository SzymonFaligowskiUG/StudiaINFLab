#include <stdio.h>

int main()

{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z)
    {
        if (y + z > x)
        {
            printf("true");
            return 0;
        }
        printf("false");
        return 0;
    }
    else if (y >= x && y >= z)
    {
        if (x + z > y)
        {
            printf("true");
            return 0;
        }
        printf("false");
        return 0;
    }
    if (x + y > z)
    {
        printf("true");
        return 0;
    }
    printf("false");
    return 0;
}