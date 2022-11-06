#include <stdio.h>

int main() {
    char character;
    scanf("%c", &character);
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')){
        printf("true\n");
        return 0;
    }
    printf("false\n");
    return 0;
}