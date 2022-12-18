#include<stdio.h>

int n = 0;

void one(char *tab) {
    if (n == 0) {
        printf("Empty table\n");
        return;
    }

    for(int i = 0; i < n; i++) {
        printf("%c\t", tab[i]);
    }
    printf("\n");
}

void two(char *tab) {
    if(n < 100) {
        char x;
        scanf("\n%c", &x);
        if(x<= '9' && x >= '0') {
            tab[n] = x;
            n++;
            return;
        } else {
            printf("This is not a number\n");
            return;
        }
    }
    printf("Not enough space in array\n");
}

void three(char *tab) {
    int idx = 0;
    scanf("\n%d", &idx);
    if(!(idx > 0 && idx < n)) {
        printf("not in the range\n");
        return;
    }
    n--;

    for(int i = idx; i <n; i++){
        tab[i] = tab[i+1];
    }
}

void forth(char *tab) {
    
}

int main() {
    char tab[100];
    int choice = 0;
    while (1)
    {
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            one(tab);
            break;
        case 2:
            two(tab);
            break;
        case 3:
            three(tab);
            break;
        default:
            break;
        }
    }
    
}