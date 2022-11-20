#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int main()
{
    int a1, b1, a2, b2, x, y;
    scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
    x = a1;
    y = b1;
    system("clear");
    while (true)
    {
        // Render
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (x == j && y == i)

                {
                    printf("x\t");
                }
                else
                {
                    printf("*\t");
                }
            }
            printf("\n");
        }

        sleep(1);
        system("clear");

        // Logic
        x += a2 - a1;
        y += b2 - b1;
        if (x < 0 || x >= 10)
        {
            break;
        }
        else if (y < 0 || y >= 10)
        {
            break;
        }
    }
}