#include <stdio.h>

int main() {
    int select;
    printf("Dla 0 radianów wybierz 1\nDla 1/6 Pi rad wybierz 2\nDla 1/4 Pi rad wybierz 3\nDla 1/3 Pi rad wybierz 4\nDla 1/2 Pi rad wybierz 5\n");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        printf("0 radianów to 0 stopni\n");
        break;
    case 2:
        printf("1/6 Pi radianów to 30 stopni\n");
        break;
    case 3:
        printf("1/4 Pi radianów to 45 stopni\n");
        break;
    case 4:
        printf("1/3 Pi radianów to 60 stopni\n");
        break;
    case 5:
        printf("1/2 Pi radianów to 90 stopni\n");
        break;
    default:
        printf("Wrong choice\n");
        break;
    }
    return 0;
}