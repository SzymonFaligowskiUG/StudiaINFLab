#include <stdio.h>
#include <string.h>

int palindrome(char c[100],int i, int j) {
    if (j == i)
        return 1;
    else if(c[i] == c[j])
        return palindrome(c, ++i, --j);
    else
        return 0;
}

int main() {
    char chaine[100] = "makapaka";
    int pal;
    pal = palindrome(chaine, 0, strlen(chaine) -1 );
    printf("%d", pal);
    return 0;
}