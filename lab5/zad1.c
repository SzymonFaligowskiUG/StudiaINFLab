#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b == 0)
    {
        return 0;
    }

    return a / b;
}

int main()
{
    float a, b;
    char operation;
    printf("Give me two numbers:\n");
    scanf("%f %f", &a, &b);
    printf("What do you want to do with this numbers? + - * /:\n");
    scanf("%s", &operation);
    switch (operation)
    {
    case '+':
        printf("%f", add(a, b));
        break;
    case '-':
        printf("%f", subtract(a, b));
        break;
    case '*':
        printf("%f", multiply(a, b));
        break;
    case '/':
        printf("%f", divide(a, b));
        break;

    default:
        break;
    }
    printf("\n");

}