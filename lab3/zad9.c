#include <stdio.h>

int main()
{
    int x1, y1, x2, y2;
    printf("(x1,y1)--------------|\n|------------------|\n|------------------|\n|------------------|\n|--------------(x2,y2)\n");
    printf("Enter (x1, y1) point\n");
    scanf("%d %d", &x1, &y1);
    printf("Enter (x2, y2) point\n");
    scanf("%d %d", &x2, &y2);
    int a = x1 - x2;
    int b = y1 - y2;
    if (a < 0)
        a *= -1;
    if (b < 0)
        b *= -1;

    int area = a * b;
    int circuit = 2 * (a + b);

    printf("area: %d\ncircuit: %d\n", area, circuit);
    return 0;
}