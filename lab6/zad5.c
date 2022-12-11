#include <stdio.h>

void bina (int n) {
    if (n == 1){
        printf ("%d ", n % 2);
        return;
    }
    bina(n / 2);
    printf ("%d ", n % 2);
}

int main() {
  bina(1024);
  return 0;
}