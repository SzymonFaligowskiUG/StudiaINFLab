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
    int vx = a2 - a1;
    int vy = b2 - b1;
    system("clear");
    while (true)
    {
        //Render
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

        //Logic
        x += vx;
        y += vy;

        if(x == 9 || x == 0) {
            vx = -1 * vx;
        }
        if(y == 9 || y == 0) {
            vy = -1 * vy;
        }
    }
}