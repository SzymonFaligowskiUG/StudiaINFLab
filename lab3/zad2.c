#include <stdio.h>

int main()
{
    float a, b;
    char operand;
    scanf("%c %f %f", &operand, &a, &b);
    switch (operand)
    {
    case '+':
        printf("%f\n", a + b);
        break;
    case '-':
        printf("%f\n", a - b);
        break;
    case '*':
        printf("%f\n", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("You can not devide by zero ==> pattern: a / b == / a b");
            break;
        }
        printf("%f\n", a / b);
        break;

    default:
        printf("Unknown operation");
        break;
    }
    return 0;
}