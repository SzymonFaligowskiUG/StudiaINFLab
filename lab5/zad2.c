#include<stdio.h>

int compare(char a, char b){
    if (a == b) {
        return 1;
    }
    return 0;
}

int main(){
    char a,b;
    scanf("%c %c", &a, &b);
    printf("%d\n", compare(a,b));
}