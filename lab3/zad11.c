#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Input the three sides of a trainagel:\n");

    scanf("%d %d %d", &x, &y, &z);
    if (x >= y && x >= z)
    {
        // x
        if (y * y + z * z == x * x)
        {
            printf("true\n");
            return 0;
        }
    }
    else if (y >= x && y >= z)
    {
        // y
        if (x * x + z * z == y * y)
        {
            printf("true\n");
            return 0;
        }
    }
    // z
    if (y * y + x * x == z * z)
    {
        printf("true\n");
        return 0;
    }
    printf("false\n");
    return 0;
}